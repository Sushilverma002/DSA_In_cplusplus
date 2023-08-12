//                        DAY-1
/*Count Odd Numbers in an Interval Range
Given two non-negative integers low and high. Return the count of odd numbers between low and high (inclusive).*/
// #include<iostream>
// using namespace std;
//     int countOdds(int low, int high) {
//         int n=(high-low)/2;
//         if(high%2 !=0 || low %2 !=0){
//             n+=1;
//         }
//     return n;
//     }
// int main(){
//     int low=3;
//     int high=7;
//     int odds =countOdds(low,high);
//     cout<<"odd numbers is:-"<<odds<<endl;
//     return 0;
// }
//
//
/*Average Salary Excluding the Minimum and Maximum Salary
You are given an array of unique integers salary where salary[i] is the salary of the ith employee.

Return the average salary of employees excluding the minimum and maximum salary. Answers within 10-5 of the actual answer will be accepted.*/
// #include<iostream>
// using namespace std;
//     double average(int n,int salary[100]) {
//         int mini=INT_MAX;
//         int maxi=INT_MIN;
//         int sum=0;
//         for(int i=0; i<n ; i++){
//             sum+=salary[i];
//             maxi=max(maxi,salary[i]);
//             mini=min(mini,salary[i]);
//         }
//         double ans=sum-maxi-mini;
//         double average=ans/(n-2);
//         return average;
// }
// int main(){


    //                       DAY-2
// }
/*
count of total no of 1 bit ;-
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int mask=1;
        int bit=0;
        for(int i=0; i<32 ; i++){
            if(n&mask!=0)
                bit++;
            mask<<1;
        }
        return bit;
    }


    or
    class Solution {
    public:
        int hammingWeight(uint32_t n) {
            int bit=0;
            while(n!=0){
                n=n&(n-1);
                bit++;
            }
        return bit;
    }
};

or 
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int bit=0;
        for(int i=0; i<32; i++){
            if(n&1){
                bit++;
            }
            n=n>>1;
        }
        return bit;
    }
};
};*/
// #include<iostream>
// using namespace std;
// int function(int n){
//     int sum=0;
//     int product=1;
//     while(n!=0){
//         int digit=n%10;
//         product=product*digit;
//         cout<<"product is;"<<product<<endl;
//         sum=sum+digit;
//         cout<<"sum is:"<<sum<<endl;
//         n=n/10;
//     }
//     int answer= product-sum;
//     return answer;
// }
// int main(){
//     int n=234;
//     int ans=function(n);
//     cout<<"answer:"<<ans<<endl;
//     return 0;
// }


//                      DAY 3
// 976. Largest Perimeter Triangle
//Given an integer array nums, return the largest perimeter of a triangle with a non-zero area, formed from three of these lengths. If it is impossible to form any triangle of a non-zero area, return 0
// class Solution {
// public:
//     int largestPerimeter(vector<int>& nums) {
//         sort(begin(nums),end(nums));
//         for(int i=nums.size()-1 ;i>1;--i){
//             if(nums[i-2]+nums[i-1]>nums[i])
//             return nums[i-2]+nums[i-1]+nums[i];
//         }
//         return 0;
//     }
// };



/*1779. Find Nearest Point That Has the Same X or Y Coordinate
You are given two integers, x and y, which represent your current location on a Cartesian grid: (x, y). You are also given an array points where each points[i] = [ai, bi] represents that a point exists at (ai, bi). A point is valid if it shares the same x-coordinate or the same y-coordinate as your location.

Return the index (0-indexed) of the valid point with the smallest Manhattan distance from your current location. If there are multiple, return the valid point with the smallest index. If there are no valid points, return -1.

The Manhattan distance between two points (x1, y1) and (x2, y2) is abs(x1 - x2) + abs(y1 - y2).






class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int index=-1;
        int distance=INT_MAX;
        for(int i=0;i<points.size();i++){
            if(x==points[i][0]||y==points[i][1]){
                int current_dis=abs(x-points[i][0])+abs(y-points[i][1]);
                if(current_dis<distance){
                    distance=current_dis;
                    index=i;
                }
            }
        }
        return index;
    }
};*/
  

