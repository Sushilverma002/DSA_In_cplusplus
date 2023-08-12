#include<iostream>
using namespace std;
/*
// We can initialize the array with any value by using the fill_n command 
int main() {
    int array[100];

    //To initialize the array with value'1'.
    fill_n(array, 100, 1);

    //To check the array input (kewaal 5 hi kari h print)
    for(int i = 0; i <= 5; i++){
        cout << array[i] << endl;
    }

}   */

void printArray(int arr[],int size){
    cout<<"printing an array"<<endl;
    //print the array
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"printing DONE"<<endl;
    
}

int main(){
//declare
int number[15];

//accesssing an array
cout<<"value at 14 index "<<number[14]<<endl;

//cout<<"Value at 20 index "<<number[20]<<endl;

//Initializing an array
int second[3]={ 5,2,7};
//accessing an element
cout<<"Value at 2 index "<<second[2]<<endl;

int third[15]={2,17};

int n=15;
printArray(third,15);

//intialix=zing all locations with 0
int fourth[10]={0};
n=10;
printArray(fourth,10);

//initalizing all locations with 1(not possible with below line)
int five[10]={1};
n=10;
printArray(five,10);
// can be done by using fill_n() btw code 4 to 13
return 0;
}