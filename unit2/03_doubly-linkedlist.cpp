#include <bits/stdc++.h>
using namespace std;
struct Node{
    public:
    int data;
    Node* next ;
    Node* prev;
    public:
    Node (int data1,Node* next1,Node* prev1){
        data =data1 ;
        next = next1;
        prev =prev1;
    }
    public :
    Node (int data1){
       data = data1;
       next = nullptr;
       prev = nullptr;
    }
};
// a function to convert an array to linked list
Node* convertarray(vector<int> &arr){ 
    Node* head = new Node(arr[0],nullptr,nullptr);
    Node* prev= head;
    for(int i=0;i<arr.size();i++){
        Node* temp = new Node(arr[i],nullptr,prev);
        prev->next=temp;
        prev = temp;
    }
    return head;
}

// function to print the linked list - just automating constant looping
void print (Node* head){
    while (head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}


int main (){
vector <int> arr={1,2,3,4,5,6,7,8,9};
Node* head = convertarray(arr);
print(head);
}