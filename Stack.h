#pragma once
#include <iostream>
#include <vector>

using namespace std;

class Stack {
private:
    vector<int> vec;
    int size;
public:
    //Constructor
    Stack();
    //Adds an element to the top of the stack
    void push(int);
    //Removes the top element from the stack
    int pop();
    //Returns the element on top of the stack
    int peek();
    //Returns true or false depending on if the stack is empty or not
    bool is_empty() const;
    //Returns the average value of the elements in the stack
    double average() const;
    //Prints out the stack
    void print() const;
};
