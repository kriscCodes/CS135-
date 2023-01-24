#include <iostream>
using namespace std;

int main(){
    int start;
    cout << "Enter start: ";
    cin >> start;
    int end;
    cout << "Enter end: ";
    cin >> end;
    if (start % 2 == 0){
        for (int i = start; i <= end; i += 2){
        cout << i << endl;
    }
    }

    else {
        cout << start << endl;
        for (int j = start; j <= end; j++){
            if (j % 2 == 0){
                cout << j << endl;

            }
        }
    }

}
