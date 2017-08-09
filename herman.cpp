#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

int main(){
    
    double input;
    cin >> input;
    
    printf("%.6f\n",input*input*M_PI);
    printf("%.6f\n",2*input*input);
    
    return 0;
}