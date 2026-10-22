#include <bits/stdc++.h>
using namespace std;

struct Node {
    string url;
    Node* next;
    Node* back;

    Node(string data, Node* next, Node* back) {
        this->url = data;
        this->next = next;
        this->back = back;
    }

    Node(string data) {
        this->url = data;
        this->next = nullptr;
        this->back = nullptr;
    }
};

// Visit a new page and remove forward history
void visit(Node*& current, string url) {
    while(current->next != nullptr) {
        Node* temp = current->next;
        current->next = temp->next;
        delete temp;
    }

    Node* newsite = new Node(url);
    current->next = newsite;
    newsite->back = current;

    current = newsite;
}

// Go backward
void goback(Node*& current) {
    if(current == nullptr || current->back == nullptr) {
        return;
    }

    current = current->back;
}

// Go forward
void goforward(Node*& current) {
    if(current == nullptr || current->next == nullptr) {
        return;
    }

    current = current->next;
}

// Display current page
void showcurrent(Node* current) {
    if(current == nullptr) {
        cout << "No page open\n";
        return;
    }

    cout << current->url << endl;
}

// Display entire history and mark current page
void showhistory(Node* head, Node* current) {
    Node* temp = head;

    cout << "\nBrowser History:\n";

    while(temp != nullptr) {
        cout << temp->url;

        if(temp == current) {
            cout << " <-- Current Page";
        }

        cout << endl;
        temp = temp->next;
    }
}

int main() {
    Node* head = new Node("google.com");
    Node* current = head;

    // Visit three websites
    visit(current, "youtube.com");
    visit(current, "github.com");
    visit(current, "stackoverflow.com");

    cout << "\n--- Current Page ---\n";
    showcurrent(current);

    cout << "\n--- Go Back ---\n";
    goback(current);
    showcurrent(current);

    cout << "\n--- Go Back Again ---\n";
    goback(current);
    showcurrent(current);

    cout << "\n--- Go Forward ---\n";
    goforward(current);
    showcurrent(current);

    // Pass both head and current
    showhistory(head, current);

    return 0;
}