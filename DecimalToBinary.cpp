#include <iostream>
using namespace std;

class stack
{
public:
    int *arr;
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
        arr = new int[size];
        t = -1;
    }
    void push(int element)
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
    int peek()
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
    stack s(10);
    int n, rem;
    cout << "Enter Number (1-2047): ";
    cin >> n;
    while (n >= 1)
    {
        rem = n % 2;
        s.push(rem);
        n /= 2;
    }
    cout << "Binary of the number is : ";
    s.display();

    return 0;
}