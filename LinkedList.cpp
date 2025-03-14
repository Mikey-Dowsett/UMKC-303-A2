#include "LinkedList.h"

void LinkedList::push_front(const int data) {
    auto* newNode = new Node(data, nullptr);
    if (head == nullptr) {
        head = newNode;
    } else {
        newNode->next = head;
        head = newNode;
    }
}

void LinkedList::push_back(const int data) {
    auto* newNode = new Node(data, nullptr);
    if (head == nullptr) {
        head = newNode;
    } else {
        Node* curr = head;
        while (curr->next != nullptr) {
            curr = curr->next;
        }
        curr->next = newNode;
    }
}

void LinkedList::pop_front() {
    if (head == nullptr) {
        cout << "The list is empty." << endl;
    } else {
        const Node* curr = head;
        head = head->next;
        delete curr;
    }
}

void LinkedList::pop_back() const {
    if (head == nullptr) {
        cout << "The list is empty." << endl;
    } else {
        Node* curr = head;
        while (curr->next->next != nullptr) {
            curr = curr->next;
        }
        const Node* temp = curr->next;
        curr->next = nullptr;
        delete temp;
    }
}

Node* LinkedList::front() const {
    return head;
}

Node* LinkedList::back() const {
    Node* curr = head;
    while (curr->next != nullptr) {
        curr = curr->next;
    }
    return curr;
}

bool LinkedList::is_empty() const {
    return head == nullptr;
}

void LinkedList::print() const {
    const Node* curr = head;
    while (curr != nullptr) {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

void LinkedList::insert(const size_t index, const int& data) {
    auto* newNode = new Node(data, nullptr);

    if (index == 0) {
        newNode->next = head;
        head = newNode;
        return;
    }

    Node* curr = head;
    for (size_t i = 0; i < index - 1; i++) {
        if (curr->next == nullptr) {
            curr->next = newNode;
            return;
        }
        curr = curr->next;
    }

    newNode->next = curr->next;
    curr->next = newNode;
}

bool LinkedList::remove(size_t index) {
    if (head == nullptr) {
        return false;
    }

    Node* curr = head;
    for (size_t i = 0; i < index - 1; i++) {
        if (curr == nullptr) {
            return false;
        }
        curr = curr->next;
    }
    Node* temp = curr->next;
    curr->next = temp->next;
    delete temp;
    return true;
}

size_t LinkedList::find(const int& data) const {
    const Node* curr = head;
    int count = 0;
    while (curr != nullptr) {
        if (curr->data == data) {
            return count;
        }
        ++count;
        curr = curr->next;
    }
    return count;
}