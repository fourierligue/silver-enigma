#include <iostream>
#include <string>
using namespace std;

struct CandyBar{
    string name;
    float weight;
    int energy;
};
int main(){
    CandyBar snack[]{
        {"Mocha Munch", 2.3, 350},
        {"snikres", 3, 200},
        {"twix", 2.3, 100},
        };
    
    cout << "Snack 1: \n";
    cout << "Name: " << snack[0].name << endl; 
    cout << "Weight: " << snack[0].weight << endl; 
    cout << "Energy: " << snack[0].energy << endl; 

    cout << "Snack 2: \n";
    cout << "Name: " << snack[1].name << endl; 
    cout << "Weight: " << snack[1].weight << endl; 
    cout << "Energy: " << snack[2].energy << endl; 

    cout << "Snack 3: \n";
    cout << "Name: " << snack[2].name << endl; 
    cout << "Weight: " << snack[2].weight << endl; 
    cout << "Energy: " << snack[2].energy << endl; 
}