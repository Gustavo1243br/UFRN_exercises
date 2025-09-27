#include <iostream>
using namespace std;

int main (){
    int number, sum, result, calculation;

    //cout << "Enter a number: ";
    cin >> number;
    
    result = number;
    sum = 0;
    
    while (result > 0){
        calculation = result % 10;
        sum = sum + calculation;
        result = result / 10;
    }
    
   cout << "The sum of the digits of " << number << " is " << sum << endl;
    
    return 0;
}
