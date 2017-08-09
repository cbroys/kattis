#include <iostream>
#include <set>

int main(){

    std::set<int> input;
    int x;

    for(int i=0; i<10; i++){
        std::cin >> x;
        input.insert(x%42);
    }

    std::cout << input.size();

    return 0;
}