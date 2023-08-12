#include <iostream>
using namespace std;
char tolowerCase(char ch){
    if(ch>='a' && ch<='z')
    return ch;
    else
    {
        char temp=ch-'A'+'a';
        return temp;
    }
}
bool checkPalindrome(char a[],int n){
    int s=0;
    int e=n-1;
    while (s<=e)
    {
        if (tolowerCase (a[s])!=tolowerCase (a[e]))
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}
void reverseString(char name[],int n){
    int s=0;
    int e=n-1;

    while(s<e){
        swap(name[s++],name[e--]);
    }
}

//length of the string 
int getLength(char name[]){
    int count=0;

    for (int i = 0; name[i]!='\0'; i++)
    {
        count++;
    }
    return count;
}
int main(){
    char name[20];

    cout<<"Enter the name"<<endl;
    cin>>name;

    //name[2]='\0';
    int len=getLength(name); 


    cout<<"your name is "<<name<<endl;

    cout<<"length of the string is: "<< len <<endl;

    cout<<"palindrome or not : "<<checkPalindrome(name,len)<<endl;

    reverseString(name,len);
    cout<<"your name is : "<<name<<endl;

    

}