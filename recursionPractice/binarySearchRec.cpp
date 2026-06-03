#include<iostream>
#include<vector>

int binarySearch(std::vector<int> vectorIn, int target);
int binarySearchRec(std::vector<int> vectorIn, int target, int low, int high);

int main(){

    std::vector<int> testArray {1, 6, 8, 9, 11, 22, 30, 31, 32, 33, 35, 64, 69, 70};
    int inputNumber{};

    std::cout << "Enter a number\n";
    std::cin >> inputNumber;

    binarySearch(testArray, inputNumber);
    std::cout << "REC: Your number is at position: " << binarySearchRec(testArray, inputNumber, 0, testArray.size()) << " of the array\n";
    

    return 0;
}

int binarySearch(std::vector<int> vectorIn, int target){
    int low{0};
    int high{(int)vectorIn.size()};


    do{

        int mid {(low + high) / 2};
        int guess {vectorIn[mid]};

        if(guess == target){
            std::cout << "Your number is at position: " << mid << " of the array\n";
            return 0;
        }

        if(guess < target){
            low = mid + 1;
        }else{
            high = mid - 1;
        }

    }while(low <= high);

    std::cout << "Could not find Number\n";
    return 0;
}

int binarySearchRec(std::vector<int> vectorIn, int target, int low, int high){

    int mid {(low + high) / 2};
    int guess {vectorIn[mid]};
    

    if(guess == target){
        return mid;
    }else if(guess < target){
        return binarySearchRec(vectorIn, target, mid + 1, high);
    }else{
        return binarySearchRec(vectorIn, target, low, mid -1 );
    }
}