//            DAY 4
//1822-Sign of the Product of an Array
/*There is a function signFunc(x) that returns:

1 if x is positive.
-1 if x is negative.
0 if x is equal to 0.
You are given an integer array nums. Let product be the product of all values in the array nums.

Return signFunc(product).
class Solution {
public:
    int arraySign(vector<int>& nums) {
        double product=1;
        int n=nums.size();
        for(int i =0; i<n; i++){
            product=product*nums[i];
        }
        if(product>0)
        return 1;
        if(product<0)
        return -1;
        else{
            return 0;
        }
        return 0;
    }
}; 

//1502. Can Make Arithmetic Progression From Sequence
A sequence of numbers is called an arithmetic progression if the difference between any two consecutive elements is the same.
Given an array of numbers arr, return true if the array can be rearranged to form an arithmetic progression. Otherwise, return false.
class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int dis=arr[1]-arr[0];
        int n=arr.size();
        for(int i=2; i<n; ++i){
            if(arr[i]-arr[i-1] != dis)
            return false;
        }
        return true;
    }
};*/

// class Solution {
// public:
//     bool isHappy(int n) {
//         int x=n;
//         int sum=0;
//         while(x){
//             int h=x%10;
//             sum=sum+h*h;
//             x=x/10;
//         }
//          if(sum==1||sum==7)
//             return true;
//         else if(sum<10)
//             return false;
//         else
//             return is happy(sum);
//     }
// };



//              DAY-5
/*496. Next Greater Element I
Easy
5.2K
316
Companies
The next greater element of some element x in an array is the first greater element that is to the right of x in the same array.

You are given two distinct 0-indexed integer arrays nums1 and nums2, where nums1 is a subset of nums2.

For each 0 <= i < nums1.length, find the index j such that nums1[i] == nums2[j] and determine the next greater element of nums2[j] in nums2. If there is no next greater element, then the answer for this query is -1.

Return an array ans of length nums1.length such that ans[i] is the next greater element as described above.
 class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
       int n= nums1.size();
       int m= nums2.size();
       vector<int>ans;
       for(int i=0; i<n; i++){
           bool flag= false;
           for(int j=0; j<m; j++){
               if(nums1[i]==nums2[j]){
                   flag=true;
               }
               if(flag && nums1[i]<nums2[j]){
                   ans.push_back(nums2[j]);
                   flag=false;
                   break;
               }
           }
           if(flag){
               ans.push_back(-1);
           }
       }
       return ans;
    }
};
*/
#include<iostream>
using namespace std;
int main(){
    int a , b;
    cout<<"enter the value of a and b"<<endl;
    cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    //swap(a,b);
    cout<<"value of a and b:"<<a<<" "<<b<<endl;
    return 0;
}




//********************************DAY 8***************************
/*1768. Merge Strings Alternately
Easy
852
17
Companies
You are given two strings word1 and word2. Merge the strings by adding letters in alternating order, starting with word1. If a string is longer than the other, append the additional letters onto the end of the merged string.

Return the merged string*/
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int first=0;
        int second =0;
        int n=word1.size();
        int m=word2.size();
        string ans;
        while(first<n && second<m){
            if((first+second)%2==0){
                ans.push_back(word1[first++]);
            }
            else{
                ans.push_back(word2[second++]);
            }
        }
        if(first<n){
            ans=ans+word1.substr(first);
        }
        if(second<m){
            ans=ans+word2.substr(second);
        }
        return ans;
    }
};


/*1678. Goal Parser Interpretation
Easy
1.1K
77
Companies
You own a Goal Parser that can interpret a string command. The command consists of an alphabet of "G", "()" and/or "(al)" in some order. The Goal Parser will interpret "G" as the string "G", "()" as the string "o", and "(al)" as the string "al". The interpreted strings are then concatenated in the original order.

Given the string command, return the Goal Parser's interpretation of command*/
class Solution {
public:
    string interpret(string command) {
        int n =command.size();
        string ans;
        for(int i=0 ; i<n; ++i){
            char c=command[i];
            if(c=='G'){
                ans=ans+c;
            }
            else{
                if(command[i+1]==')'){
                    ans+='o';
                    i=i+1;
                }
                else{
                    ans+="al";
                    i=i+3;
                }
            }
        }
        return ans;
    }
};



// 222222222222222222222 PROGRAMING II 222222222222222222222
// QUESTION NO 1;896
// 896. Monotonic Array
// Easy
// 1.9K
// 60
// Companies
// An array is monotonic if it is either monotone increasing or monotone decreasing.

// An array nums is monotone increasing if for all i <= j, nums[i] <= nums[j]. An array nums is monotone decreasing if for all i <= j, nums[i] >= nums[j].

// Given an integer array nums, return true if the given array is monotonic, or false otherwise



