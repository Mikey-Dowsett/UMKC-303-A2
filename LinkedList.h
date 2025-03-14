#pragma once
#include <iostream>
#include <ostream>

using namespace std;

struct Node {
    int data;
    Node* next;

    Node(const int data, Node* next) : data(data), next(next) {}
};

class LinkedList {
private:
    Node* head = nullptr;

public:
    //Adds a new node to the front of the list
    void push_front(int data);
    //Adds a new node to the end of the list
    void push_back(int data);
    //Deletes the first node in the list
    void pop_front();
    //Deletes the last node in the list
    void pop_back() const;
    //Returns the node at the front of the list
    Node* front() const;
    //Returns the node at the end of the list
    Node* back() const;
    //Returns if the list is empty or not
    bool is_empty() const;
    //Prints out the contents of the list
    void print() const;
    //Adds a new node to the given index in the list, or the end of the list if the index is out of range
    void insert(size_t index, const int& data);
    //Removes a node at an index and returns true, or returns false if the index is out of range
    bool remove(size_t index);
    //Returns the index of the first node with the given data or returns the size of the list if no matching node is found
    size_t find(const int& data) const;
};
