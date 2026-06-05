/*
Quick sort
What arrays don't need sorting:
    no and one Element (base case)
    two elemts -> compare qand sort
Process:
    pick pivot
    partition -> Pick elements < pivot and elements > pivot into seperate arrays
*/


#include<iostream>
#include<vector>

std::vector<int> qSort(std::vector<int> vecIn);
std::vector<int> addInt(std::vector<int> vecIn, int iIn);
std::vector<int> addVec(std::vector<int> vecIn, std::vector<int> vecToAdd);
void printVec(std::vector<int> vecIn);


int main(){

    std::vector<int> test00{};
    std::vector<int> test01{0};
    std::vector<int> test02{9,5};
    std::vector<int> test03{6, 88, 54, 98, 2, 5, 6, 77, 89, 55, 12, 66};

    std::vector<int> test00s{qSort(test00)};
    std::vector<int> test01s{qSort(test01)};
    std::vector<int> test02s{qSort(test02)};
    std::vector<int> test03s{qSort(test03)};

    printVec(test00s);
    printVec(test01s);
    printVec(test02s);
    printVec(test03s);

    return 0;
}

std::vector<int> qSort(std::vector<int> vecIn){

    if(vecIn.size() < 2){
        return vecIn;
    }else if(vecIn.size() == 2){
        int min{};
        int max{};
        if(vecIn[0] > vecIn[1]){
            max = vecIn[0];
            min = vecIn[1];
        }
        else{
            max = vecIn[1];
            min = vecIn[0];
        }
        std::vector<int> resulting {min, max};
        return resulting;
    }else{
        int buffer{0};
        int pivot{vecIn[0]};
        std::vector<int> leftResulting{};
        std::vector<int> rightResulting{};

        for(int e : vecIn){
            if(e < pivot)
                leftResulting.push_back(e);
            else if(e > pivot)
                rightResulting.push_back(e);
            else if(e == pivot && buffer > 0)
                rightResulting.push_back(e);
            buffer++;
        }
        buffer = 0;

        return addVec(addInt(qSort(leftResulting), pivot), qSort(rightResulting));
    }
}

std::vector<int> addInt(std::vector<int> vecIn, int iIn){
    std::vector<int> resulting = vecIn;
    resulting.push_back(iIn);
    return resulting;
}

std::vector<int> addVec(std::vector<int> vecIn, std::vector<int> vecToAdd){
    std::vector<int> resulting = vecIn;
    resulting.insert(resulting.end(), vecToAdd.begin(), vecToAdd.end());
    return resulting;
}

void printVec(std::vector<int> vecIn){
    std::cout << '{';
    for(int e : vecIn){
        std::cout << e << " || ";
    }
    std::cout << "}\n";
}