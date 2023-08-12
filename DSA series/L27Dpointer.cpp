#include<iostream>
using namespace std;
void print(int**p){
    //kya kuch change hoga
    //p=p+1;//no change
    //kya ab?
    //*p=*p+1;//yes
    //kys ab?
    **p=**p+1;//yes
}
int main(){
    int p=5;
    int* ptr=&p;
    int** ptr2=&ptr;

    cout<<"p:-"<<p<<endl;
    cout<< "*ptr:-"<<*ptr<<endl;
    cout<<"**ptr:-"<<**ptr2<<endl;


    cout<<&p<<endl;
    cout<<&ptr<<endl;
    cout<<&ptr2<<endl;

//so it will print only the address of p in all case becoz the property of pointer
    cout<<&p<<endl;
    cout<<ptr<<endl;
    cout<<*ptr2<<endl;

    cout<<"before"<<p<<endl;
    cout<<"before"<<ptr<<endl;
    cout<<"before"<<ptr2<<endl;
    print(ptr2);
    cout<<"after"<<p<<endl;
    cout<<"after"<<ptr<<endl;
    cout<<"after"<<ptr2<<endl;
    return 0;
}