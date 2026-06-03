#include<iostream>
#include<vector>

int sumVec(std::vector<int> vecIn);

int main(){

    std::vector<int> testVec{1, 2, 3, 4, 5, 6, 7};

    std::cout << sumVec(testVec);

    return 0;
}

int sumVec(std::vector<int> vecIn){

    if(vecIn.size() == 0)
        return 0;
    else{
        std::vector<int> bufferVec{vecIn};
        bufferVec.pop_back();
        return 1 + sumVec(bufferVec);
    }

};