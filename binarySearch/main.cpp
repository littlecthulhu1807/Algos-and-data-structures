#include <iostream>


int main(){

    int testArray[] = {5,6,8,10,11,14,15,17,19,25};
    int lenght = sizeof(testArray)/ sizeof(*testArray) - 1 ; // get the lenght by dividing the bit size by the type size

    int inputNumber{};

    int low = 0;
    int high = lenght;
    
    std::cout << "Input a number\n";
    std::cin >> inputNumber;

    do{

        int mid{(low + high) /2};
        int guess = testArray[mid];

        if(guess == inputNumber){
            std::cout << "your number is at position: " << mid << " of the array\n";
            return 0;
        }

        if(guess < inputNumber){
            low = mid + 1;
        }
        else{
            high = mid -1;
        }
    }while(low <= high);

    std::cout << "could not find number\n";


    return 0;
}