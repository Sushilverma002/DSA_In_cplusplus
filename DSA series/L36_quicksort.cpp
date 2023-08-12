#include<iostream>
using namespace std;
int partiton(int arr[],int s, int e){

    int pivot=arr[s];
    int count=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            count++;
        }
    }
    //left vale part ko sambhal lete hai
    int pivotIndex=s+count;
    swap(arr[pivotIndex],arr[s]) ;
    
    //right vale part ko sambhalna hoga
    int p=s ,q=e;

    while(p<pivotIndex && q>pivotIndex){

        while(arr[p]<pivot)
        {
            p++;
        }

        while(arr[q]>pivot)
        {
            q--;
        }
        if(p<pivotIndex && q>pivotIndex){
            swap(arr[p++],arr[q--]);
        }
    }
    return pivotIndex;
}
void QUICKSORT(int arr[],int s, int e){
    //base case
    if(s>=e){
        return ;
    }
    //partition
    int par=partiton(arr,s,e);

    //recursive call
    QUICKSORT(arr,s,par-1);//LEFT PART
    QUICKSORT(arr,par+1,e);//RIGHT PART
}
int main(){
    int arr[8]={33,55,12,25,88,20,90,47};
    int n=8;
    QUICKSORT(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}