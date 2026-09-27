#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v;
    for(int i=0;i<10;i++){
        v.push_back(i);// insert element 
    }

    cout<<"elements in the vector:";
    for(auto it=v.begin();it!=v.end();it++){
      cout<<*it<<" ";
    }

    cout<<"/n front element:"<<v.front();
    cout<<"/n last element:"<<v.back();
    cout<<"/n size:"<<v.size();

    cout<<"/n delete from end:"<<v[v.size()-1];
    v.pop_back();

    cout<<"/nafter deleting";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    


}