#include <iostream>   // lexical analysis -> token: <#include>, <iostream>, <;>
#include <string>     // lexical analysis -> token: <#include>, <string>, <;>
using namespace std;  // lexical analysis -> token: <using>, <namespace>, <std>, <;>

int main() // syntax analysis -> check main function structure right or wrong
{
    string exp; // lexical analysis -> token: <string>, <id,1>, <;>

    cout << "Enter the expression: ";
    cin >> exp;

    cout << "Operators: ";

    for (char s : exp) // syntax -> for each loop structure
    {
        if (s == '+' || s == '-' || s == '*' || s == '/')
            cout << s << " ";
    }

    cout << endl;

    return 0;
}

