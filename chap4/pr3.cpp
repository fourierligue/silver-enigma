#include <iostream>
#include <string>
using namespace std;

int main(){
    string name, fname;
    cout << "enter your first name ";
    cin >> name;
    cout << "enter your last name ";
    cin >> fname;
    name = name + ", " + fname;
    cout << "here is information in a single strip: " << name;
}