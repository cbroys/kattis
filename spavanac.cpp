#include <iostream>

using namespace std;

int main(){
    
    int hour1, minute1, temp;
    int hour2, minute2;
    
    cin >> hour1 >> minute1;
    
    temp = minute1;
    minute1 = minute1 - 45;
    
    
    if(minute1 < 0){
        minute2 = 60 + minute1;
    }
    else if(minute1 > 0){
        minute2 = minute1;
    }
    
    if(temp > 45){
        hour2 = hour1;
    }
    else if(temp < 45){
        hour2 = hour1 - 1;
    }
    
    if(hour2 == -1){
        hour2 = 23;
    }
    
    cout << hour2 << " " << minute2;
    
    return 0;
}