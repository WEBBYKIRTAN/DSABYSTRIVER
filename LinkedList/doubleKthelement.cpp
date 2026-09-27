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
Node* deleteTail(Node* head){
if(head==NULL || head->next==NULL){
    delete head;
    return NULL;
}
Node* tail=head;
while(tail->next!=NULL){
    tail=tail->next;
}
    Node* newTail=tail->prev;
    newTail->next=nullptr;
    tail->prev=nullptr;
    delete tail;
    return head;

}
Node* deletehead(Node* head){
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    Node* back=head;
    head=head->next;
    head->prev=nullptr;
    back->next=nullptr;
    delete back;
    return head;
}
Node* removeKthElement(Node* head,int k){
    if(head==NULL){
        return NULL;
    }
    int cnt=0;
    Node* Knode=head;
    while(Knode!=NULL){
        cnt++;
        if(cnt==k) break;
        Knode=Knode->next;
    }
    Node* back=Knode->prev;
    Node* front=Knode->next;
    if(back==NULL && front==NULL){
        return NULL;
    }
    else if(back==NULL){
        return deletehead(head);
    }
    else if(front==NULL){
        return deleteTail(head);
    }
    back->next=front;
    front->prev=back;

    Knode->next=nullptr;
    Knode->prev=nullptr;
    delete Knode;
    return head;
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
    head=removeKthElement(head,4);
    print(head);
    return 0;
}