/*
REVERSE OF STRING USING LOOP
#include<iostream>
using namespace std;
void reversestring(char string1[],int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        swap(string1[start++],string1[end--]);
    }
}
int printstring(char string1[],int n){
    for(int i=0;i<n;i++){
        cout<<string1[i]<<" ";
    }cout<<endl;
}
int main(){
    char string1[20];
    cout<<"entre the string"<<endl;
    cin>>string1;
    cout<<"revrese of string is ";
    reversestring(string1,20);
    printstring(string1,20);
    return 0;
}


******************REVERSE OF STRING USING RECURSION*********

#include<iostream>
using namespace std;
void reversestring(string& str,int start,int end){
    //BASE CASE
    cout<<"calling process:"<<str<<endl;
    if(start>end){
        return ;
    }
    else{
        swap(str[start],str[end]);
        start++;
        end--;
    }
    reversestring(str,start,end);
}
int main(){
    string REV="kainshka";
    reversestring(REV,0,REV.length()-1);
    cout<<"reverse string is "<<REV<<endl;
    return 0;
}

CHECK PALINDROME
by using loop
#include<iostream>
using namespace std;
bool checkpalindrome(char name[],int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        if(name[s]!=name[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}
int main(){
    char name[5];
    cin>>name;
    cout<<"is it palindrome:"<<checkpalindrome(name,5);
    return 0;
}

************CHECK PALINDROME USING RECURSION*********** 
#include<iostream>
using namespace std;
bool palindrome(string str,int start ,int end){
    //base case
        if(start>end){
            return true;
        }
        if(str[start]!=str[end]){
            return false;
        }
        else{
            //recursion call
            return palindrome(str,start+1,end-1);
        }
    }
int main()
{
    string str="nitin";
    bool ans=palindrome(str,0,str.length()-1);
    if(palindrome){
        cout<<"it is palindrome"<<endl;
    }else{
        cout<<"not a palindorme"<<endl;
    }
    return 0;
}

*********** HOME WORK =USING ONLY ONE VAIRABLE S TO CHECK PALINDORME
#include <iostream>
using namespace std;

bool isPalindrome(string s, int i){
		
	if(i > s.size()/2){
	return true ;
	}
	
	return s[i] == s[s.size()-i-1] && isPalindrome(s, i+1) ;
	
}
	
	
int main()
{
	string str = "nitin" ;
	if (isPalindrome(str, 0))
	cout << "Yes";
	else
	cout << "No";

	return 0;


}

***************CALCULATING POWER USING RECURSION **********
THIER ARE TWO CASES ODD AND EVEN :- EVEN - a(pow)1/2 *a(pow)1/2;
                                    ODD- a*(a(pow)1/2*a(pow)1/2);

#include<iostream>
using namespace std;
int power(int a,int b){
    
    //base case
    if(b==0){
        return 1;
    }
    else if(b==1){
        return a;
    }

    //RECURSIVE CALL
    int ans=power(a,b/2);
    //if b id even
    if(b%2==0){
        return ans*ans;
    }
    else{
        return a*ans*ans;
    }
}
int main(){
    int a, b;
    cout<<"entre the value of a and b:";
    cin>>a>>b;
    cout<<power(a,b);
    return 0;
}

********BUBBLE SORT********
USING RECURSION

#include<iostream>
using namespace std;
void bubblesort(int arr[],int n){
    //base case
    if(n==0 || n==1){
        return ;
    }

    //ia case solve kar lia mtlb largest ko end mai pocha dia
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    //recursive call
    bubblesort(arr,n-1);
}
int main(){
    int arr[5]={2,6,5,18,7};
    bubblesort(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

**********SELECTION SORT*********
USING LOOP

#include<iostream>
using namespace std;
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "; 
    }cout<<endl;
}
void selectionsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minindex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minindex]){
                minindex=j;
            }
            swap(arr[minindex],arr[i]);
        }
    }
}
int main(){
    int arr[]={2,6,5,18,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    selectionsort(arr,n);
    cout<<"the sorted array is "<<endl;
    printarray(arr,n);
    return 0;
}

USING RECURSION
*/
/*
// Recursive C++ program to sort an array
// using selection sort
#include <iostream>
using namespace std;

// Return minimum index
int minIndex(int a[], int i, int j)
{
	if (i == j)
		return i;

	// Find minimum of remaining elements
	int k = minIndex(a, i + 1, j);

	// Return minimum of current and remaining.
	return (a[i] < a[k])? i : k;
}

// Recursive selection sort. n is size of a[] and index
// is index of starting element.
void recurSelectionSort(int a[], int n, int index = 0)
{
	// Return when starting and size are same
	if (index == n)
	return;

	// calling minimum index function for minimum index
	int k = minIndex(a, index, n-1);

	// Swapping when index and minimum index are not same
	if (k != index)
	swap(a[k], a[index]);

	// Recursively calling selection sort function
	recurSelectionSort(a, n, index + 1);
}

// Driver code
int main()
{
	int arr[] = {3, 1, 5, 2, 7, 0};
	int n = sizeof(arr)/sizeof(arr[0]);

	// Calling function
	recurSelectionSort(arr, n);

	//printing sorted array
	for (int i = 0; i<n ; i++)
		cout << arr[i] << " ";
	cout << endl;
	return 0;
}
*/
