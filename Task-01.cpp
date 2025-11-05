#include <iostream>
using namespace std;

int main() // syntax analysis -> check main funtion structure right or wrong
{

    int n; // lexical analysis -> token: <int>, <id,1> ,<;>

    cout << "Enter the number of element: ";
    cin >> n;

    int arr[n]; // lexical analysis -> token: <int>, <id,2> ,<[>,<id,1>,<]>,<;>

    cout << "Enter the elements: ";

    for (int i = 0; i < n; i++) // syntax -> check for loop structure
    {
        cin >> arr[i];
    }

    int sum = 0;

    for (int i = 0; i < n; i++) // syntax -> check for loop structure
    {
        sum += arr[i];
    }


    cout << "Average = " << (double)sum / n << endl; // semantic analysis type casting from int -> double

    return 0;
}
