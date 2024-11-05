#include <iostream>
#include <unistd.h>
using namespace std;

int main() {
    cout << "hello player :D\n";
    sleep(2);
    cout << "this is a cat game idle thing that my mind came up with\n";
    sleep(2);
    cout << "the controls are simple\n";
    sleep(1);
    cout << ".";
    sleep(1);
    cout << ".";
    sleep(1);
    cout << ".\n";
    sleep(2);
    cout << "you just press e many times\n";
    cout << "there will be a counter for it\n";
    sleep(3);
      char choice;
  do {
    cout << "you not worried about losing your points right? (y/n): ";
    cin >> choice;
    if (choice == 'y') {
      cout << "Continuing...\n";
    } else if (choice == 'n') {
      cout << "Exiting...\n";
    } else {
      cout << "Invalid input. Please enter 'y' or 'n'.\n";
    }
  } while (choice != 'y' && choice != 'n');
  system("pause");
}