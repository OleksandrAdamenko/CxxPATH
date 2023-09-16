#include <iostream>
#include <string>

int main()
{
    std::cout << "Hi, Wayfarer! What is your name? \n";

    std::string name = "";

    std::cin >> name;

    std::cout << "Welcome to the CxxPATH, " << name << "!"; 

    return 0;
}