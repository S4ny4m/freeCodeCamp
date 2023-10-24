#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lld long double
#define tt    \
    int t;    \
    cin >> t; \
    while (t--)

int main()
{
    stack<int> a, b;
    int temp = 0, i, size;
    cin >> temp;
    while (temp != -1)
    {
        a.push(temp);
        cin >> temp;
    }
    size = a.size();
    for (i = 0; i < size; i++)
    {
        temp = a.top();
        b.push(temp);
        // cout << temp << endl;
        a.pop();
    }
    cout << "Reversed Stack is : \n";
    for (i = 0; i < size; i++)
    {
        cout << b.top() << endl;
        b.pop();
    }

    return 0;
}