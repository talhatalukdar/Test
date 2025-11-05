#include <iostream>
#include <stack>
#include <string>
using namespace std;

int precedence(char op)
{
    if (op == '/') return 3;
    if (op == '*') return 2;
    if (op == '+') return 1;
    if (op == '-') return 0;
    return -1;

}

string Postfix(string exp)
{
    stack<char> st;
    string post = "";



    for (int i = 0; i < exp.size(); i++)
    {
        char c = exp[i];

        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
        {
            post += c;
        }

        else
        {
            while (!st.empty() && precedence(st.top()) >= precedence(c))
            {
                post += st.top();
                st.pop();
            }

            st.push(c);
        }
    }

    while (!st.empty())
    {
        post += st.top();
        st.pop();
    }

    return post;
}

int main()
{

    string exp;
    cout << "Enter expresion: ";
    cin >> exp;
    cout << "Postfix: " << Postfix(exp) << endl;
    return 0;
}
