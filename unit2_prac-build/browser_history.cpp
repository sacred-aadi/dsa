#include <bits/stdc++.h>
using namespace std;

struct Node {
    public :
    string url;
    Node* next ;
    Node* back ;

    Node(string data , Node* next,Node* back){
        this->url = data;
        this->next= next;
        this->back=back;
    }
    Node(string data){
        this->url=data;
        this->next= nullptr;
        this->back=nullptr;
    }
};


int main  (){


    Node* current = new Node("google.com");
    Node* youtube = new Node("youtube.com");

    current->next = youtube;
    youtube->back = current;
}