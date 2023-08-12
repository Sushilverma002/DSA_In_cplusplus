/*

#include<iostream>
using namespace std;

bool isPresent(int arr[][4], int target,int i ,int j){
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            if(arr[i][j]==target){
                return 1;
            }
        }
    }
    return 0;    
}

int main(){

//create 2d array
int arr[3][4];
//int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
//int arr[3][4] = {{1,11,111,1111}, {2,22,222,2222},{3,33,333,3333}};


//taking the input  -> row wise input
//for(int i=0;i<3;i++){
//   for(int j=0;j<4;j++){
//        cin>>arr[i][j];
//    }
//}  


//taking the input  -> column wise input
for(int j=0;j<4;j++){
    for(int i=0;i<3;i++){
        cin>>arr[i][j];
    }
}  

//print the array
for (int i = 0; i < 3; i++){
    for (int j = 0; j < 4; j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

cout<<"Enter the element to search"<<endl;
int target;
cin>>target;

if(isPresent(arr,target,3,4)){
    cout<<"Element found"<<endl;
}
else{
    cout<<"Not found";
}

 return 0;
}  */

#include<iostream> 
using namespace std; 

//to print col wise sum
 void printColSum(int arr[][3], int row, int col) {
    cout << "Printing Sum -> " << endl;
    for(int col=0; col<3; col++) {
        int sum = 0;
        for(int row=0; row<3; row++) {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }

    cout << endl;
} 


//to print row wise sum
/*void printSum(int arr[][3], int row, int col) {
    cout << "Printing Sum -> " << endl;
    for(int row=0; row<3; row++) {
        int sum = 0;
        for(int col=0; col<3; col++) {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }

    cout << endl;
} */

/*int largestRowSum(int arr[][3], int row, int col) {

    int maxi = INT_MIN;
    int rowIndex = -1;

    for(int row=0; row<3; row++) {
        int sum = 0;
        for(int col=0; col<3; col++) {
            sum += arr[row][col];
        }

        if(sum > maxi ) {
            maxi = sum;
            rowIndex = row;
        }
       
    }

    cout << "the maximum sum is " << maxi << endl;
    return rowIndex;
}
*/
int main() {

    //create 2 d array
    int arr[3][3];

    cout << "Enter the elements " <<  endl;
    //taking input -> row wise input
   /* for(int row=0; row<3; row++) {
        for(int col=0; col<3; col++) {
            cin >> arr[row][col];
        }
    } */



//taking input -> col wise input
    for(int col=0; col<3; col++) {
        for(int row=0; row<3; row++) {
            cin >> arr[row][col];
        }
    }


    cout << "Printing the array " << endl;
    //print 
    for(int row=0; row<3; row++) {
        for(int col=0; col<3; col++) {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    printColSum(arr, 3, 3 );
    
   /*
   int ansIndex = largestRowSum(arr,3,3);
   cout << " Max row is at index " << ansIndex << endl; */

    return 0;
}

