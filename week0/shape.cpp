#include <iostream>
using namespace std;

int main (){
    int rows;
    cout << "Enter an int: ";
    cin >> rows;
    string symbol;
    cout << "Enter a symbol other than space: ";
    cin >> symbol;
    for (int i = 0; i < rows; i++){
        for (int j = 0; j <= i; j++){
            cout << symbol;
        }
        cout << endl;
}
}
