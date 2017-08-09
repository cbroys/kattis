#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;


int main(){
    
    double capital = 0.0000000000000000; 
    double lowercase = 0.0000000000000000; 
    double special = 0.0000000000000000; 
    double whitespace = 0.0000000000000000;
    string str;
    char* cstr = &str[0u];
    
    cin >> str;
    
    for(int i=0; i<str.length(); i++){
        if(str[i] >= 65 && str[i] <= 90){
            capital++;
        }
        if(str[i] >= 97 && str[i] <= 122){
            lowercase++;
        }
        if(str[i] == '_'){
            whitespace++;
        }
        if(str[i] >= 33 && str[i] <= 64 && str[i] != '_'){
            special++;
        }
        if(str[i] >= 91 && str[i] <= 96 && str[i] != '_'){
            special++;
        }
        if(str[i] >= 123 && str[i] != '_'){
            special++;
        }
    }
    
    cout << setprecision(15) << (whitespace/str.length()) << endl;
    cout << setprecision(15) << (lowercase/str.length()) << endl;
    cout << setprecision(15) << (capital/str.length()) << endl;
    cout << setprecision(15) << (special/str.length()) << endl;
    
    return 0;
}