#include <iostream>
using namespace std;

int main (){

    int i, start, value, greatest;

    //cout << "Enter a number n: ";
    cin >> start;

    for (i=1; i<=start; i++){
          cin >> value;

        if (i==1){
            greatest = value;
        }

        if(value > greatest){
            greatest = value;
        }
    }
    cout << "Greatest value: " << greatest;
}



    }

	return 0;
}
