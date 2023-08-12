#include <iostream>
using namespace std;

/*int main(){
    int n;
    cin>>n;

    int i=1;
    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
            cout<<"*";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    
}  */
/* int main(){
    int n;
    cin>>n;

    int i=1;
    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
            cout<<i;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    
}*/
/* q1 1 2 3
      1 2 3
      1 2 3 */
int main(){
    int n;
    cin>>n;

    int i=1;
    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
            cout<<j<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    
}
/* for pattern 3 2 1
               3 2 1
               3 2 1 */
int main(){
    int n;
    cin>>n;

    int i=1;
    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
            cout<<n-j+1<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    
}