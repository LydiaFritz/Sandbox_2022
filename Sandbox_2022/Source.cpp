#include <bitset>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>

int main()
{
    std::vector<double> vec;
    vec.push_back(1);
    vec.push_back(2);
    try {
        std::cout << vec.at(4) << std::endl;
    }
    catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    try {
        std::bitset<4>{"0115"}; // Throws: only '0' or '1' expected
    }
    catch (std::invalid_argument const& ex) {
        std::cout << "#1: " << ex.what() << '\n';
    }

    try {
        int f = std::stoi("789"); // Throws: no conversion
    }
    catch (std::invalid_argument const& ex) {
        std::cout << "#2: " << ex.what() << '\n';
    }

    try {
        [[maybe_unused]] float f = std::stof("3.14"); // Throws: no conversion
    }
    catch (std::invalid_argument const& ex) {
        std::cout << "#3: " << ex.what() << '\n';
    }
}