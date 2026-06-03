#include<iostream>
#include<vector>

int findMax(std::vector<int> vecIn, int maxInitial);

int main(){

    std::vector<int> testVec1{1, 2, 3, 4, 5, 6, 7};
    std::vector<int> testVec2{9, 10, 22, 1, 4, 6};
    std::vector<int> testVec3{11, 2, 3, 4, 5, 6, 7};

    std::cout << findMax(testVec1, 0) << '\n';
    std::cout << findMax(testVec2, 0) << '\n';
    std::cout << findMax(testVec3, 0) << '\n';


    return 0;
}

int findMax(std::vector<int> vecIn, int maxInitial){

    
    int max{maxInitial};

    if(vecIn.size() == 0){
        return max;
    }
    else{
        int maxBuffer{vecIn[vecIn.size() - 1]};
        if(maxBuffer > maxInitial){
            max = maxBuffer;
        }
        std::vector<int> bufferVec{vecIn};
        bufferVec.pop_back();
        return findMax(bufferVec, max);
    }

};

    