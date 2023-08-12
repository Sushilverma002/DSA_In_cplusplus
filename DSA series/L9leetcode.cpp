#include<iostream>
using namespace std;
/*
void printArray(int arr[],int size){
    for (int  i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    
}

int swapAlternate(int arr[],int size){
    for (int i = 0; i < size; i+=2)
    {
        if (i+1<size)
        {
            swap(arr[i],arr[i+1]);
        }
        
    }
    
}
int main(){
    int even[6]={2,7,11,3,0,9};
    int odd[5]={33,11,2,4,91};
    
    
    swapAlternate(even,6);
    printArray(even,6);

    cout<<endl;
    swapAlternate(odd,5);
    printArray(odd,5);
    
    return 0;
} */

//SORT 0 1
void printArray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    
}

void sortOne(int arr[],int n){
    int i=0,j=n-1;

    while(i<j){
        if(arr[i]==0){
            i++;
        }
        if(arr[j]==1){
            j--;
        }
        //agar yaha poch gye toh iska mtlb 
        //arr[i]==1 && arr[j]==0
        if(left<right){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
}
    int main(){
        int arr[8]={1,1,0,1,0,0,1,0};

        sortOne(arr,8);
        printArray(arr,8);
return 0;  
    }

    /* 
//SORT 012
#include<iostream>
using namespace std;

void printArray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    
}    
void sortOne(int arr[], int n)
{
   //   Write your code here
    int i = 0;
    int mid = 0;
    int k = n - 1;
    
    while ( mid <= k ) {
        if(arr[mid] == 0) {
            swap(arr[i], arr[mid]);
            i++;
            mid++;
        }
       else if(arr[mid] == 1) {
            mid++;
        }
        else if(arr[mid] == 2) {
            swap(arr[mid], arr[k]);
            k--;
        }
    }
}
    int main(){
        int arr[8]={1,1,2,1,0,0,1,2};

        sortOne(arr,8);
        printArray(arr,8);

    } 
    ************MAXIMUM********/
  
int getMin(int num[], int n) {

    int mini = INT_MAX;
    
    for(int i = 0; i<n; i++) {
        
        mini = min( mini, num[i]);
        
        //if(num[i] < min){
        //    min = num[i];
        //}
    }

    //returning min value
    return mini;
}

int getMax(int num[], int n) {

    int maxi = INT_MIN;
    
    for(int i = 0; i<n; i++) {

        maxi = max(maxi, num[i]);

       // if(num[i] > max){
         //   max = num[i];
       // }
    }

    //returning max value
    return maxi;
}

int main() {

    int size;
    cin >> size;

    int num[100];

    //taking input in array
    for(int i = 0; i<size; i++) {
        cin >> num[i];
    }

    cout << " Maximum value is " << getMax(num, size) << endl;
    cout << " Minimum value is " << getMin(num, size) << endl;


    return 0;
}