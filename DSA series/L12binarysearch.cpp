#include<iostream>
using namespace std;

int binarySearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;

    int mid=start+(end-start)/2;

    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        //go to right wala part
        if(arr[mid]<=key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}
int main(){

    int even[6]={2,8,13,16,22,24};
    int odd[5]={1,3,15,18,22};

    int evenIndex=binarySearch(even,6,32);
    cout<<"Index of 32 is "<<evenIndex<<endl;

     int oddIndex=binarySearch(odd,5,22);
    cout<<"Index of 22 is "<<oddIndex<<endl;

    return 0;
}