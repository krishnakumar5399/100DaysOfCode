/*3046. Split the Array

You are given an integer array nums of even length. You have to split the array into two parts nums1 and nums2 such that:

nums1.length == nums2.length == nums.length / 2.
nums1 should contain distinct elements.
nums2 should also contain distinct elements.
Return true if it is possible to split the array, and false otherwise.

 

Example 1:

Input: nums = [1,1,2,2,3,4]
Output: true
Explanation: One of the possible ways to split nums is nums1 = [1,2,3] and nums2 = [1,2,4].
*/

#include<bits/stdc++.h>
#include<vector>
using namespace std;
 bool isPossibleToSplit(vector<int> &nums) {
        if(nums.size()%2 !=0) return false;
        sort(nums.begin(),nums.end());
        int count = 1 ;
        for(int i = 0 ;i<nums.size()-1;i++){
            if(nums[i] == nums[i+1]){
                count++;
                if(count>2) return false;
            }
            
            else if(count>2){
                return false;
            }
            else{
                count = 1;
            }
            
        }
        return true;
        
    }
int main() 
{
    vector<int>nums = {1,1,2,2,3,4} ;
    cout<<"possible or not : "<<isPossibleToSplit(nums)<<endl ;   // 1
 
     
     
  return 0;
}