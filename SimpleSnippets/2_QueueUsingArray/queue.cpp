#include<iostream>
using namespace std;

class Queue
{
    private:
        int front;
        int rear;
        int arr[5];

    public:
        Queue();
        bool isEmpty();
        bool isFull();
        void enqueue(int);
        int dequeue();
        int count();
        void display();

};


Queue::Queue()
{
    front = -1;
    rear = -1;

    for (int i = 0; i < 5; i++)
    {
        arr[i] = 0;
    }
    
}

bool Queue ::isEmpty()
{
    if(front == -1 && rear == -1)
        return true;
    return false;
}

bool Queue ::isFull ()
{
    if (rear == 4)
    {
        return true;
    }
    return false;
    
}

void Queue ::enqueue(int val)
{
    if (isFull())
    {
        cout<<"Queue is Full !!!, Enqueue not possible"<<endl;
        return;
    }
    else if(isEmpty())
    {
        rear = front = 0;
        arr[rear] = val;
    }

    else
    {
        rear ++;
        arr[rear] = val;
    }
}

int Queue ::dequeue()
{
    int x;
    if(isEmpty())
    {
        cout<<"Queue is Empty. Cannot Dequque !!!"<<endl;
        return 0;
    }
    else if(front == rear)
    {
        x = arr[front];
        arr[front] = 0;
        front = rear = -1;
        return x;
    }

    else
    {
        x = arr[front];
        arr[front] = 0;
        front ++ ;
        return x;
    }


}


int Queue ::count()
{
    return (rear - front + 1);
}

void Queue ::display()
{
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
}



int main()
{
    Queue q1;
    int option = -1, value;

    do
    {
        cout << "\n\nWhat operation do you want to perform? Select option number. Enter 0 to exit." << endl;
        cout << "1. Enque()" << endl;
        cout << "2. Dequeue()" << endl;
        cout << "3. isEmpty()" << endl;
        cout << "4. isFull()" << endl;
        cout << "5. count()" << endl;
        cout << "6. display()" << endl;
        cout << "7. Clear Screen" << endl;


        cout << "Enter your operation: " << endl;
        cin >> option;

        switch (option)
        {
        case 0:
            break;

        case 1:
            cout<<"Enqueue Operation\nEnter an item to Enqueue: ";
            cin>>value;
            q1.enqueue(value);
            cout<<endl;
            break;

        case 2:
            cout<<"Dequeue Operation\nDequeued value: "<< q1.dequeue();
            cout<<endl;
            break;
            
        case 3:
            if (q1.isEmpty())
            {
                cout<<"Queue is Empty"<<endl;
            }
            else
                cout<<"Queue is not empty !!"<<endl;

            break;
            
        case 4:
            if (q1.isFull())
            {
                cout<<"Queue is Full !!"<<endl;
            }
            else
                cout<<"Queue is not full !!"<< endl;

            break;

        case 5:
            cout<<"Count operation called\nTotal elements in queue are: "<<q1.count()<<endl;
            break;
            
        case 6:
            cout<<"=========================================="<<endl;
            cout<<"Displaying the contents of the Queue:\n";

            q1.display();
            
            cout << "==========================================" << endl;
            break;

        case 7:
            system("clear");
            break;

        default:
            cout<<"Enter the correct input Idiot !!!"<<endl;
            break;
            
        }

    } while(option !=0);

    return 0;

} 