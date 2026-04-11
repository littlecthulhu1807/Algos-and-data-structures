#include <iostream>


int main(){

    int testArray[] = {5,6,8,10,11,14,15,17,19,25};
    int lenght = sizeof(testArray)/ sizeof(*testArray) - 1 ; // get the lenght by dividing the bit size by the type size

    int inputNumber{};

    int iterator {0};

    int low = 0;
    int high = lenght;
    
    
    std::cin >> inputNumber;

    do{

        int mid{(low + high) /2};
        int guess = testArray[mid];
        std::cout << mid << "\n";
        std::cout << guess << "\n";

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


        if(iterator >= 5){
            std::cout << "could not find number\n";
            return 0;
        }
        iterator ++;
    }while(low <= high);


    return 0;
}