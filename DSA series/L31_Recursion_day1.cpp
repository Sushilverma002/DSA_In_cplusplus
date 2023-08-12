#include<iostream>
 using namespace std;
 //1.RECURION USING FACTORIAL

// int factorial(int n){
//     if(n==0){
//         return 1;
//     }
//     // int smaller=factorial(n-1);
//     // int bigger=n*smaller;

//     return n*factorial(n-1);
// }
// int main(){
//     int n;
//     cin>>n;
//     int ans =factorial(n);
//     cout<<ans<<endl;
//     return 0;
// }

//POWER OF 2POWn
// int poweroftwo(int n){
//     if(n==0){
//         return 1;
//     }
//     return 2*poweroftwo(n-1);
// }
// int main(){
//     int n;
//     cin>>n;
//     int ans=poweroftwo(n);
//     cout<<"answer is "<<ans<<endl;
//     return 0;
// }

//coutning backword
void print(int n){
    //tail recursive realtion
    //base case
    if(n==1){
        return ;
    }
    // cout<<n<<endl;
    //recursive realtion
    print(n-1);
    cout<<n<<endl;
}

int main(){
    int n;
    cin>>n;
    cout<<endl;
    
    print(n);
    return 0;
}