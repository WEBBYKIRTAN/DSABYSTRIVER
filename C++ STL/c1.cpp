// pairs
/*
void explainpair(){
pair<int,int>p={1,2};
cout<<p.first<<" "<<p.second;
pair<int,pair<int,int>>p={1,{3,5}};
cout<<p.first<<" "<<p.second.first<<" "<<p.second.second;
pair<int,int>arr[]={{1,2},{3,5},{3,6}};
cout<<arr[1].second // o/p is 5
}
 */

// vectors
/*
void explianvector(){
vector<int>v;
v.push_back(1);
v.emplace_back(2);

vector<pair<int,int>>vec;
v.push_back({1,2});
v.emplace_back(1,2);

vector<int>v(5,100);

vector<int>v(5);

vector<int>v1(5,20);
vector<int>v2(v1);

how to access element  in the vector
iterator is point to the memory where the element
is lying

vector<int>::iterator it=v.begin();

it++;
cout<<*(it)<<" ";

it=it+2;
cout<<*(it)<<" ";

vector<int>::iterator it=v.end();
vector<int>::iterator it=v.rend();
vector<int>::iterator it=v.rbegin();

cout<<v[0]<<" "<<v.at(0);
cout<<v.back()<<" ";

for(vector<int>::iterator it=v.begin();it!=v.end();it++){
cout<<*(it)<<" ";
}

for(auto it=v.begin();it!=v.end();it++){
cout<<*(it)<<" ";
}

for(auto it:v){
cout<<it<<" ";
}

//{10,20,12,23}
v.erase(v.begin()+1);

//(10,20,12,23,35)
v.erase(v.begin()+2,v.begin()+4);//{10,20,35} [start,end]

//insert function

vector<int>v(2,100);//{100,100}
v.insert(v.begin(),300);//(300,100,100)
v.insert(v.begin()+1,2,10);//{300,10,10,100,100}

vector<int>copy(2,50);
v.insert(v.begin(),copy.begin(),copy.end());//{50,50,300,10,10,100,100} not so
 much used


//{10,20}
cout<<v.size();//2

//{10,20}
v.pop_back();//{10}

//v1 ->{10,20}
//v2->{30,40}
v1.swap(v2);//v1->{30,40},v2->{10,20}

v.clear();//erase the entire vector

cout<<v.empty();

}

void explainlist(){
list<int> ls;
ls.push_back(2);//{2}
ls.emplace_back(4);//{2,4}

ls.push_front(5);//{5,2,4}
ls.emplace_front();//{2,4}
}
// rest function same as vetor
//begin,end,rbegin,rend,clear,insert,size,swap

//DEQUE
deque<int>dq;
dq.push_back(1);//{1}
dq.emplace_back(2);//{1,2}
dq.push_front(4);//{4,1,2}
dq.emplace_front(3);//{3,4,1,2}

dq.pop_back();//{3,4,1}
dq.pop_front();//{4,1}

dq.back();

dq.front();

// rest functions same as vector
// begin,end,rbegin,rend,clear,insert,size,swap
}

void explainQueue(){//FIFO
queue<int> q;
q.push(1);//{1}
q.push(2);//{1,2}
q.emplace(4);//{1,2,4}

q.back()+=5

cout<<q.back();// prints 9

//Q is{1,2,9}
cout<< q.front();// print 1

q.pop();//{2,9}
cout<<q.front();//print 2

// size swap empty same as stack
}

void explainPQ(){
priority_queue<int>pq;

pq.push(5);//{5}
pq.push(2);//{5,2}
pq.push(8);//{8,5,2}
pq.emplace(10);//{10,8,5,2}

cout<<pq.top();//print 10

pq.pop();//{8,5,2}

cout<< pq.top();// print 8

// size swap empty function same as other

// Minimum Heap
priority_queue<int,vector<int>,greater<int>>pq;
pq.push(5);//{5}
pq.push(2);//{2,5}
pq.push(8);//{2,5,8}
pq.emplace(10);{2,5,8,10}

cout<<pq.top();// prints 2
}

set is stored in sorted order and unique
void explainset(){
set<int>st;
st.insert(1);//{1}
st.emplace(2);//{1,2}
st.insert(2);//{1,2}
st.insert(4);//{1,2,4}
st.insert(3);//{1,2,3,4}

//{1,2,3,4,5}
auto it=st.find(3);

//{1,2,3,4,5}
auto it=st.find(6);// st.end()

//{1,4,5}
st.erase(5);//erase 5// takes logarithmic time

int cnt=st.count(1);

auto it=st.find(3);
st.erase(it);//it takes constant time

//{1,2,3,4,5}
auto it1=st.find(2);
auto it2=st.find(4);
st.erase(it1,it2);//after erase{1,4,5} {first,last}

//lower_bound() and upper bound() function works in the same way
// as in vector it does

// this is the syntax
auto it=st.lower_bound(2);

auto it=st.upper_bound(3);
}

// multiset -> only obey sorted order

void explainMultiSet(){
// everything is same as set
// only stores dublicate element also

multiset<int>ms;
ms.insert(1); //{1}
ms.insert(1); //{1,1}
ms.insert(1); //{1,1,1}

ms.erase(1); // all 1's erased

int cnt=ms.count(1);

// only a single one erased
ms.erase(ms.find(1));

ms.erase(ms.find(1),ms.find(1)+2);

// rest all function are same
}

// unordered set -> unique and random
void explainUSet(){
   unordered set<int> st;
   // lower bound and upper bound func
   // does not works,rest all func are same
   // as above, it does not stores in any
   // particular order it has a better complexity
   // than set in most cases,except some when collision happens
}

MAP-> key and value
// key should be unique and any data types and in sorted order
// value can be anything
//{key , value}

void explainMap(){
map<int,int>mpp;
map<int,pair<int,int>>mpp;
map< pair<int,int>, int>mpp;

mpp[1]=2;
mpp.emplace({3,1});

mpp.insert({2,4});

mpp({2,3})=10;

for(auto it :mpp)// it is for each loop
{
cout<< it.first<<" "<<it.second<<endl;
}
cout<<mpp[1];
cout<<mpp[5];

autof
}


*/