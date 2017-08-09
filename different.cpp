#include <iostream>
#include <cstdint>

int main(){
    
    int64_t num1, num2;
    
    while(std::cin >> num1 >> num2){
        if(num1>num2){
            std::cout <<(num1 - num2) << std::endl;
        }
        else{
            std::cout << (num2 - num1) << std::endl;
        }
    }
    
    return 0;
}