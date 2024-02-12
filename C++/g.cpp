//To print whether a character is in uppercase , lowercase or in numerical order 
#include <iostream>

using namespace std;

int main() {
  char input;

  cout << "Input a character: ";
  cin >> input;

  if (input >= 'a' && input <= 'z') {
    cout << "The character is lowercase." << endl;
  } else if (input >= 'A' && input <= 'Z') {
    cout << "The character is uppercase." << endl;
  } else if (input >= '0' && input <= '9') {
    cout << "The character is numeric." << endl;
  } else {
    cout << "The character is not numeric , not alphabet" << endl;
  }

  return 0;
}