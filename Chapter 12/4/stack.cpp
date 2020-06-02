#include "stack.h"
#include <iostream>

Stack::Stack(int n) {
    pitems = new Item[n];
    size = n;
}
Stack::Stack(const Stack & st) {
    pitems = new Item[st.size];
    size = st.size;
    top = st.top;
}
Stack::~Stack() {
    delete [] pitems;
}
bool Stack::isempty() const {
    return top == 0;
}
bool Stack::isfull() const {
    return top == MAX;
}
bool Stack::push(const Item & item) {
    if (top < MAX) {
        pitems[top++] = item;
        return true;
    }
    else 
        return false;
}
bool Stack::pop(Item & item) {
    if (top > 0) {
        unsigned long temp_top = --top;
        item = pitems[temp_top];
        return true;
    }
    else
        return false;
}
Stack & Stack::operator=(const Stack & st) {
    this->pitems = new Item[st.size];
    this->size = st.size;
    this->top = st.top;
    return * this;
}
