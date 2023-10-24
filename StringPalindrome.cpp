#include <iostream>
#include <string>
using namespace std;

class stack
{
public:
    char *arr;
    int t;
    int size;
    void display()
    {
        if (t == -1)
        {
            cout << "stack empty\n";
            return;
        }
        // cout << "Stack is : \" ";
        for (int i = t; i >= 0; i--)
            cout << arr[i] << " ";
        cout << "\"\n";
    }
    stack(int size)
    {
        this->size = size;
        arr = new char[size];
        t = -1;
    }
    void push(char element)
    {
        if (t > size - 1)
        {
            cout << "Stack is Full : Stack Overflow";
            return;
        }
        arr[++t] = element;
    }
    void pop()
    {
        if (t < 0)
        {
            cout << "Stack UnderFlow";
            return;
        }
        --t;
    }
    char peek()
    {
        if (t >= 0 && t < size)
            return arr[t];
        else
        {
            cout << "NO ELEMENT present in the stack\n";
            return 0;
        }
    }
    bool isEmpty()
    {
        if (t == -1)
            return 1;
        else
            return 0;
    }
    int sizeS()
    {
        if (t < 0)
        {
            cout << "Stack is Empty.\n";
            return 0;
        }
        return (t + 1);
    }
};

int main()
{
    string a;
    cout << "Enter a string to check weather it is palindrome or not : \n";
    cin >> a;
    char temp;
    int len = a.length(), i;
    stack s(len), rev(len);
    for (i = 0; i < len; i++)
    {
        temp = a[i];
        s.push(temp);
    }
    for (i = 0; i < len; i++, s.pop())
    {
        if (a[i] != s.peek())
            break;
    }
    if (i == len)
        cout << "Palindrome\n";
    else
        cout << "Not Palindrome\n";
    return 0;
}