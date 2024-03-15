//chp1ex2.cpp\

#include <iostream>
#include <string>

int main() {
    const std::string exclam = "!";
    const std::string message = std::string("Hello") + ", world" + exclam;
    std::cout << message << std::endl;
    return 0;
}