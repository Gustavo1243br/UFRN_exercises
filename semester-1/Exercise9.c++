#include <iostream>
using namespace std;

int power (int a, int b){
    int power_result, i;
    power_result = 1;
    for (i=1; i<=b; i++){
        power_result = power_result * a;
    }
    return power_result;
}

int main() {
    int base, exponent, result;
    
    // cout << "Enter the base: ";
    cin >> base;
    
    // cout << "Enter the exponent: ";
    cin >> exponent;
    
    cout << endl;
    
    result = power(base, exponent);
    
    cout << base << " raised to the power of " << exponent << " is " << result;
  
    return 0;
}
