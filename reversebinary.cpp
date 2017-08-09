#include <iostream>
#include <string>
#include <bitset>
#include <cstdint>
#include <sstream>

int main() {

    uint32_t number;

    std::cin >> number;
    std::bitset<32> foo(number);

    std::string binary = foo.to_string();

    for (int i = 0; i < binary.length(); i++){
        if (binary[i] == '1'){
            std::ostringstream ss;
            for (int j = binary.length() - 1; j >= i; j--){
                ss << binary[j];
            }
            std::bitset<32> bar(ss.str());
            std::cout << bar.to_ulong();
            break;
        }
    }

    return 0;
}