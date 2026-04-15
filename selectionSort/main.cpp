#include <iostream>

//sort and sort help functions
int findSmallest(int* arrayIn, int lenght);
int* removeSmallest();
int* selectionSort(int* arrayIn, int lenght);

//array Help functions
int* push(int* arrayIn, int& lenght, int element);
void pop();

int main(){

    int testArray[] {22, 55, 103, 37, 1, 40, -30, 9, 90, 91, 92, 4, 38, 37, 10}; //15 elements
    int arrayLength = sizeof(testArray) / sizeof(*testArray);
    std::cout << arrayLength << '\n';

    int* sortedArray = selectionSort(testArray, arrayLength);

    for(int i{0}; i < arrayLength; i++){
        std::cout << sortedArray[i] << " || ";
    }
    std::cout << '\n';
    delete[] sortedArray;

    return 0;
}


//sort and sort help functions
int findSmallest(int* arrayIn, int lenght){

    int smallest = arrayIn[0];
    int smallestIndex = 0;
    

    for(int i{0}; i < lenght; i++){
        if(arrayIn[i] < smallest){
            smallest = arrayIn[i];
            smallestIndex = i;
            std::cout << smallest << '\n';
        }
    }
    return smallest;
}

int* removeSmallest(){

    return nullptr;
}

int* selectionSort(int* arrayIn, int lenght){

    int smallest{0};
    int* sortedArray = new int[lenght] {}; //needs to be dynamically allocated since it can't take lenght otherwise (sincle lenght is determined at runtime)

    //smallest = findSmallest();

    
    for(int i{1}; i < lenght; i++){
        sortedArray[i] = findSmallest(arrayIn, lenght);
    }

    return sortedArray;
}


//array Help functions
int* push(int* arrayIn, int& lenght, int element){
    arrayIn[lenght + 1] = element;
    lenght++;
    return arrayIn;
}