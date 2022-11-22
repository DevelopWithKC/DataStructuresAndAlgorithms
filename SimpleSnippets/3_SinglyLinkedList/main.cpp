#include "linkedlist.cpp"
#include <iostream>
using namespace std;

int main()
{
    SinglyLinkedList s;
    int option = -1;
    int key1, k1, data1;

    do
    {
        cout << "\n=====================================================" << endl;
        cout << "What operation do you want to perform? Select correct option number\nEnter 0 to exit" << endl;

        cout << "1. appendNode()" << endl;
        cout << "2. prependNode()" << endl;
        cout << "3. insertNodeAfter()" << endl;
        cout << "4. deleteNodeByKey()" << endl;
        cout << "5. updateNodeByKey()" << endl;
        cout << "6. printSinglyLinkedList()" << endl;
        cout << "7. Clear Screen" << endl;
        cout << "=====================================================" << endl;
        cout << "What operation do you want to perform: ";

        cin >> option;
        cout << endl;
        Node *n1 = new Node();

        switch (option)
        {
        case 0:
            break;

        case 1:
            cout << "Append Node Operation\nEnter key and data of the node to be appended"
                 << endl;
            cin >> key1;
            cin >> data1;
            n1->key = key1;
            n1->data = data1;
            s.appendNode(n1);
            break;

        case 2:
            cout << "Prepend node operation\nEnter key and data of the node to be prepended"
                 << endl;
            cin >> key1;
            cin >> data1;
            n1->key = key1;
            n1->data = data1;
            s.prependNode(n1);
            break;

        case 3:
            cout << "Insert node after operation\nEnter key of existing node"
                 << " after which you want to insert this new node: " << endl;
            cin >> k1;
            cout << "Enter key and data of new node first: " << endl;
            cin >> key1;
            cin >> data1;

            n1->key = key1;
            n1->data = data1;

            s.insertNodeAfter(k1, n1);
            break;

        case 4:
            cout << "Delete node by key operation\nEnter the key of node to be deleted: " << endl;
            cin >> k1;
            s.deleteNodeByKey(k1);
            break;

        case 5:
            cout << "Update node by key operation\nEnter key and new data to be updated" << endl;
            cin >> key1;
            cin >> data1;
            s.updateNodeByKey(key1, data1);
            break;

        case 6:
            s.printSinglyLinkedList();
            break;

        case 7:
            system("clear");
            break;

        default:
            cout << "Select appropriate option !!!" << endl;
            break;
        }

    } while (option != 0);

    return 0;
}

