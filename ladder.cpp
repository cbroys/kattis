#include <iostream>
#include <cmath>

const float pi = 3.14159265359;

int main(){
    
    float height, length, angle;
        
    std::cin >> height >> angle;
    
    length = (height / sin(angle*pi/180));
    
    std::cout << ceil(length);
    
    return 0;
}