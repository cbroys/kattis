#include<iostream>

int main(){
    
    int numOfInputs;
    int array[101];
    int count = 0;
    int number;
    
    std::cin >> numOfInputs;
    
    while(number < numOfInputs){
        std::cin >> array[number];
        number++;
    }
    
    for(int j; j<numOfInputs; j++){
        if(array[j]<0){
            count++;
        }
    }
    
    std::cout << count;
    
    return 0;
}