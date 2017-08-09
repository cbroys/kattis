#include <iostream>

using namespace std;

int main(){
    
    int array1[4], array2[4], array3[4], array4[4], array5[4];
    int max, winner;
    int a1 = 0;
    int a2 = 0;
    int a3 = 0;
    int a4 = 0;
    int a5 = 0;
    
    for(int i = 0; i < 4; i++){
        cin >> array1[i];
        a1 = a1 + array1[i];
    }
    
    for(int i = 0; i < 4; i++){
        cin >> array2[i];
        a2 = a2 + array2[i];
    }
    
    for(int i = 0; i < 4; i++){
        cin >> array3[i];
        a3 = a3 + array3[i];
    }
    
    for(int i = 0; i < 4; i++){
        cin >> array4[i];
        a4 = a4 + array4[i];
    }
    
    for(int i = 0; i < 4; i++){
        cin >> array5[i];
        a5 = a5 + array5[i];
    }
    
    max = a1;
    winner = 1;
    if(a2 > max){
        max = a2;
        winner = 2;
    }
    if(a3 > max){
        max = a3;
        winner = 3;
    }
    if(a4 > max){
        max = a4;
        winner = 4;
    }
    if(a5 > max){
        max = a5;
        winner = 5;
    }
    
    cout << winner << " " << max;
    
    return 0;
}