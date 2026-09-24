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
// a function to delete the head of the list
Node* deletehead(Node* head){
    Node* temp = head;
    head= head->next;
    delete(temp);
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

//deleting tail of a linked list
Node* deletetail(Node* head){
    Node* temp = head;
    while(temp->next->next != NULL){
        temp = temp -> next;
    }
    free (temp->next);
    temp->next = nullptr;
    return head;
}

// a function to delete the kth element of the list 
Node* kdelete(Node* head,int k){
    if (k==1){
        // Node* temp = head;
        // head= head->next;
        // free(temp);
        // return head;
        head = deletehead(head);
        return head;
    }
    int count=0;
    Node* temp = head;
    Node* prev=NULL;
    while(temp!=NULL){
        count ++ ;
        if(count==k){
            prev->next=prev->next->next;
            free (temp);
            break;
        }
        prev = temp;
        temp = temp -> next;

    }
    return head;
}
//removing element based on value
Node* valdelete(Node* head, int val)
{
    Node* temp = head;
    Node* prev = NULL;
    while(temp != NULL){
        if(temp->data==val){
        prev->next=prev->next->next ;
    }
    prev = temp;
    temp = temp->next;
}
return head;
}
// inserting into the linked list 


int main (){
    vector <int> arr={1,2,3,4,5,6,7,8,9};
    Node* head = convertarray(arr);
    // cout<<head->data;
    Node* temp = head;
    cout<<"after converting array to linked list: "<<endl;
    print(head); //using automated function
    head = deletehead(head);
    cout<<"deleting head from this list with free space : "<<endl;
    print(head);
    cout<<"deleting tail from the list by freeing space : "<<endl;
    head=deletetail(head);
    print(head);
    cout<<"deleting kth element from the list : "<<endl;
    head = kdelete(head,5);
    print(head);
    cout<<"deleting based on value : "<<endl;
    head = valdelete(head,4);
    print(head);
}