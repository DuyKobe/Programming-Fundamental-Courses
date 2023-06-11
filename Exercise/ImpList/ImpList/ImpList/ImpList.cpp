// ImpList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

// nút
struct Node {
    int data;
        Node* link;
};
//danh sách quản lý
struct List {
    int count;
    Node* head;
};
List myList;
//hàm tạo danh sách rỗng
void Create(List &l) {
    l.count = 0;
    l.head = NULL;
};
//chèn nút
bool InsertNode(List& l, Node* pPre, int data) {
    Node* pNew = new Node();
    if (pNew == NULL) return false;
    pNew->data = data;
    pNew->link = NULL;
    if (pPre == NULL) {
        // chèn nút đầu danh sách
        pNew->link = l.head;
        l.head = pNew; 
    }
    else {
        //chèn nút cuối danh sách
        pNew->link = pPre->link;
        pPre->link = pNew;
    }
    l.count++;
    return true;
}
//Chèn phần tử cuối ds
bool Insert(List& l, int data) {
    Node* pPre = NULL;
    pPre = l.head;
    //chèn cuối ds
    while (pPre != NULL && pPre->link != NULL) {
        pPre = pPre->link;
    }
    return InsertNode(l, pPre, data);
}
//Hàm display data
void display(int &data) {
    cout << data << " ";
}
//Hàm tăng giá trị
void increase(int& data) {
    data = data + 2;
}
//Hàm duyệt
void Traverse(List& l, void (*process)(int&))
{//process: là hàm chức năng
    Node* p = l.head;
    while (p != NULL) {
        process(p->data);
        p = p->link;
    }
}

int main()
{
     #define      SIZE 7
    int arr[] = {13,8,2,1,3,4,5};
    Create(myList);
    for (int i = 0; i < SIZE; i++) {
        Insert(myList, arr[i]);
    }
       // Traverse(myList, increase);
        Traverse(myList, display);
        
    
    return 0;
   
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
