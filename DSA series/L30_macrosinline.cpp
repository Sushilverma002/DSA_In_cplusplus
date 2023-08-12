// #include<iostream>
// using namespace std;
// #define PI 3.14
// int main(){
//     int r=10;
//     double area =2*PI*r*r;
//     cout<<area<<endl;
    
// }
// C++ program to illustrate macros
#include <iostream>
using namespace std;

// Multi-line Macro definition
//#define ELE 1, \
			2, \
			3

// Driver Code
// int main()
// {
	// Array arr[] with elements
	// defined in macros
	//int arr[] = { ELE };

	// Print elements
// 	cout<<"Elements of Array are:\n"<<endl;

// 	for (int i = 0; i < 3; i++) {
// 		cout << arr[i] << ' ';
// 	}

// 	return 0;
// }



//             INLINE FUNCTION- Inline function are those function which help in no extra memory uses and no function call overrid 	
//             1-compiler only makes inline function of line 1,2 and 3 for more then 3 lines compiler do not work
// inline int getmax(int &a ,int& b){
// 	return (a>b)? a : b;
// }
// int main(){
// 	int a=1, b=2;
// 	int ans=0;
// 	ans =getmax(a,b);
// 	cout<<ans<<endl;
// 	a=a+3;
// 	b=a*5;
// 	ans =getmax(a,b);
// 	cout<<ans<<endl;
// 	return 0;
// }


/*      DEFAULT ARGUMENT-: in default argument the starting condition is defalut if it mentioned just print from there else print whole one.              */
void print(int arr[],int n, int start=0){//default argument
	for(int i=start; i<n ; i++){
		cout<<arr[i]<<endl;
	}
}

int main(){
	int arr[5]={1,2,3,4,5};
	int size=5;
	print(arr,size) ;
	cout<<endl;
	print(arr,size,2) ;
	return 0;
}