#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n is : " << endl;
    cin >> n;
    // patterns

    /* //1
         2 1
         3 2 1 //

         int i=1;
    while (i<=n)
    {   int j=1;
        while (j<=i)
        {
            cout<<i-j+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    } */

    /* // A B C
          A B C
          A B C  //

        int i=1;
        while (i<=n)
        {
            int j=1;
            while (j<=n)
            {
                char ch='A'+i-1;
                cout<<ch<<" ";
                j=j+1;
            }
            cout<<endl;
            i=i+1;
        }
        */

    /* // A B C
          A B C
          A B C //

    int i=1;
    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {   char ch='A'+j-1;
            cout<<ch<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    } */

    /* //A B C
         D E F
         G H I //
     char value ='A';
     int i=1;
     while (i<=n)
     {
         int j=1;
         while (j<=n)
         {
             cout<<value;
             value=value+1;
             j=j+1;
         }
         cout<<endl;
         i=i+1;
     } */

    /*// A B C
         B C D
         C D E //
    int i=1;
    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
            char ch='A'+i+j-2;
            cout<<ch<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    } */

    /* // A
          B B
          C C C //

            int i=1;
            while (i<=n)
            {
                int j=1;
                while (j<=i)
                {
                   char ch= 'A'+i-1;
                   cout<<ch<<" ";
                   j=j+1;
                }
                cout<<endl;
                i=i+1;
            }
          */
    /* //A
         B C
         D E F
         G H I J //
    int i=1;
    char value='A';
    while (i<=n)
    {
        int j=1;
        while (j<=i)
        {
           cout<<value<<" ";
           value=value+1;
           j=j+1;
        }
        cout<<endl;
        i=i+1;
    } */
    /* //A
         B C
         C D E
         D E F G //

        int i = 1;
        while (i <= n)
        {
            int j = 1;
            while (j <= i)
            {
                char ch = 'A' + i + j - 2;
                cout << ch << " ";
                j = j + 1;
            }
            cout << endl;
            i = i + 1;
        } */

    /* //D
         C D
         B C D
         A B C D//

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        char ch = 'A' + n - i;
        while (j <= i)
        {
            cout << ch << " ";
            ch = ch+1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    } */
    /*// A B C
         B C D
         C D E // 

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            char ch = 'A' + i + j - 2;
            cout << ch << " ";
            ch = ch + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    } */
/* //   *
       ** 
      ***  
     **** //

    int i=1;
    while (i<=n)

    {   //space print ke lie

        int space = n-i;
        while (space)
        {
            cout<<" ";
            space= space-1;
        }
        //star print ke liye

        int j=1;
        while (j<=i)
        {
            cout<<"*";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
} */

int i=1;
while (i<=n)
{

    int star = n-i+1;
     while (star){
         cout<<"*";
        star= star-1;
    }
    cout<<endl;
    i=i+1;
}
return 0;
}