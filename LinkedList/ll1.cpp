// #include <iostream>
// #include <vector>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;

//     public:
//     Node(int data1,Node* next1){
//         data=data1;
//         next=next1;
//     }
//     public:
//     Node(int data1){
//         data=data1;
//         next=nullptr;
//     }
    
// };
// int main() { 
//      vector<int> arr={1,2,3,4,5};
//      Node* y=new Node(arr[0]);
//    cout<<y->data<<endl;
//     return 0;
// }   

#include <iostream>
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
int main(){
    vector<int> ar={1,4,3,2,5};
    Node* head= new Node(ar[0]);
    cout<<head->data<<endl;
}