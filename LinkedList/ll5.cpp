// search in linked list
#include <iostream>// arraytoLL
#include <vector>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data1,Node* next1){
        data=data1;
        next=next1;
    }
    public:
    Node(int data1){
        data=data1;
        next=nullptr;
    }
    
};
Node* convertArr2ll(vector<int> &arr){
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
int searchofanelement(Node* head,int value){
    Node* temp=head;
    while(temp){
        if(temp->data==value){
            return 1;
        }
        temp=temp->next;
    }
}
int main(){
    vector<int> arr={1,2,3,4,5};
    Node* head=convertArr2ll(arr);
    cout<<searchofanelement(head,9);
    return 0;
}