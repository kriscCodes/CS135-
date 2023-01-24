#include <iostream>
using namespace std;

int main(){
double total;
double monthExpense;



cout << "Input your annual budget: ";
cin >> total;

cout << "Input your monthly expense: ";
cin >> monthExpense;

cout << "month  expense remaining balance of budget" << endl;

for (int i = 1; i <= 12; i++){
    cout << i << "  " << monthExpense << "  " << (total -= monthExpense) << endl;
    if (i == 6){
        monthExpense = monthExpense * 1.15;
    }

}

if (total < 0){
    cout << "need higher budget";
}

}