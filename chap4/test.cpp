#include <iostream>
#include <string>

int main()
{
    std::string name, surname;
    char grade;
    short age;
    
    std::cout << "What is your first name? ";
    std::getline(std::cin, name);
    std::cout << "What is your last name? ";
    std::getline(std::cin, surname);
    std::cout << "What is your grade? ";
    std::cin >> grade;
    if (grade != 'F') grade++;
    std::cout << "What is your age? ";
    std::cin >> age;

    // Display
    std::cout << "You are " << name << ' ' << surname << std::endl;
    std::cout << "Your grade is " << grade << std::endl; 
    std::cout << "Your age is " << age << std::endl;
    
    std::cout << "sevs2";

}