#include "LinkedList.h"
#include <iostream>

void test_linked_list() {
    LinkedList list;

    cout << "Is Empty: " << list.is_empty() << endl;
    cout << "Test Push Back(1, 2, 3)" << endl;
    list.push_back(1);
    list.push_back(2);
    list.push_back(3);
    list.print();
    cout << "Test Push Front(4, 5, 6)" << endl;
    list.push_front(4);
    list.push_front(5);
    list.push_front(6);
    list.print();
    cout << "Test Pop Back" << endl;
    list.pop_back();
    list.print();
    cout << "Test Pop Front" << endl;
    list.pop_front();
    list.print();
    const Node* front = list.front();
    const Node* back = list.back();
    cout << "Front: " << front->data << endl;
    cout << "Back: " << back->data << endl;
    cout << "Is Empty: " << list.is_empty() << endl;
    cout << "Test Insert((0,3),(3,7),(7,9))" << endl;
    list.insert(0, 3);
    list.insert(3, 7);
    list.insert(7, 9);
    list.print();
    cout << "Test Remove(index: 3): " << list.remove(3) << endl;
    list.print();
    cout << "Test Remove(index: 10): " << list.remove(10) << endl;
    list.print();
    cout << "Test Find(data: 3): " << list.find(3) << endl;
    cout << "Test Find(data: 9): " << list.find(9) << endl;
    cout << "Test Find(data: 20): " << list.find(20) << endl;
}

int main() {
    test_linked_list();

    return 0;
}