#include<iostream>
using namespace std;
//call by value and  call by refrence
void update(int n){
    n=n+1;

}
void update2(int&n){// pass by refernce-a reference variable provide alternative name to previously defined variable;
    n=n+1;

}

//RETURN BY REFRENCE
int& func(int x){
    int num=x;
    int& ans=num;
    return ans;
}


//it bad practise to do RETURN BY REFRENCE SAME IN pointer
int* func1(int x){
    int * ptr=&x;
    return ptr;
}

int function(int *arr , int m){
    int sum=0;
    for(int i=0; i<m; i++){
        sum+=arr[i];
    }
     return sum;

}
int main(){
    /*
    int i=7;
    int &j=i;//refrence variable of i
    cout<<"the vale of j is "<<j<<endl;
    i++;
    cout<<"the incremented value is "<<++j<<endl;
    j++;
    cout<<"the incremented value is "<<i<<endl;
    */
   int n=5;
   int x=7;
   cout<<"the value of n before increment"<<n<<endl;
   update2(n);
   cout<<"the value of n after increment"<<n<<endl;
   func1(x);
   cout<<"the vale of ans is"<<x<<endl;

   //DYNAMIC MERORY ALLOCTION BY new KEYWORD
   char ch='a';
   char *ch1=&ch;
   cout<<sizeof(ch)<<endl;
   cout<<sizeof(ch1)<<endl;

    int m;
    cin>>m;
    //variable size array
    int *arr=new int[m];
    //inputs
    for(int i=0;i<m; i++){
        cin>>arr[m];
    }
    int ans=function(arr,m);
    cout<<ans<<endl;
    

    /* FOR DEALLOCATION ARE HEAP MEMORY WE USE delete KEY WORD BECOZ
    HEAP MEMORY NEVER CLEAN BY IT SELF LIKE STATIC SO WE USE delete FOR DEALLOCATION.
    delete i; for static
    delete []arr; for arrary
    */
    return 0;
}