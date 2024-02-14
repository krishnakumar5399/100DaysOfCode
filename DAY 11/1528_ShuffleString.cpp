
/*1528. Shuffle String

You are given a string s and an integer array indices of the same length. The string s will be shuffled such that the character at the ith position moves to indices[i] in the shuffled string.

Return the shuffled string.

 

Example 1:


Input: s = "codeleet", indices = [4,5,6,7,0,2,1,3]
Output: "leetcode"
Explanation: As shown, "codeleet" becomes "leetcode" after shuffling.
Example 2:

Input: s = "abc", indices = [0,1,2]
Output: "abc"
Explanation: After shuffling, each character remains in its position.
*/





#include<bits/stdc++.h>
using namespace std;
    int returnIndex(vector<int> &arr,int target){
        for(int i=0;i<arr.size();i++){
            if(arr[i]==target) return i;
        }
        return -1 ;
        
    }
    string restoreString(string s, vector<int>& indices) {
        string ans ;
        for(int i =0;i<indices.size();i++){
            int indx = returnIndex(indices,i);
              ans.push_back(s[indx]);
        }
        return ans;
        
    }
int main() 
{
    string s = "codeleet" ;
    vector<int>v ={4,5,6,7,0,2,1,3} ;
    cout<<restoreString(s,v)<<endl;        // leetcode
     
     
  return 0;
}