#include <bits/stdc++.h>
using namespace std;
struct Node{
    public:
    int data;
    Node* next ;
    Node* back;
    public:
    Node (int data1,Node* next1,Node* back1){
        data =data1 ;
        next = next1;
        back =back1;
    }
    public :
    Node (int data1){
       data = data1;
       next = nullptr;
       back = nullptr;
    }
};
// a function to convert an array to linked list
Node* convertarray(vector<int> &arr){ 
    Node* head = new Node(arr[0],nullptr,nullptr);
    Node* prev= head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i],nullptr,prev);
        prev->next=temp;
        prev = temp;
    }
    return head;
}

Node* deletehead(Node* head){
    if (head==NULL) return head;
    Node* prev = head;
    head = head->next;
    head->back=nullptr;
    prev->next = nullptr;
    delete(prev);
    
    return head;
}
Node* deletetail(Node* head){
    Node* temp = head;
    while (temp->next!=NULL){
        temp = temp->next;
    }
    Node* y= temp->back;
    y->next=nullptr;
    temp->back=nullptr;
    
    delete temp;
    return head;
}

//delete kth element 

Node* kthelelementdel(Node* head,int k){
    Node* temp = head;
    int count = 0;
    while(temp->next!=NULL){
        count++;
        if(count==k){
            break;
        }
        temp = temp->next;
    }
    Node* prev = temp->back ;
    Node* front = temp->next; 
    
    prev->next=prev->next->next;
    front->back= prev;
    prev->next= front;

    free(temp);
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