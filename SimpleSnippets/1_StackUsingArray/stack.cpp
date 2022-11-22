#include <iostream>
using namespace std;

class Stack
{

    private:
        int top;
        int arr[5];

    public:
        Stack();
        bool isEmpty();
        bool isFull();

        void push(int);
        int pop();

        int count();
        int peek(int);
        void change(int, int);
        void display();
};

Stack::Stack()
{
    top = -1;
    for (int i = 0; i < 5; i++)
    {
        arr[i] = 0;
    }
}

bool Stack ::isEmpty()
{
    if (top == -1)
    {
        return true;
    }
    return false;
}

bool Stack ::isFull()
{
    if (top == 4)
    {
        return true;
    }
    return false;
}

void Stack ::push(int val)
{
    if (isFull())
    {
        cout << "Stack Overflow Idiot !!!" << endl;
    }
    else
    {
        top++;
        arr[top] = val;
    }
}

int Stack ::pop()
{
    if (isEmpty())
    {
        cout << "Stack Underflow Idiot !!!" << endl;
        return 0;
    }
    else
    {
        int popValue = arr[top];
        arr[top] = 0;
        top--;
        return popValue;
    }
}

int Stack ::count()
{
    return (top + 1);
}

int Stack ::peek(int pos)
{
    if (isEmpty())
    {
        cout << "Stack Underflow Idiot !!!" << endl;
        return 0;
    }

    return arr[pos];
}

void Stack::change(int pos, int val)
{
    arr[pos] = val;
    cout << "Item changed at the location: " << pos << endl;
}

void Stack::display()
{
    cout << "\n==============================\nStack Contents are: \n"
         << endl;
    for (int i = 4; i >= 0; i--)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    Stack s1;
    int option = -1, position, value;

    do
    {
        cout << "What operation do you want to perform? Select option number. Enter 0 to exit." << endl;
        cout << "1. Push()" << endl;
        cout << "2. Pop()" << endl;
        cout << "3. isEmpty()" << endl;
        cout << "4. isFull()" << endl;
        cout << "5. peek()" << endl;
        cout << "6. count()" << endl;
        cout << "7. change()" << endl;
        cout << "8. display()" << endl;

        cout << "9. Clear Screen" << endl;

        cout << "Enter your operation: " << endl;
        cin>>option;

        switch (option)
        {
        case 0:
            break;
        case 1:
            cout << "Enter an item top push into stack: " << endl;
            cin >> value;
            s1.push(value);
            break;

        case 2:
            cout << "pop function called. Popped value " << s1.pop() << endl;
            break;

        case 3:
            if (s1.isEmpty())
                cout << "Stack is empty !!!" << endl;
            else
                cout << "Stack is not empty !!!" << endl;
            break;

        case 4:
            if (s1.isFull())
                cout << "Stack is full !!!" << endl;
            else
                cout << "Stack is not full !!!" << endl;
            break;

        case 5:
            cout << "Enter the position of item that you want to peek: " << endl;
            cin >> position;
            cout << "Peak function called " << endl;
            cout << "Element at position " << position << " is: " << s1.peek(position) << endl;

        case 6:
            cout << "Count function called !!!" << endl;
            cout << "Number of items in the stack are: " << s1.count() << endl;
            break;

        case 7:
            cout << "Change function called" << endl;
            cout << "Enter the position of the item that you want to change: ";
            cin >> position;
            cout << "\nEnter the value of item you want to change: ";
            cin >> value;

            s1.change(position, value);

            cout << "Element at position" << position << "swapped with" << value << "successfully" << endl;
            break;

        case 8:
            cout << "Display function called." << endl;
            s1.display();
            break;

        case 9:
            system("clear");
            break;

        default:
            cout << "Enter the proper option number !!!" << endl;
            break;
        }

    } while (option != 0);
}