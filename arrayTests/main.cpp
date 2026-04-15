#include <iostream>

void printArray(int* arrayIn, int& cap, int& length);
int* push(int* arrayIn, int& lenght, int element);
int* pop(int* arrayIn, int& lenght);

int main(){
    int capacity {20};
    int mainArray[capacity] = {};
    int length {0};

    printArray(mainArray, capacity, length);

    push(mainArray, length, 22);
    push(mainArray, length, 100);
    push(mainArray, length, 785);
    printArray(mainArray, capacity, length);

    pop(mainArray, length);
    pop(mainArray, length);
    pop(mainArray, length);
    printArray(mainArray, capacity, length);

    push(mainArray, length, 785);
    printArray(mainArray, capacity, length);

    pop(mainArray, length);
    printArray(mainArray, capacity, length);

    return 0;
}

void printArray(int* arrayIn, int& cap, int& length){
    for(int i{0}; i < cap; i++){
        std::cout << arrayIn[i] << " // "; 
    }
    std::cout << '\n';
    std::cout << length << '\n';
}

int* push(int* arrayIn, int& lenght, int element){
    arrayIn[lenght] = element;
    lenght++;
    return arrayIn;
}

int* pop(int* arrayIn, int& lenght){
    lenght--;
    arrayIn[lenght] = 0;
    return arrayIn;
}