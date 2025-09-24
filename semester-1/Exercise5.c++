#include <iostream>

using namespace std;

int main (){

    int number, i, value, sum;
    //cout << "Enter a number: ";
    cin >> number;
    sum = 1;
    for (i=1; i<=number; i++){
        if(i % 2 != 0){
            sum *= i;
        }
    }
    cout << "Product of odd numbers from 1 to ";
    cout << number;
    cout << " is: ";
    cout << sum;
return 0;
}
