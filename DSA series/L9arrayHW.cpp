/* #include <iostream>
using namespace std;
SUM OF ARRAYS   
int sum(int arr[],int n){
    int sum=0;

    for (int i = 0; i < n; i++)
    {

        sum+=arr[i];
        // return sum;
    }
    return sum;
}
int main(){
    
    int size;
    cin>>size;

    int arr[100];
    //taking input in array
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    

    cout<<"Sum of given array is "<<sum(arr,size);

} */ 

/*
//LINEAR SEARCH
#include<iostream>
using namespace std;

bool search(int arr[], int size, int key) {

    for( int i = 0; i<size; i++ ) {

        if( arr[i] == key) {
            return 1;
        }

    }
    return 0;
}


int main() {

    int arr[10] = { 5, 7, -2, 10, 22, -2, 0, 5, 22, 1};

    cout <<" Enter the element to search for " << endl; 
    int key;
    cin >> key;

    bool found = search(arr, 10, key);

    if( found ) {
        cout <<" Key is present "<< endl;
    }
    else{
        cout <<" Key is absent " << endl;
    }


    return 0;
}
*/

//REVERSE ARRAY
#include<iostream>
using namespace std;

void reverse(int arr[], int n) {

    int start = 0;
    int end = n-1;

    while(start<=end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int n) {
    
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {

    int arr[6] = {1,4,0,5,-2,15};
    int brr[5] = {2,6,3,9,4};

    reverse(arr, 6);
    reverse(brr, 5);

    printArray(arr, 6);
    printArray(brr, 5);


    return 0;
}
