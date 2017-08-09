#include <iostream>

int main(){
    
    int numOfNums, a;
    int array[20];
    
    std::cin >> numOfNums;
    
    for(int i = 0; i < numOfNums; i++){
        std::cin >> array[i];
    }
    
    for(int j = 0; j < numOfNums; j++){
        if(array[j] % 2 == 0){
            std::cout << array[j] << " is even" << std::endl;
            a++;
        }
        else{
            std::cout << array [j] << " is odd" << std:: endl;
            a++;
        }
    }
    
    return 0;
}