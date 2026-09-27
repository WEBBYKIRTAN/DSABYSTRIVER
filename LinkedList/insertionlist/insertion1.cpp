// delete the Node of the element
#include <iostream>
#include <vector>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    public:
    Node(int data1,Node* next1,Node*prev1){
        data=data1;
        next=next1;
        prev=prev1;
    }
    Node(int data1){
        data=data1;
        next=nullptr;
        prev=nullptr;
    }
};
Node* convertarrtodll(vector<int> &arr){
 Node* head=new Node(arr[0]);
 Node* prev=head;
 for(int i=1;i<arr.size();i++){
    Node* temp=new Node(arr[i],nullptr,prev);
    prev->next=temp;
    prev=temp;
 }
 return head;
}
Node* insertbeforehead(Node* head,int val){
    Node* newhead=new Node(val,head,nullptr);
    head->prev=newhead;
    return newhead;
}
Node* insertbeforetail(Node* head,int val){
    if(head->next==NULL){
        return insertbeforehead(head,val);
    }
    Node* tail=head;
    while(tail->next!=NULL){
        tail=tail->next;
    }
    Node* back=tail->prev;
    Node* newNode=new Node(val,tail,back);
    back->next=newNode;
    tail->prev=newNode;
    return head;
}
Node* insertbeforek(Node* head,int k,int val){
    Node* temp=head;
    int cnt=0;
    while(temp!=NULL){
        cnt=cnt+1;
        if(cnt==k) break;
        temp=temp->next;
    }
    Node* back=temp->prev;
    Node* newNode= new Node(val,temp,back);
    temp->prev=newNode;
    back->next=newNode;
    return head;
}

void insertbeforenode(Node* node,int val){
    Node* back=node->prev;
    Node* newNode= new Node(val,node,back);
    back->next=newNode;
    node->prev=newNode;
}
void print(Node* head){
    while(head!=NULL){
     cout<<head->data<<" ";
     head=head->next;
    }
}
int main(){
    vector<int> ar={12,4,5,3};
    Node* head=convertarrtodll(ar);
    // head=insertbeforek(head,3,19);
    insertbeforenode(head->next,10);
    print(head);
    return 0;
}