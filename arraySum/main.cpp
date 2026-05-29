/*
Sum up every Element of an array

Base Case:
    Vector is empty
Recursive Case:
    Vec is >= 2
    Call again with vec-1
*/

#include<iostream>
#include<vector>

int sumVec(std::vector<int> vecIn);

int main(){

    std::cout << "The software will sum up vectors.\n";

    std::vector<int> vec00{}; //0
    std::vector<int> vec01{2, 5, 7}; //14
    std::vector<int> vec02{12, 33, 14, 56, 70, 18, 21, 21, 12};// 257

    std::cout << "Vec00: " << sumVec(vec00) << '\n';
    std::cout << "Vec01: " << sumVec(vec01) << '\n';
    std::cout << "Vec02: " << sumVec(vec02) << '\n';

    return 0;
}

int sumVec(std::vector<int> vecIn){
    if(vecIn.size() == 0)
        return 0;
    else{
        std::vector<int> smallerVec{vecIn};
        smallerVec.pop_back();
        return (vecIn[vecIn.size() - 1] + sumVec(smallerVec));
    }
}