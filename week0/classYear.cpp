#include <iostream>
using namespace std;

int main(){
    int creditHours;
    cout << "Enter number of credit hours taken: ";
    cin >> creditHours;
    if (creditHours < 28){
        cout << "freshman";
    }
    if (creditHours >= 28 && creditHours < 61){
        cout << "sophomore";
    }
    if (creditHours >= 61 && creditHours < 94 ){
        cout << "junior";
    }
    if (creditHours >= 94){
        cout << "senior";
    }
}