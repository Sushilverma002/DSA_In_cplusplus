#include<iostream>
using namespace std;
void merge(int arr[],int s,int e){

    int mid=s+(e-s)/2;
    int len1=mid-s+1;
    int len2=e-mid;

    //arrays in pointer
    int *first=new int[len1];
    int *second=new int[len2];

    //copy value
    int mainarrayindex=s;
    for(int i=0;i<len1;i++){
        first[i]=arr[mainarrayindex++];
    }
    mainarrayindex=mid+1;
    for(int i=0;i<len2;i++){
        second[i]=arr[mainarrayindex++];
    }

    //merging the both arrays 

    int index1=0;
    int index2=0;
    mainarrayindex=s;
    while(index1<len1 && index2<len2){
        if(first[index1]<second[index2]){
            arr[mainarrayindex++]=first[index1++];
        }
        else{
            arr[mainarrayindex++]=second[index2++];
        }
    }
    while(index1<len1){
        arr[mainarrayindex++]=first[index1++];
    }
    while(index2<len2){
        arr[mainarrayindex++]=second[index2++];
    }
    delete[] first;
    delete[] second;
}
void mergesort(int arr[],int s,int e){
    //base case
    if(s>=e){
        return ;
    }
    //mid
   int mid=s+(e-s)/2;
    //left side
    mergesort(arr,s,mid);
    //right side
    mergesort(arr,mid+1,e);
    //overall
    merge(arr,s,e);
}
int main(){
    int arr[26]={5888,55,14,26,74,915,2,6,14,20,18,17,11,12,14,4,50,400,16,7,00,11,22,55,66,588};
    int n=26;
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}