#include <iostream>
using namespace std;
//switch case
/* int main(){
   int num=1;
   char ch='1';

   switch (num)
   {
   case 1:
    cout<<"First number"<<endl;
    break;
   
   default:cout<<"it is a default case"<<endl;
    break;
   }
}   */


//mini calculator program
 /* int main(){
    int a, b;
    cout<<"Enter the value of a : "<<endl;
    cin>>a;
    cout<<"Enter the value of b : "<<endl;
    cin>>b;
  
    char op;
    cout<<"Enter the operator which you want to perform: "<<endl;
    cin>>op;

    switch(op){
        case '+' :cout<<a+b;
                 break;
        case '-' :cout<<a-b;         
                 break; 
        case '*' :cout<<a*b;        
                 break;
        case '/' :cout<<a/b;        
                 break;
        case '%' :cout<<a%b;        
                 break;
        default: cout<<"Enter the valid operator"<<endl;         
        break;
    } 

} */

/* int main(){
    int money = 1330;
    int rs100,rs50,rs30,rs1;    

    switch (100)
    {
    case 100:  //1330/100=13 i.e 1300 money = 13 notes of 100
        cout<<"NO. of 100 notes in given money is: "<<money/100<<endl;
        
    case 50:  //1330-1300=30 i.e no note of 50
        cout<<"NO. of 50 notes in given money is: "<<30/50<<endl;
        
    case 20: //1330-1300=30
        cout<<"NO. of 20 notes in given money is: "<<30/20<<endl;
        
    case 1 : //1330-1320=10
        cout<<"NO. of 1 notes in given money is: "<<10/1<<endl;
            
    default:cout<<"NO availability of notes of 100,50,30,1 in the given amount"<<endl;
        break;
    }
} */


int main()
{
  int amount;
  cout<<"Enter the amount"<<endl;
  cin>>amount;
  int Rs100 , Rs50 , Rs20 , Rs1;

  switch(1)
  {
      case 1: Rs100=amount/100;
              amount=amount%100;
              cout<<"No of 100 Rupee notes required are="<<Rs100<<endl;
              
         
      case 2: Rs50=amount/50;
              amount=amount%50;
              cout<<"No of 50 Rupee notes required are="<<Rs50<<endl;
              

      case 3: Rs20=amount/20;
              amount=amount%20;
              cout<<"No of 20 Rupee notes required are="<<Rs20<<endl;
               

      case 4: Rs1=amount/1;
              amount=amount%1;
              cout<<"No of 1 Rupee notes required are="<<Rs1<<endl; 
                  
           }
           return 0;
}