class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n=nums.size()-1;
        bool increment=true;
        bool decrement=true;
        for(int i=0;i<n;i++){
            //increasing
            if(nums[i]>nums[i+1]){
                increment= false;
            }
            //decreasing
            else if(nums[i]<nums[i+1]){
                decrement= false;
            }
            if(increment==false && decrement==false){
                return false;
            }
        }
        return true;
    }
};


//QUESTION2/
/*28. Find the Index of the First Occurrence in a String
Medium
1.2K
91
Companies
Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.*/
class Solution {
public:
    int strStr(string haystack, string needle) {
     int n=haystack.length();
     int m=needle.length();
     for(int i=0; i<n; i++){
        for(int j=0; j<=m; j++){
            if(haystack.substr(i,j)==needle)
            return i;
            }
         }  
         return -1; 
    }
};


//***************DAY2**********
/*110. Balanced Binary Tree
Easy
8.1K
451
Companies
Given a binary tree, determine if it is 
height-balanced
.*/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isBalanced(TreeNode* root) {
        // If the tree is empty, we can say it’s balanced...
        if (root == NULL)  return true;
        // Height Function will return -1, when it’s an unbalanced tree...
		if (Height(root) == -1)  return false;
		return true;
	}
    // Create a function to return the “height” of a current subtree using recursion...
	int Height(TreeNode* root) {
        // Base case...
		if (root == NULL)  return 0;
        // Height of left subtree...
		int leftHeight = Height(root->left);
        // Height of height subtree...
		int rightHight = Height(root->right);
        // In case of left subtree or right subtree unbalanced or their heights differ by more than ‘1’, return -1...
		if (leftHeight == -1 || rightHight == -1 || abs(leftHeight - rightHight) > 1)  return -1;
        // Otherwise, return the height of this subtree as max(leftHeight, rightHight) + 1...
		return max(leftHeight, rightHight) + 1;
    }
};
//day 3
/*150. Evaluate Reverse Polish Notation
Medium
5.3K
834
Companies
You are given an array of strings tokens that represents an arithmetic expression in a Reverse Polish Notation.

Evaluate the expression. Return an integer that represents the value of the expression.

Note that:

The valid operators are '+', '-', '*', and '/'.
Each operand may be an integer or another expression.
The division between two integers always truncates toward zero.
There will not be any division by zero.
The input represents a valid arithmetic expression in a reverse polish notation.
The answer and all the intermediate calculations can be represented in a 32-bit integer.*/
class Solution {
public:

    long resolves(int a, int b, char Operator){
        if(Operator == '+') return a + b;
        else if(Operator == '-') return a - b;
        else if(Operator == '*') return (long)a*b;
        return a/b;
    }
public:
    int evalRPN(vector<string>& tokens) {
        stack<long> Stack;
        int n = tokens.size();
        for(int i = 0; i < n; i++){
            // check if element is an operator
            if(tokens[i].size() == 1 and tokens[i][0] < 48){
                long integer2 = Stack.top();
                Stack.pop();
                long integer1 = Stack.top();
                Stack.pop();
                
                string Operator = tokens[i];
                long resolvedAns = resolves(integer1, integer2 , Operator[0]);
                Stack.push(resolvedAns);
            }else 
                Stack.push(stol(tokens[i]));
        }
        return Stack.top();
    }
};
//**************************OR**************** POSTFIX TO INFIX
/*class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>s;
        for(string x:tokens){
            if(x=="+"){
                int a=s.top();//a
                s.pop();
                int b=s.top();//b
                s.pop();
                s.push(a+b);
            }
            else if(x=="*"){
                int a=s.top();//a
                s.pop();
                int b=s.top();//b
                //a*b
                s.pop();
                s.push(a*b);
            }
            else if(x=="-"){
                int a=s.top();//a
                s.pop();
                int b=s.top();//b
                //b-a
                s.pop();
                s.push(b-a);
            }
            else if(x=="/"){
                int a=s.top();//a
                s.pop();
                int b=s.top();//b
                //a/b
                s.pop();
                s.push(b/a);
            }
            else s.push(stoi(x));
        }
        return s.top();
    }
};*/

/*
66. Plus One
Easy
6.2K
4.7K
Companies
You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.

Increment the large integer by one and return the resulting array of digits.
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
       int n=digits.size();
       for(int i=n-1; i>=0; i--){
           if(digits[i]<9){
               digits[i]++;
               return digits;
           }
           else{
              digits[i]=0;
          }
       } 
       digits.push_back(0);
       digits[0]=1;
       return digits;
    }
};
*/
class Solution {
    
    bool dfs(ListNode * head, TreeNode * root)
    {
        if(head == NULL)
            return true;
        
        if(root == NULL || head->val != root->val)
            return false;
        
        return dfs(head->next , root->left) || dfs(head->next, root->right);
    }
    
