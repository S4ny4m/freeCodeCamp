#include <stack>
#include <iostream>
using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;
        int len = s.length();
        for (int i = 0; i < len; i++)
        {
            if (s[i] == ')' && st.top() == '(')
                st.pop();
            else if (s[i] == '}' && st.top() == '{')
                st.pop();
            else if (s[i] == ']' && st.top() == '[')
                st.pop();
            else
                st.push(s[i]);
        }
        if (st.empty())
            return 1;
        return 0;
    }
};