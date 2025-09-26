#include <iostream>
#include <iomanip>
using namespace std;

int main (){
    float mass, value, result, time;

    //cout << "Enter the mass value: ";
    cin >> mass;
    
    value = mass;
    time = 0;
    
    while(value >= 0.5){
        result = value / 2;
        time += 50;
        value = result;
    }
    
    cout << fixed << setprecision(2);
    cout << "Initial mass: " << mass << endl;
    cout << "Final mass: " << result << endl;
    cout << fixed << setprecision(0);
    cout << "Time: " << time << " seconds" << endl;
    
    return 0;
}