    bool SolveByRecursion(ListNode * head, TreeNode * root)
    {
        if(head == NULL)
            return true;
        
        if(root == NULL)
            return false;
        
        if(dfs(head, root))
                return true;
        
        return SolveByRecursion(head, root->left) || SolveByRecursion(head, root->right);
    }
    
public:
    bool isSubPath(ListNode* head, TreeNode* root) {      
        return SolveByRecursion(head, root);
        
    }
};
bool isSubPath(ListNode* head, TreeNode* root) {
        return dfs(head,root);
    }
    
    bool dfs(ListNode* head, TreeNode* root){
        if(root==NULL)
            return false;
        if(match(head, root))
            return true;
        return dfs(head, root->left) || dfs(head,root->right);
    }
    
    bool match(ListNode* head, TreeNode* root){
        if(head== NULL)
            return true;
        if(root == NULL || head->val != root->val)
            return false;
        
        return match(head->next,root->left) || match(head->next,root->right);
    }
    class Solution {
public:
    string addBinary(string s1, string s2) {
        int n = s1.length();   
        int m = s2.length();
        
        int i= n-1;
        int j = m-1;
        int carry = 0;
        string  s = "";
        while(i>=0 || j>=0 || carry)
        {
            int a,b;
            if(i>=0)
            {
                a = s1[i]-'0';
                i--;
            }
            else{
                a = 0;
            }
            
            if(j>=0)
            {
                b = s2[j]-'0';
                j--;
            }
            else{
                b = 0;
            }
            
            int sum = a+b+carry;
            s += (sum%2)+'0';
            carry = (sum/2);
        }
        reverse(s.begin(), s.end());
        return s;
        
    }
}

class Solution {
 public:
  vector<int> addToArrayForm(vector<int>& num, int k) {
    for (int i = num.size() - 1; i >= 0; --i) {
      num[i] += k;
      k = num[i] / 10;
      num[i] %= 10;
    }

    while (k > 0) {
      num.insert(begin(num), k % 10);
      k /= 10;
    }

    return num;
  }
};

//1886-determine martix can be rotation 
//DAY 7
class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n = mat.size();
        if(mat == target) {     // rotation by 0 degree.
            return true;
        }
        
        int deg = 3;    // more rotations with 90, 180, 270 degree's.
        
        while(deg --) {
            for(int i = 0; i < n; i ++) {
                for(int j = i; j < n; j ++) {
                    swap(mat[i][j], mat[j][i]);     // transpose of matrix.
                }
            }
            for(int i = 0; i < n; i ++) {
                reverse(mat[i].begin(),mat[i].end());       // reverse each row.
            }
            if(mat == target) {
                return true;
            }
        }
        return false;
    }
};

DAY 15 QUESTION NO 2 LEETCODE
\\ Add Two Numbers
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy=new ListNode();
        ListNode* temp=dummy;
        int carry=0;
        while(l1!=NULL || l2!=NULL || carry){
            int sum=0;
            if(l1!=NULL){
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2!=NULL){
                sum+=l2->val;
                l2=l2->next;
            }
            sum+=carry;
            carry=sum/10;
            ListNode* newnode=new ListNode(sum%10);
            temp->next=newnode;
            temp=temp->next;
        }
        return dummy->next;
    }
};
//leetcode question daily challenge 22/05/2023
/*question is     

347. Top K Frequent Elements


Idea to approach for both the questions:

Create a map, with the value and occurrences as key, value pair
Somehow sort according to the descending order of their occurrences and also include these cases, if you wish to

Case1. if two elements have same occurrences print the elements lexicographically(if strings) or ascending order of the numbers(if integers)

Case 2: if the occurrences are distinct, print in descending order of the occurrences of the elements.
Return the first K elements.
*/

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        sort(nums.begin(),nums.end());
        map <int,int> m1;
        for(int i = 0; i < nums.size(); i++)
        {
            m1[nums[i]]++;
        }
        vector<int> counts = {};
        for(auto it = m1.begin(); it != m1.end(); it++)
        {
            counts.push_back(it->second);
        }
        sort(counts.begin(),counts.end());
        reverse(counts.begin(),counts.end());
        vector<int> ans = {};
        int a = 0;
        while(ans.size() != k)
        {
            for(auto it = m1.begin(); it != m1.end(); it++){
                if(it->second == counts[a] && a < k){
                    ans.push_back(it->first);
                    a++;
                }
            }
        }
        return ans;
    }
};