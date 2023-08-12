#include<iostream>
using namespace std;
//recursion example
// void reacHome(int source,int desc){
//     cout<<"source"<<source<<" "<<"destination"<<desc<<endl;
//     //Base Case
//     if(source==desc){
//         cout<<"reached!!"<<endl;
//         return ;
//     }
//     //processing
//     source++;
//     //recursive relation
//     reacHome(source,desc);
// }
// int main(){
//     int source=1;
//     int desc=10;
//     cout<<endl;
//     reacHome(source,desc);
//     return 0;
// }
//fibonacci leet code question 509
/*class Solution {
public:
    int fib(int n) {
        //base case
        if(n==0){
            return 0;
        }else if(n==1){
            return 1;
        }
        int ans=fib(n-1)+fib(n-2);
        return ans;
    }
};*/



//fibonnaci
// int fib(int n){
//     //base case
//     if(n==0){
//         return 0;
//     }
//     else if(n==1){
//         return 1;
//     }
//     else{
//         return fib(n-1)+fib(n-2);
//     }
    
// }
// int main(){
//     int n ,i=0;
//     cin>>n;
//     while(i<n){
//         cout<<fib(i);
//         i++;
//     }
//     return 0;
// }

//Count Ways To Reach The N-th Stairs
// #include <bits/stdc++.h> 
// int countDistinctWays(int nStairs) {
//     //base case
//     if(nStairs<0)
//         return 0;
//     else if(nStairs==0){
//         return 1;
//     }
//     //recursive realtion
//     int ans=countDistinctWays(nStairs-1)+countDistinctWays(nStairs-2);
//     return ans;
// }


//QUESTION SAY IT O/P ---->412=FOUR ONE TWO
void sayit(int n,string arr[]){
    //base case
    if(n==0){
        return ;
    }
    //processing 
    int digit=n%10;
    n=n/10;
    //recusive relation
    sayit(n,arr);
    cout<<arr[digit]<<" ";
    
}
int main(){
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n;
    cin>>n;
    cout<<endl;
    sayit(n, arr);
    cout<<endl;
    return 0;
}