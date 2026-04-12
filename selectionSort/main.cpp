#include <iostream>

void findSmallest(int arrayIn[], int lenght);


int main(){

    int testArray[] {22, 55, 103, 37, 1, 40, -30, 9, 90, 91, 92, 4, 38, 37, 10}; //15 elements
    int arrayLength = sizeof(testArray) / sizeof(*testArray);
    std::cout << arrayLength << '\n';

    findSmallest(testArray, arrayLength);


    return 0;
}


void findSmallest(int arrayIn[], int lenght){
    //std::cout << arrayIn << '\n';

    int smallest = arrayIn[0];
    int smallestIndex = 0;
    

    for(int i{0}; i < lenght; i++){
        if(arrayIn[i] < smallest){
            smallest = arrayIn[i];
            smallestIndex = i;
        }
        //std::cout << arrayIn[i] << '\n';
    }
    std::cout << smallest << '\n';
    
}