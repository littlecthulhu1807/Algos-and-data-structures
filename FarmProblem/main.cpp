/*
We have a farm of an uspecified size and want to subdivide it into equal squares
We are looking for the biggest square possible
This is solvable in a recursive way -> Euclid’s algorithm

Base case:
    Side A == B
    A is a multiple of B or the other way
Recursive case:
    A > B || B > A ==> 
    Bigger side % smaller side
    smaller = new bigger, smaller = %
    call untill base case is reached
*/

#include<iostream>

int split(int sideA, int sideB);
int min(int sideA, int sideB);
int max(int sideA, int sideB);

int main(){

    std::cout << "Split a field into the biggest possible squares\n";

    //Expected 25
    std::cout << "Field A 50x25 -> min square is: " << split(50, 25) << '\n';
    //Expected 25
    std::cout << "Field B 25x50 -> min square is: " << split(25, 50) << '\n';
    //Expected 80
    std::cout << "Field C 1680x640 -> min square is: " << split(1680, 640) << '\n';
    //Expected 80
    std::cout << "Field D 640x1680 -> min square is: " << split(640, 1680) << '\n';
    std::cout << "Field E 5790x6000 -> min square is: " << split(5790, 6000) << '\n';
    std::cout << "Field F 4655x2505 -> min square is: " << split(4655, 2505) << '\n';

    return 0;
}

int split(int sideA, int sideB){
    int smaller = min(sideA, sideB);
    int bigger = max(sideA, sideB);
    int remainder = bigger % smaller;

    if(remainder == 0)
        return smaller;
    else
        return split(smaller, remainder);
}

int min(int sideA, int sideB){
    if(sideA > sideB)
        return sideB;
    else
        return sideA;
}

int max(int sideA, int sideB){
    if(sideA < sideB)
        return sideB;
    else
        return sideA;
}