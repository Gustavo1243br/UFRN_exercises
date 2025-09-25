#include <iostream>

using namespace std;

int main (){
    int number, greatest, i=0;

    while (number != -1){
        // cout << "Enter a number: " << endl;
        cin >> number;
        
        if(i == 0){
            greatest = number;
            i++;
        }
        
        if (number % 2 == 0){
            if (number > greatest){
                greatest = number;
            }
        }
    }
    
    cout << "Greatest even number: " << greatest << endl;

    return 0;
}
