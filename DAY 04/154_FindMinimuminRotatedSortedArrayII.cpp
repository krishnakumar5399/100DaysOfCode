/*154. Find Minimum in Rotated Sorted Array II

Suppose an array of length n sorted in ascending order is rotated between 1 and n times. For example, the array nums = [0,1,4,4,5,6,7] might become:

[4,5,6,7,0,1,4] if it was rotated 4 times.
[0,1,4,4,5,6,7] if it was rotated 7 times.
Notice that rotating an array [a[0], a[1], a[2], ..., a[n-1]] 1 time results in the array [a[n-1], a[0], a[1], a[2], ..., a[n-2]].

Given the sorted rotated array nums that may contain duplicates, return the minimum element of this array.

You must decrease the overall operation steps as much as possible.

 

Example 1:

Input: nums = [1,3,5]
Output: 1
Example 2:

Input: nums = [2,2,2,0,1]
Output: 0*/



#include<bits/stdc++.h>
using namespace std;
int findMinimumInRotatedSortedArray(vector<int>nums){
    int s = 0 ;
    int e = nums.size()-1 ;

    while(s<=e){
        int mid = s + (e - s) / 2 ;
        if(mid+1 <nums.size() && nums[mid]>nums[mid+1]){
            return nums[mid+1] ;
        }
        else if (nums[mid]<nums[mid-1]){
            return nums[mid] ;
        }

        if(nums[s] == nums[mid] && nums[mid] == nums[e]){
            // if nums[s] ,nums[mid] and nums[e] are equal then starting index increases by 1 and ending index decrease by 1;
            // and continue : that's why need not to anything check 
            s++;
            e--;
            continue;
        }
        // if left part is sorted
        if(nums[s]<=nums[mid]){
            if(nums[s]<=nums[mid] && nums[s]>=nums[e]){
                s = mid + 1 ;
            }
            else{
                e = mid - 1;
            }
        }
        else{ 
            // if right part is sorted ;
            if(nums[mid]<=nums[e]){
                e = mid - 1 ;
            }
            else {
                s = mid + 1 ;
            }
        }
    }
    return nums[0] ;

}
int main() 
{
    vector<int>nums1 = {2,2,2,0,1} ;
    vector<int>nums2 = {1,2,3,4,5} ;
    vector<int>nums3= {1,2,3,3,0,1} ;

    cout<<"minimum element is : "<<findMinimumInRotatedSortedArray(nums1)<<endl ;   // 0
    cout<<"minimum element is : "<<findMinimumInRotatedSortedArray(nums2)<<endl;    // 1

    cout<<"minimum element is : "<<findMinimumInRotatedSortedArray(nums3)<<endl ;   // 0

     
     
  return 0;
}
 