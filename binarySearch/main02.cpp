#include<iostream>
#include<vector>

int binarySearch(std::vector<int> vectorIn, int target);

int main(){

    std::vector<int> testArray {1, 6, 8, 9, 11, 22, 30, 31, 32, 33, 35, 64, 69, 70};
    int inputNumber{};

    std::cout << "Enter a number\n";
    std::cin >> inputNumber;

    binarySearch(testArray, inputNumber);

    return 0;
}

int binarySearch(std::vector<int> vectorIn, int target){
    int low{0};
    int high{(int)vectorIn.size()};

    //std::cout << high << '\n';
    //std::cout << vectorIn.size() << '\n';

    do{

        int mid {(low + high) / 2};
        int guess {vectorIn[mid]};

        //std::cout << guess << '\n';
        //std::cout << low << '\n';
        //std::cout << high << '\n';

        if(guess == target){
            std::cout << "Your number is at position: " << mid << " of the array";
            return 0;
        }

        if(guess < target){
            low = mid + 1;
        }else{
            high = mid - 1;
        }

    }while(low <= high);

    std::cout << "Could not find Number";
    return 0;
}