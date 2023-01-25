#include <iostream>

using namespace std;

int main(){
    int n, num, rem, len;
    int size = 8;
    string result;

    cout << "Enter an integer in [-128-127]: ";
    cin >> n;
    num = n;

    if (num < 0){
        num = -num - 1;

    }

    while (num > 0){
        rem = num % 2;
        result = to_string(rem) + result;
        num = num / 2;

    }

    len = result.length();

    for (int i = 0; i < len; i++){
        result = "0" + result;

    }

    if (n < 0){
        for (int i = 0; i < result.length(); i++){
            if (result[i] == '0'){
                result[i] = '1';
            }
            else{
                result[i] = '0';
            }
        }
    }
    cout << "binar string: "   << result << endl;
}