// ch1ex1.cpp
#include <iostream>
#include <string>

int main() {
    const std::string hello = "Hello";
    const std::string message = hello + ", world" + "!";
    std::cout << message << std::endl;
    return 0;
}

