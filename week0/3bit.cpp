#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number between -128 and 127, end included: ";
    cin >> n;

    int num = n;

    if (num < 0){
        num = -1;
    }

    string result = " ";


    int rem;
    while (num > 0){
        rem = num % 2;
        result = to_string(rem) + result;
        num = num/2;
    }

    int size = 8;
    int len = result.length();
    for (int i = 0; i < size - len; i++){
        result = "0" + result;
    }

    if (n < 0){
        for (int i = 0; i < size; i++){
            if (result[i] == '0'){
                result[i] = '1';
            }
            else{
                result[i] = '0';
            }
        }

        int i = size - 1;
        while (result[i] == '1'){
            result[i] = '0';
            i--;
        }
        result[i] = '1';

    }
    cout << result << endl;
}