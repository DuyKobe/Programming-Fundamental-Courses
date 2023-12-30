// LINKED_LIST_POSTLAB.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*Cho chương trình khởi tạo" 
- struct node: đại diện cho một node của linked list
- Hàm print: nhận vào con trỏ head của linked list và in ra từng phần tử của linked list
- Hàm createLinkedList:
    + Nhận vào số phần tử (>0) của link list
    + Xây dựng một linked list với dữ liệu của các node được nhập từ đầu vào chuẩn (stdin), node mới được thêm vào CUỐI linked list
    + Trả về con trỏ đến node đầu tiên của linked list.
- Hàm evenThenOddLinkedList:
    + Nhận vào con trỏ head của linked list
    + Hám có tác vụ thay đổi Linked List đầu vào, sao cho các phần tử có giá trị chẵn nằm ở đầu linked list và các phần tử có giá trị lẻ nằm
ở phía sau. Hơn nữa, thứ tự của các giá trị chẵn và lẻ này không thay đổi so với Linked List đầu vào
- Hàm main đọc vào số phần tử của linked list, gọi hàm createLinkedList để khởi tạo linked list, sau đó gọi hàm print để in ra các phần tử của linked list.
Bạn hãy hoàn thành hàm evenThenOddLinkedList
Đầu vào:
Tất cả giá trị từ đầu vào chuẩn (stdin) đều có giá trị trong khoảng (0; 5000)
Đầu ra:
Thỏa yêu cầu bài toán*/

#include <iostream>
using namespace std;

struct node
{
    int data;
    node* next;
};

node* createLinkedList(int n) {
    node* head = nullptr;
    node* tail = nullptr;
    for (int i = 0; i < n; i++) {
        int data;
        cin >> data;
        node* newNode = new node;
        newNode->data = data;
        newNode->next = nullptr;
        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        }
        else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    return head;
}

node* evenThenOddLinkedList(node* head)
{
    if (head == nullptr || head->next == nullptr) {
        return head;
    }

    node* evenHead = nullptr;
    node* evenTail = nullptr;
    node* oddHead = nullptr;
    node* oddTail = nullptr;

    // Phân tách các phần tử chẵn và lẻ vào danh sách tạm thời
    while (head != nullptr) {
        node* nextNode = head->next;
        if (head->data % 2 == 0) {
            if (evenHead == nullptr) {
                evenHead = head;
                evenTail = head;
            }
            else {
                evenTail->next = head;
                evenTail = head;
            }
        }
        else {
            if (oddHead == nullptr) {
                oddHead = head;
                oddTail = head;
            }
            else {
                oddTail->next = head;
                oddTail = head;
            }
        }
        head = nextNode;
    }

    // Kết hợp danh sách chẵn và danh sách lẻ
    if (evenHead != nullptr) {
        evenTail->next = oddHead;
        return evenHead;
    }
    else {
        return oddHead;
    }
}
void print(node* head)
{
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
int main()
{
    int n = 0;
    cin >> n;
    node* head = createLinkedList(n);
    print(head);
    head = evenThenOddLinkedList(head);
    print(head);
    return 0;
}