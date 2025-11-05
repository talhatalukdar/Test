#include <iostream>   // lexical analysis -> token: <#include>, <iostream>, <;>
#include <fstream>    // lexical analysis -> token: <#include>, <fstream>, <;>
using namespace std;  // lexical analysis -> token: <using>, <namespace>, <std>, <;>

int main() // syntax analysis -> check main function structure right or wrong
{
    int n; // lexical analysis -> token: <int>, <id,1>, <;>
    cout << "Enter the number of student: ";
    cin >> n;

    ofstream fout("Lab_01.txt");

    for (int i = 0; i < n; i++) // syntax -> check for loop structure
    {
        string name;
        int marks;
        cout << "Enter the name: ";
        cin >> name;
        cout << "Enter marks: ";
        cin >> marks;
        fout << name << " " << marks << endl;
    }
    fout.close();

    ifstream fin("Lab_01.txt");
    string name;
    int marks;
    cout << "\nInfo:\n";

    while (fin >> name >> marks) // syntax -> while loop structure validation
    {
        cout << name << " " << marks << endl;
    }

    fin.close();

    return 0;
}

