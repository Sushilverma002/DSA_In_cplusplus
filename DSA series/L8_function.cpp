#include<iostream>
using namespace std;
 /* //check even odd number through function
//1 ->even 
//0 ->odd
bool isEven(int a){
    //odd
    if(a&1){
        return 0;
    }
    else
    {
        return 1;
    }
}
int main(){
    int num;
    cin>>num;

    if (isEven(num))
    {
        cout<<"Number is even"<<endl;
    }
    else
    {
        cout<<"Number is odd "<<endl;
    }
    
     return 0;
} */

/*
//nCr question
    int factorial(int a){
        int factorial=1;
        
        for(int i=1;i<=a;i++){
            factorial=factorial*i;

        }return factorial;
    }

    int nCr(int n,int r){
        int num = factorial(n);
        int denom = factorial(r)*factorial(n-r);

        return num/denom;
    }

    int main(){
        int n,r;
        cout<<"Enter the value of n and r"<<endl;
        cin>>n>>r;
        
        cout<<"Answer is "<<nCr(n,r)<<endl;
        return 0;
    } */
 // prime or not using function
    // 0 -> Not a Prime no.
    // 1 -> Prime no.

bool isPrime(int n ) {
   for(int i = 2; i < n; i++){
       if(n % i == 0) {
       //divide hogya h , not a prime no.
          return 0;
        }
   }
   return 1;
}

int main() {
   
   int n ;
   cin >> n;
   if(isPrime(n)) {
        cout <<" is a Prime number " <<endl;
   }
   else{
       cout<< "Not a prime number "<<endl;

   }
   return 0;
}
