//first and last occurence of element in a sorted array

#include<iostream>
using namespace std;

int firstOccurence(int arr[],int size,int key){
    int start=0;
    int end=size-1;

    int mid=start+(end-start)/2;
    int ans=-1;

    while (start<=end)
    {
        if (arr[mid]==key)
        {
            ans=mid;
            end=mid-1;
        }
        else if (key<=arr[mid])
        {
            end=mid-1;
        }
        else if(key>=arr[mid]){
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int lastOccurence(int arr[],int size,int key){
    int start=0;
    int end=size-1;

    int mid=start+(end-start)/2;
    int ans=-1;

    while (start<=end)
    {
        if (arr[mid]==key)
        {
            ans=mid;
            start=mid+1;
        }
        else if (key<=arr[mid])
        {
            end=mid-1;
        }
        else if(key>=arr[mid]){
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}

int main(){
    int even[6]={1,2,3,3,5};
     cout<<"First occurence of 3 is at index "<< firstOccurence(even,6,3)<<endl;
     cout<<"Last occurence of 3 is at index "<< lastOccurence(even,6,3)<<endl;
     return 0;

}