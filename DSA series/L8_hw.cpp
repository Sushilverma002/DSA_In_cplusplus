#include<iostream>
using namespace std;

/* //wap using function to find AP by input
int AP(int n){
    cout<<(3*n+7)<<endl;
}
int main(){
    int num;
    cout<<"Enter the value of num : "<<endl;
    cin>>num;
    
    AP(num);
    // cout<<"The nth term of num is: "<<endl;
    return 0;
} */


/*
//wap to find total no.of set bit in a&b(as o/p)
int bits(int n){
    int ans=0;
    while(n){
        if(n&1){
            ans++;
        }n=n>>1;
        }
        return ans;
    }
int main(){

    int a,b;
    cin>>a>>b;
    
    cout<<bits(a)+bits(b);
    
    return 0;

}     */

//using function find fibonacci series

int fibonacci(int n){
    int a=0;
    int b=1;
    cout<<a<<" "<<b<<" ";
    for (int i = 1; i <=n; i++)
    {
        int nextnumber=a+b;
        cout<<nextnumber<<" ";
        a=b;
        b=nextnumber;
    }

}
int main(){
    int n;
    cin>>n;
    fibonacci(n);
    return 0;
}