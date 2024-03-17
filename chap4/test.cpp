#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name, last_name;
    char grade;
    short age;
    cout << "What is your first name? ";
    getline(cin,name);
    cout << "What is your last name? ";
    getline(cin,last_name);
    cout << "What is your grade? ";
    cin >> grade;
    grade ++;
    cout << "What is your age? ";
    cin >> age;
    cout << "you are " << name << ' ' << last_name << endl << "your grade is " << grade << endl << "your age is " << age << endl;
    cout << "sevs2";

}