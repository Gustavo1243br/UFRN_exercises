#include <iostream>
using namespace std;

int main (){
	char character;

  //cout << "type the character: ";
  cin >> character;

  if ((character >= 'A') && (character <= 'Z')){
    cout << "Uppercase letter";
  }
  else if ((character >= 'a') && (character <= 'z')){
    cout << "Lowercase letter";
  }
  else if ((character >= '0') && (character <= '9')){
    cout << "Digit";
  }
  else{
    cout << "Other character";
  }

	return 0;
}

