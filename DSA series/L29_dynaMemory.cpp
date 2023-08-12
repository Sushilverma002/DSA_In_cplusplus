//2D array in dyamic memory 
#include<iostream>
using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     //creation of 2D array
//     int** ptr=new int*[n];
//     for(int i=0; i<n; i++){
//         ptr[i]=new int[n];
//     }
//     //input
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//         cin>>ptr[i][j];
//         } 
//     }
//     //output
//     cout<<endl;
//      for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//         cout<<ptr[i][j]<<" ";
//         }cout<<endl;
//     }
//     return 0;

// }


//2D array in dynamic memory using differnt row and column
int main(){
    int row;
    cin>>row;

    int col;
    cin>>col;
    //creation of arr

    int** sus=new int *[row];//for row
    for(int i=0; i<row ; i++){
        sus[i]=new int[col];//coloumn
    }
    //input
    for(int i=0;i<row;i++){
        for(int j=0; j<col; j++){
            cin>>sus[i][j];
        }
    }
     //output
     cout<<endl;
    for(int i=0; i<row;i++){
        for(int j=0; j<col; j++){
            cout<<sus[i][j]<<" ";
        }cout<<endl;
    }
    
    //free the memory using delete key word
    for(int i=0;i<row;i++){
        delete [] sus[i];
    }
    delete []sus;
    return 0;
}