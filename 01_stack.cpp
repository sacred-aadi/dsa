#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

struct Stack {
    Node* top = nullptr;
};

void push(Stack* s, int val) {
    Node* newNode = new Node{val, nullptr};

    newNode->next = s->top;
    s->top = newNode;
}

void pop(Stack* s){
    if (s->top == nullptr){
        return ;
    }
    Node* temp= s->top;
    s->top = s->top->next;
    delete temp;
}


int peek(Stack* s){
    if(s->top==nullptr){
        return -1;
    }
    return s->top->data;
}


bool isEmpty(Stack* s){
    return s->top == nullptr;
}


int main() {
    Stack s;

    cout << "Is empty? " << isEmpty(&s) << endl;

    push(&s, 10);
    push(&s, 20);
    push(&s, 30);

    cout << "Top element: " << peek(&s) << endl;

    pop(&s);
    cout << "Top after pop: " << peek(&s) << endl;

    pop(&s);
    pop(&s);

    cout << "Is empty now? " << isEmpty(&s) << endl;

    return 0;
}