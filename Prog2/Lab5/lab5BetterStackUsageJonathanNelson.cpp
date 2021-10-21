//Name: Jonathan
//Assignment: lab 5

#include <iostream>
#include <string>

using namespace std;

#define MAX 1000

class Stack
{
    int top;

public:
    char a[MAX]; // Maximum size of Stack

    Stack() { top = -1; }
    bool push(char x);
    char pop();
    char peek();
    bool isEmpty();
};

bool Stack::push(char x)
{
    if (top >= (MAX - 1))
    {
        cout << "Stack Overflow";
        return false;
    }
    else
    {
        a[++top] = x;
        cout << x << " Pushed into stack\n";
        return true;
    }
}

char Stack::pop()
{
    if (top < 0)
    {
        cout << "Stack Underflow";
        return 0;
    }
    else
    {
        char x = a[top--];
        return x;
    }
}
char Stack::peek()
{
    if (top < 0)
    {
        cout << "Stack is Empty";
        return 0;
    }
    else
    {
        char x = a[top];
        return x;
    }
}

bool Stack::isEmpty()
{
    return (top < 0);
}

// Driver program to test above functions
int main()
{
    class Stack s;
    s.push('1');
    s.push('2');
    s.push('3');
    cout << s.pop() << " Popped from stack\n";
    //print all elements in stack :
    cout << "Elements present in stack : ";
    while (!s.isEmpty())
    {
        // print top element in stack
        cout << s.peek() << " ";
        // remove top element in stack
        s.pop();
    }
    cout << "\n";

    cout << "\nEnter a string to check if you have matching curly braces, ==>  {  and  }\n\n";

    string badString = "Josh is not playing at College Church of the Nazarene this week and that makes me :( sad";

    getline(cin, badString);

    int stringLength = badString.length();

    class Stack badStringStack;

    int leftBraceCount = 0;
    int rightBraceCount = 0;

    for (int i = 0; i < badString.length(); i++)
    {
        badStringStack.push(badString[i]);
        if (badString[i] == '{')
        {
            leftBraceCount++;
        }
        if (badString[i] == '}')
        {
            rightBraceCount++;
        }
    }

    if (leftBraceCount == rightBraceCount)
    {
        cout << "\n\nThe curly braces in the string are even.\n\n";
    }
    if (leftBraceCount > rightBraceCount)
        (
            cout << "\n\nYou have " << leftBraceCount - rightBraceCount << " more left curly braces than right curly braces\n\n");
    if (rightBraceCount > leftBraceCount)
        (
            cout << "\n\nYou have " << rightBraceCount - leftBraceCount << " more left curly braces than left curly braces\n\n");
}
