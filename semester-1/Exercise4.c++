#include <iostream>
using namespace std;

int main (){

    int number, sum, i;

    //cout << "Enter a number: ";
    cin >> number;

    sum = 0;

    for (i=1; i<=number; i++){

        if(number % i == 0){
            sum += i;
        }
    }

    if(sum == (2 * number)){
        cout << number;
        cout << " is perfect" << endl;
    }else{
        cout << number;
        cout << " is not perfect";
    }
return 0;
}
