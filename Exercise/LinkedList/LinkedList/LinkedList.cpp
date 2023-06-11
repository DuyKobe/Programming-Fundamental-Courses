// LinkedList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node* next;
};
Node* head;


int main()
{
    Node a, b, c;
    int arr[1000];
    Node d;
    char str[80];
    Node e;
    Node* temPtr;

    a.data = 10; a.next = NULL; 
    b.data = 2; b.next = NULL;
    c.data = 3; c.next = NULL;
    d.data = 4; d.next = NULL;
    e.data = 5; e.next = NULL;
    cout << "Node a: "<<a.data <<", "<<&a<< endl;
    cout << "Node b: " << b.data << ", " << &b << endl;
    cout << "Node c: " << c.data << ", " << &c << endl;
    cout << "Node d: " << d.data << ", " << &d << endl;
    cout << "Node e: " << e.data << ", " << &e << endl;
    //a->b->c->d->e
    head = &a;
    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = &e;
    e.next = NULL;
    //Duyet ds
    temPtr = head;
    cout << "a->b->c->d->e"<<endl;
    while (temPtr != NULL) {
        cout << "(" << temPtr->data << ", " << temPtr->next << ")"<<" ";
        temPtr = temPtr->next;
   
    }
    cout << endl;
     



}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
