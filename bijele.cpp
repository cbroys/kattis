#include <iostream>

using namespace std;

int main(){
    
    int king = 1;
    int queen = 1;
    int rooks = 2;
    int bishops = 2;
    int knights = 2;
    int pawns = 8;
    int a, b, c, d, e, f;
    
    cin >> a >> b >> c >> d >> e >> f;
    
    a = king - a;
    b = queen - b;
    c = rooks - c;
    d = bishops - d;
    e = knights - e;
    f = pawns - f;
    
    cout << a << " " << b << " " << c << " " << d << " " << e << " " << f;
    
    return 0;
}