#include <iostream>
using namespace std;

class Node
{
public:
    int key;
    int data;
    Node *next;
    Node();
    Node(int, int);
};

Node ::Node()
{
    key = 0;
    data = 0;
    next = NULL;
}

Node ::Node(int k, int d)
{
    key = k;
    data = d;
}

class SinglyLinkedList
{

public:
    Node *head;

    SinglyLinkedList();
    SinglyLinkedList(Node *);
    Node *nodeExists(int k);
    void appendNode(Node *);
    void prependNode(Node *);
    void insertNodeAfter(int, Node *);
    void deleteNodeByKey(int);
    void updateNodeByKey(int, int);
    void printSinglyLinkedList();
};

SinglyLinkedList::SinglyLinkedList()
{
    head = NULL;
}

SinglyLinkedList::SinglyLinkedList(Node *n)
{
    head = n;
}

// A node will exist if it has a valid key value. We will check if key exists or not.
// If it does not exists, we wil return null. If the key exist, we will return it's address
Node *SinglyLinkedList::nodeExists(int k)
{
    Node *temp = NULL;

    Node *ptr = head;
    while (ptr != NULL)
    {
        // checking if current node's key is same as given input. if yes, return its address
        if (ptr->key == k)
        {
            temp = ptr;
        }

        ptr = ptr->next;
    }

    return temp;
}

// Appends node at the end of the Linked List
// this function will accept the address of the new node that needs to be appended
void SinglyLinkedList::appendNode(Node *n)
{
    if (nodeExists(n->key) != NULL)
    {
        cout << "Node already exisits with same key value: " << n->key
             << " \nAppend another node with a different key value" << endl;
    }
    else
    {
        if (head == NULL) //if the linked list does not have 1st node.
        {
            head = n;
            cout << "Node Appended !!!" << endl;
        }
        else
        {
            Node *ptr = head;
            //iterate till the last node of Linked List.
            while (ptr->next != NULL) 
            {
                ptr = ptr->next;
            }
            // ptr now has the address of last node

            ptr->next = n;
            cout << "Node Appended !!!" << endl;
        }
    }
}

// Adds node at the start of the linked list
void SinglyLinkedList::prependNode(Node *n)
{
    if (nodeExists(n->key) != NULL)
    {
        cout << "Node already exisits with same key value: " << n->key
             << " \nAppend another node with a different key value" << endl;
    }
    else
    {
        n->next = head;
        head = n;
        cout << "Node Prepended !!!" << endl;
    }
}

// k is the key after which you want to insert the node n
void SinglyLinkedList::insertNodeAfter(int k, Node *n)
{
    //The line below will return the address at which the node has value k. 
    //if it returns null, it means value of k is invalid.

    Node *ptr = nodeExists(k);
    if (ptr == NULL)
    {
        cout << "No node exisits with key value k" << endl;
    }
    else
    {
        //checking if the key on the new node exists in the list.
        if (nodeExists(n->key) != NULL)
        {
            cout << "Node already exisits with same key value: " << n->key
                 << " \nAppend another node with a different key value" << endl;
        }
        else
        {
            n->next = ptr->next;
            ptr->next = n;
            cout << "Node Inserted !!!" << endl;
        }
    }
}

void SinglyLinkedList::deleteNodeByKey(int k)
{
    if (head == NULL)
    {
        cout << "Singly Linked List already empty. Delete not possible !!!" << endl;
    }
    else if (head != NULL) // case for deletion of first node
    {
        head = head->next;
        cout << "Node Unlinked with key's value: " << k << endl;
    }
    else
    {
        Node *temp = NULL;
        Node *previousPtr = head;
        Node *currentPtr = head->next;

        while (currentPtr != NULL)
        {
            //record the address of the node with key == k in temp.
            if (currentPtr->key == k)
            {
                temp = currentPtr;
                currentPtr = NULL;
            }

            else
            {
                previousPtr = previousPtr->next;
                currentPtr = currentPtr->next;
            }
        }

        if (temp != NULL)
        {
            previousPtr->next = temp->next;
            cout << "Node Unlinked with key's value: " << k << endl;
        }
        else
        {
            cout << "Node doesn't exist with key value: " << k << endl;
        }
    }
}

//It updates the data of the node associated with key k.
void SinglyLinkedList::updateNodeByKey(int k, int d)
{
    Node *ptr = nodeExists(k);
    if (ptr != NULL)
    {
        ptr->data = d;
        cout << "Node data updated successfully !!!" << endl;
    }
    else
    {
        cout << "Node doesn't exists with key value: " << k << endl;
    }
}

void SinglyLinkedList::printSinglyLinkedList()
{
    if (head == NULL)
    {
        cout << "No nodes in Singly Linked List" << endl;
    }
    else
    {
        cout << endl
             << "Singly Linked List values are: ";

        Node *temp = head;
        while (temp != NULL)
        {
            cout << "(" << temp->key << ", " << temp->data << ") -->";
            temp = temp->next;
        }
    }
}
