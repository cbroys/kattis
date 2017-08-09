#include <iostream>
#include <math.h>
#include <stdio.h>
#include <iomanip>

using namespace std;

int main(){
    
    float r, c, totalArea, cheeseArea;
    float percentage = 0.000000;
    cin >> r >> c;
    
    totalArea = r * r * M_PI;
    cheeseArea = (r - c) * (r - c) * M_PI;
    percentage = (cheeseArea/totalArea) * 100;
    
    cout << fixed << setprecision(6) << percentage;
    
    return 0;
}