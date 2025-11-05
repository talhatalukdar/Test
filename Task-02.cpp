#include <iostream>
#include <string>
using namespace std;

int main() // syntax analysis -> check main function structure right or wrong
{
    string firstName, lastName; // lexical analysis -> token: <string>, <id,1>, <,>, <id,2>, <;>

    cout << "Enter your first name: ";
    cin >> firstName;

    cout << "Enter your last name: ";
    cin >> lastName;

    cout << "FullName: " << firstName + " " + lastName << endl;

    return 0;
}

