#include <iostream>



int main(){

    int testArray[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int inputNumber{};

    std::cout << "pick a number between 0 and 20\n";
    std::cin >> inputNumber;

    std::cout << "Sorting an array\n";

    int iterator {0};
    int guess{};
    int low = 0;
    int high = (sizeof(testArray)/ sizeof(*testArray)) - 1; // get the lrnght by dividing the bit size by the type size

    
    

    do{

        int mid = low + high;
        guess = testArray[mid];
        
        if(guess == inputNumber){
            std::cout << "your number is at position: " << guess << '\n';
            break;
        }
        
        if(guess < mid){
            low = mid + 1;
        }
        if(guess > mid){
            high = mid - 1;
        }

        if(iterator >= 10){
            std::cout << "could not find number\n";
            break;
        }
        iterator ++;

        std::cout << low << " || " << high << '\n';
    }while(guess != inputNumber);


    return 0;
}