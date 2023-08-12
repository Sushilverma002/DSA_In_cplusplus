 #include <iostream>
using namespace std;

/* int main(){
    int a=9;
    if (a==9)
    {
        cout<<"niney"<<endl;
    }
    if (a>0)
    {
        cout<<"a is positive"<<endl;
    }
    else
    {
        cout<<"a is negative"<<endl;
    }
    
} */
//Calculate the sum of all even numbers from 1 to n 
/* #include <iostream>
 using namespace std;

 int main(){
    
    int n;
    cin>>n;

    int sum =0;
    int i=2;
    while (i<=n)
    {   if (i%2==0)
    
        sum=sum+i;
        i=i+1;
    }
    
cout<<"Sum of even numbers are: "<<sum<<endl;  
} */

//farenhite to celsius
/* #include <iostream>
using namespace std;

int main(){
    float frahenite;
    cin>>frahenite;
    float celsius=5.0/9*(frahenite-32);
    cout<<frahenite<<"f= "<< celsius<<"c"<<endl;

    
} */

/* #include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
int i=2;
    while (i<n)
    {   //divide hogya, not prime
        if (n%i==0)
        {
            cout<<"Not prime for "<<i<<endl;
        }
        else
        {
            cout<<"prime for "<<i<<endl;
        }
        i=i+1;
        
    }
    
} */
int main(){
    int n;
    cout<<"Enter the value of n "<<endl;
    cin>>n;
    
    bool isprime=1;
     
     for (int i = 2; i < n; i++)
    {   //rem is 0 , not a prime
        if (n%i== 0)
        {
            isprime=0;
            break;
        } 
     }
     
     if (isprime==0)
        {
            cout<<"Not a prime number"<<endl;
        }
        else
        {
            cout<<"IS a prime number"<<endl;
        }
        return 0;
}