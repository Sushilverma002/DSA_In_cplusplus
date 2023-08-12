//c++ stl Array
/*

#include<iostream>
#include<array>

using namespace std;
int main(){

    int basic[3]={1,2,3};

    array<int,4> a ={1,2,3,4};
     int size=a.size();

     for(int i=0;i<size;i++){
        cout<<a[i]<<endl;
     }

     cout<<"Element at 2nd index->"<<a.at(2)<<endl;

     cout<<"Empty or not ->"<<a.empty()<<endl;

     
     cout<<"First Element->"<<a.front()<<endl;
     cout<<"Last Element->"<<a.back()<<endl;


}  */

/*  //vector

#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int> v;

    vector<int> a(5,1);

    vector<int> last(a);

    cout<<"print last"<<endl;
    for(int i:last){
        cout<<i<<"";
    }cout<<endl;

    cout<<"capacity->"<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"capacity->"<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"capacity->"<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"capacity->"<<v.capacity()<<endl;
    cout<<"size->"<<v.size()<<endl;

    cout<<"Element at 2nd index "<<v.at(2)<<endl;

    cout<<"front"<<v.front()<<endl;
    cout<<"back"<<v.back()<<endl;

    cout<<"before pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back();
    cout<<"After pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"before clear size "<<v.size()<<endl;
    v.clear();
    cout<<"after clear size "<<v.size()<<endl;

 }  */

/*
   //Deque
#include<iostream>
#include<deque>

using namespace std;
int main(){
    deque<int> d;

   d.push_back(1);
   d.push_front(2);

   //d.pop_front();
   cout<<endl;

   cout<<"Print first index element->"<<d.at(1)<<endl;

   cout<<"front "<<d.front()<<endl;
   cout<<"back "<<d.back()<<endl;

   cout<<"Empty or not "<<d.empty()<<endl;

   cout<<"before erase "<<d.size()<<endl;
   d.erase(d.begin(),d.begin()+1);
   cout<<"after erase "<<d.size()<<endl;
   for(int i:d){
    cout<<i<<endl;
   } 
}   */

/*
  //list
#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l;

    list<int> n(5,100);
    cout<<"Printing n"<<endl;
    for(int i:n){
        cout<<i<<" ";
    }
    cout<<endl;

 l.push_back(1);
 l.push_front(2);

 for(int i:l){
    cout<<i<<" ";
 }
 cout<<endl;
 l.erase(l.begin());
 cout<<"after erase"<<endl;
 for(int i:l){
    cout<<i<<" ";
 }cout<<endl;

 cout<<"size of list "<<l.size()<<endl;

}   */

/*
 //stack
#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string> s;

    s.push("sweety");
    s.push("sah");
    s.push("kashyap");

    cout<<" Top element-> "<<s.top()<<endl;

    s.pop();
    cout<<" Top element-> "<<s.top()<<endl;

    cout<<"size of stack "<<s.size()<<endl;

    cout<<"Empty or not "<<s.empty()<<endl;
    
}  */


/* 
   //queue
#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string> q;

    q.push("sweety");
    q.push("sah");
    q.push("kashyap");

    cout<<" Size before pop "<<q.size()<<endl;
    
    cout<<" First element-> "<<q.front()<<endl;
    q.pop();
    cout<<"First element->"<<q.front()<<endl;

    cout<<"Size after pop "<<q.size()<<endl;
    
} */

 /*
//priority_queue 
#include<iostream>
#include<queue>
using namespace std;
int main(){
    //max heap
    priority_queue<int> maxi;

    //min heap
    priority_queue<int,vector<int>,greater<int> > mini;

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);
    cout<<"size->"<<maxi.size()<<endl;
    int n=maxi.size();
    for(int i=0;i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }cout<<endl;

    mini.push(5);
    mini.push(3);
    mini.push(1);
    mini.push(0);
    mini.push(4);
    cout<<"size->"<<mini.size()<<endl;
    int m=mini.size();
    for(int i=0;i<m;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }cout<<endl;

    cout<<"empty or not"<<mini.empty()<<endl;

}
*/

/*
   //set
#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> s;

    s.insert(5);
    s.insert(0);
    s.insert(1);
    s.insert(6); 

    for(auto i:s){
        cout<<i<<endl;
    }cout<<endl;

set<int>::iterator it =s.begin();
it++;

   s.erase(it);

   for(auto i:s){
    cout<<i<<endl;
   }
cout<<endl;
cout<<"5 is present or not ->"<<s.count(5)<<endl;   

set<int>::iterator itr = s.find(5);

for(auto it=itr;it!=s.end();it++){
    cout<<*it<<" ";
}cout<<endl;

} 
 */
