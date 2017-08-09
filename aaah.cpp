#include <iostream>
#include <sstream>

using namespace std;

int main(){

    string word1, word2;
    
    cin >> word1 >> word2;

    int x = word1.length();
    int y = word2.length();
    
    int x2 = (x-1);
    int y2 = (y-1);
    
    if(x2>=y2){
        cout << "go";
    }
    if(y2>x2){
        cout << "no";
    }
    
    return 0;
}