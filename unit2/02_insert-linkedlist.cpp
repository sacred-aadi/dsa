#include <bits/stdc++.h>
using namespace std;
struct Node{
    public:
    int data;
    Node* next ;
    public:
    Node (int data1,Node* next1){
        data =data1 ;
        next = next1;
    }
    public :
    Node (int data1){
       data = data1;
       next = nullptr;
    }
};
// a function to convert an array to linked list
Node* convertarray(vector<int> &arr){ 
    Node* head =new Node(arr[0]);
    Node* mover = head;         
    for(int i=1;i<arr.size();i++){
        Node* temp  = new Node (arr[i]);
        mover->next = temp;
        mover=temp;
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
Node* insertathead(Node*head , int val){
    Node* temp = new Node(val,head);
    return temp;

}
Node* insertatend(Node* head , int val){
    Node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    Node* newNode = new Node(val);
    temp ->next = newNode;
    return head;
}

Node* insertatk(Node* head,int pos,int val){
    Node* temp = head;
    int count = 0;
    while(temp!=NULL){
        count++;
        if(count == pos-1){
            Node* n = new Node(val);
            n->next = temp -> next;
            temp-> next = n;
            break;
        }
        temp = temp -> next;
    }
    return head;
}

int main (){
vector <int> arr={1,2,3,4,5,6,7,8,9};
Node* head = convertarray(arr);
head = insertathead(head,10);
print(head);
head=insertatend(head,10);
print(head);

head = insertatk(head,3,100);
print(head);
}