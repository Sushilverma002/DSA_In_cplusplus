//PROGRAM FOR CHECKING ARRAY IF SORTED OR NOT 
/*
#include<iostream>
using namespace std;
bool issorted(int ss[],int size){
    //BASE CASE
    if(size==0||size==1){
        return true;
    }
    if(ss[0]>ss[1]){
        return false;
    }
    else{
        bool remaingpart=issorted(ss+1,size-1);
        return remaingpart;
    }
}
int main(){
    int ss[5]={2,4,6,8,10};
    int size=5;
    bool ans=issorted(ss,size);
    if(ans){
        cout<<"is sorted"<<endl;
    }
    else{
        cout<<"not sorted"<<endl;
    }
    return 0;
}

#include<iostream>
using namespace std;
int sumarray(int arr[], int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    return sum;
}
int main(){
    int size;
    cout<<"entre the size of array"<<endl;
    cin>>size;
    int arr[100];
    for(int i=0; i<size;i++){
        cin>>arr[i];
    }
    int sum=sumarray(arr,size);
    cout<<"sum of array"<<sum<<endl;
    return 0;
}
*/
//SUM USING RECRUSION
/*
#include<iostream>
using namespace std;
int sumarray(int *arr,int size){
    //BASE CASE
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }
    int remaingpart=sumarray(arr+1,size-1);
    int sum=arr[0]+remaingpart;
    return sum;
}
int main(){
    int size;
    cout<<"entre the size of array"<<endl;
    cin>>size;

    int arr[100];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int sum=sumarray(arr,size);
    cout<<"sum is "<<sum<<endl;
    return 0;
}
*/




//LINEAR SEARCH USING LOOP
/*
#include<iostream>
using namespace std;
bool ifyoufoundsearch(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}
int main(){
    int arr[5]={2,5,8,7,4};
    cout<<"entre the key:";
    int key;
    cin>>key;
    int found=ifyoufoundsearch(arr,5,key);
    if(found){
        cout<<"key is present "<<endl;
    }
    else{
        cout<<"key is not present"<<endl;
    }
    return 0;
}
//LINEAR SEARCH USING RECUSRION

#include<iostream>
using namespace std;
bool linearSearch(int susi[],int size,int key){
    //BASE CASE
    if(susi[0]==key){
        return true;
    }
    else{
        bool remaining =linearSearch(susi+1,size-1,key);
        return remaining;
    }
}
int main(){
    int susi[5]={2,4,8,6,10};
    int key=2;
    int size=5;
    int found=linearSearch(susi,size,key);
    if(found){
        cout<<"key is present "<<endl;
    }
    else{
        cout<<"Key is not present"<<endl;
    }
    return 0;
}
 

BINARY SEARCH IN LOOP VS RECURSION

*************USING LOOPS****
#include<iostream>
using namespace std;
int binarySearch(int arr[],int size, int key){
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return -1;
}
int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    int size=8;
    cout<<"entre the key"<<endl;
    int key;
    cin>>key;
    int found=binarySearch(arr,size,key);
    cout<<"index will be:"<<found<<endl;
    return 0;
}


*************USING RECURSION**********
*/
#include<iostream>
using namespace std;
bool binarySearchbyrecursion(int arr[], int start,int end , int key){
    //Base case 1 element not found!
    if(start>end){
        return false;
    }
    //Base case2 element found!!
    int mid=start+(end-start)/2;
    if(arr[mid]==key){
        return true;
    }
    else if(arr[mid]<key){
        return binarySearchbyrecursion(arr,mid+1,end,key);
    }
    else{
        return binarySearchbyrecursion(arr,start,mid-1,key);
    }
}
int main(){
    int arr[6]={2,4,6,8,10,12};
    int size=6;
    int key;
    cout<<"entre the key you want to search"<<endl;
    cin>>key;
    cout<<"present or not:"<<binarySearchbyrecursion(arr,0,6,key)<<endl;
    return 0;
}