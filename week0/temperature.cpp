#include <iostream>
using namespace std;
// Convert celsius to farenheight 
// Use user input for celsius
int main(){
    
float celsius;
cout << "How many degrees celsius do you wish to convert into farenheight? ";
cin >>celsius;

float degrees = 9.0/5 * celsius + 32;

cout << celsius << " is " << degrees << " degrees farenheight!";


}