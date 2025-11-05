#include <iostream>   // lexical analysis -> tokens: #include, <iostream>, ;
#include <string>     // lexical analysis -> tokens: #include, <string>, ;
using namespace std;  // lexical analysis -> tokens: using, namespace, std, ;

int main() // syntax -> check main function structure right or wrong
{
    string code = "int main(){int a = 10, b = 20; int sum = a + b; if (sum > 20) sum = 0; return sum;}";

    int key = 0;
    int id = 0;
    int op = 0;

    string keywords[] = {"int","double","float","string","char","if","else","return","main","for","while"};
    string word = "";

    for (int i = 0; i < code.size(); i++) // syntax analysis -> for loop structure
    {
        char c = code[i];

        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        {
            word += c;
        }

        else
        {
            if (word != "")
            {
                bool isKeyword = false;

                for (string k : keywords)
                {
                    if (word == k)
                    {
                        key++;
                        isKeyword = true;
                        break;
                    }
                }

                if (!isKeyword)
                {
                    id++;
                }


                word = "";
            }

            if (c == '+' || c == '-' || c == '*' || c == '/' || c == '=' || c == '>' || c == '<' || c == '%')
                op++;
        }
    }

    cout << "Keywords: " << key << endl;
    cout << "Identifiers: " << id << endl;
    cout << "Operators: " << op << endl;

    return 0;
}
