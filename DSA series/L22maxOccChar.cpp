#include<iostream>
#include<string.h>
using namespace std;

char getMaxOccCharacter(string s){
    int arr[26] = {0};
    //create an array of count of character
    for (int i = 0; i < s.length(); i++)
    {
        char ch=s[i];
        //lower case
        int number = 0;
        number = ch-'a';
        arr[number]++;
    }
    //find maximum occ character
    int maxi=-1,ans=0;
    for (int i = 0; i < 26; i++)
    {
        if (maxi<arr[i])
        {
            ans=i;
            maxi=arr[i];
        }
    }
    return 'a'+ans;
}
int main()
{
    // string s;
    // cin>>s;
    // cout<<getMaxOccCharacter(s)<<endl;
    char name[20];
    
    cin.getline(name,20);
    cout<<name;

    return 0;
}
