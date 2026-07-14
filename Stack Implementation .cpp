#include <iostream>
using namespace std;

#define MAX 100

class Stack
{
private:
    int arr[MAX];
    int top;

public:
    Stack()
    {
        top = -1;
    }

    // Push Operation
    // Time Complexity: O(1)
    void push(int value)
    {
        if(top == MAX - 1)
        {
            cout << "Stack Overflow!" << endl;
            return;
        }

        arr[++top] = value;
        cout << "Element Pushed Successfully!" << endl;
    }

    // Pop Operation
    // Time Complexity: O(1)
    void pop()
    {
        if(top == -1)
        {
            cout << "Stack Underflow!" << endl;
            return;
        }

        cout << "Deleted Element: " << arr[top] << endl;
        top--;
    }

    // Search Operation
    // Time Complexity: O(n)
    void search(int key)
    {
        for(int i = top; i >= 0; i--)
        {
            if(arr[i] == key)
            {
                cout << "Element Found." << endl;
                return;
            }
        }

        cout << "Element Not Found." << endl;
    }

    // Display Operation
    // Time Complexity: O(n)
    void display()
    {
        if(top == -1)
        {
            cout << "Stack is Empty." << endl;
            return;
        }

        cout << "Stack Elements: ";

        for(int i = top; i >= 0; i--)
        {
            cout << arr[i] << " ";
        }

        cout << endl;
    }
};

int main()
{
    Stack s;

    int choice, value;

    do
    {
        cout << "\n===== STACK MENU =====" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Search" << endl;
        cout << "4. Display" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter Value: ";
                cin >> value;
                s.push(value);
                break;

            case 2:
                s.pop();
                break;

            case 3:
                cout << "Enter Value to Search: ";
                cin >> value;
                s.search(value);
                break;

            case 4:
                s.display();
                break;

            case 5:
                cout << "Thank You!" << endl;
                break;

            default:
                cout << "Invalid Choice!" << endl;
        }

    } while(choice != 5);

    return 0;
}