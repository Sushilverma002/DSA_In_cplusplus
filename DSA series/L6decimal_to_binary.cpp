#include<iostream>
#include<math.h>
using namespace std;
//-ve decimal to binary
/*int main(void){
    long long int n;
    cin>>n;
    float ans=0;
     unsigned long long int i=0;
    if (n<0)
    {
        n=pow(2,32)+n;
    }
    cout<<n<<endl;
    while (n)
    {
        int lastBit=n&1;
        ans = (lastBit*pow(10,i))+ans;
        n=n>>1;
        i++;
    }
    cout<<ans<<endl;
    return 0;
}*/

//binary to decimal
int main(){
    int n;
    cin>>n;
     int i=0;
     int ans=0;
     while (n!=0)
     {
        int digit = n %10;
        if (digit==1)
        {  
             ans = (digit*pow(2,i))+ans;

        }
       n=n/10;
        i++;
     }
    cout<<ans<<endl;
    return 0;
}