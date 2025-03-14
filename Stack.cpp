#include "Stack.h"

Stack::Stack() {
    vec = vector<int>();
    size = 0;
}


void Stack::push(const int val) {
    vec.push_back(val);
    size++;
}

int Stack::pop() {
    if (size == 0) {
        return -1;
    }
    else {
        int val = vec[size - 1];
        vec.pop_back();
        --size;
        return val;
    }
}

int Stack::peek() {
    if (size == 0) {
        return -1;
    } else {
        return vec[size-1];
    }
}

bool Stack::is_empty() const {
    return size == 0;
}

double Stack::average() const {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += vec.at(i);
    }
    return static_cast<double>(sum) / size;
}

void Stack::print() const {
    for (int i = 0; i < size; i++) {
        cout << vec.at(i) << " ";
    }
    cout << endl;
}