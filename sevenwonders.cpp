#include <iostream>
#include <sstream>
#include <algorithm> 

using namespace std;

int main(){
    
    int T = 0;
    int C = 0;
    int G = 0;
    int total = 0;
    int minNum;
    
    string cards;
    
    cin >> cards;
    
    for(char& c : cards){
        
        if(c == 'T'){
            T++;
        }
        if(c == 'C'){
            C++;
        }
        if(c == 'G'){
            G++;
        }
        
    }
    
    minNum = min(T, C);
    if(min(C, G) < minNum){
        minNum = min(C, G);
    }
    if(min(T, G) < minNum){
        minNum = min(T, G);
    }
    
    minNum = minNum*7;
    
    T = pow(T, 2);
    C = pow(C, 2);
    G = pow(G, 2);
    
    total = T + C + G + minNum;
    
    cout << total;
    
    return 0;
}