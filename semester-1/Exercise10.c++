#include <iostream>

using namespace std;

int remainderdivision (int dividend, int divisor){
    while(dividend >= divisor){
        dividend = dividend - divisor;
    }
    return dividend;
}

int main() {
    int divided, divide, remainder;
    
    // cout << "Enter the dividend: ";
    cin >> divided;
    // cout << "Enter the divisor: ";
    cin >> divide;
    
    cout << endl;
    
    remainder = remainderdivision(divided, divide);
    
    cout << remainder;

    return 0;
}
