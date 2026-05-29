#include<iostream>
#include<vector>

int findSmallest(std::vector<int>& vecIn);
std::vector<int> removeFromVec(std::vector<int>& vecIn, int& val);
std::vector<int> selectionSort(std::vector<int>& vecIn);
void printVec(std::vector<int>& vecIn);


int main(){

    std::vector<int> inputArray{5, 88, 34, 57, 108, 8, 4, 32, 69, 55, 100, 7, 23};

    inputArray = selectionSort(inputArray);

    printVec(inputArray);

    

    return 0;
}

int findSmallest(std::vector<int>& vecIn){

    int smallest {vecIn[0]};

    for(int e : vecIn){
        if(e < smallest){
            smallest = e;
        }
    }
    return smallest;

}

std::vector<int> removeFromVec(std::vector<int>& vecIn, int& val){
    std::vector<int> newVec{};
    for(int e : vecIn){
        if(e == val){
            continue;
        }
        else{
            newVec.push_back(e);
        }
    }
    return newVec;
}

std::vector<int> selectionSort(std::vector<int>& vecIn){
    std::vector<int> workingVector = vecIn;
    std::vector<int> vecOut;

    size_t lenght = vecIn.size();
    int buffer{};

    for(size_t i{0}; i < lenght; i++){
        buffer = findSmallest(workingVector);
        workingVector = removeFromVec(workingVector, buffer);
        vecOut.push_back(buffer);
    }

    return vecOut;
}

void printVec(std::vector<int>& vecIn){
    for(int e : vecIn){
        std::cout << e << '\n';
    }
}