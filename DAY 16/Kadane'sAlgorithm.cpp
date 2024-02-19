

/*Kadane's Algorithm
MediumAccuracy: 36.28%Submissions: 860K+Points: 4


banner
Given an array Arr[] of N integers. Find the contiguous sub-array(containing at least one number) which has the maximum sum and return its sum.


Example 1:

Input:
N = 5
Arr[] = {1,2,3,-2,5}
Output:
9
Explanation:
Max subarray sum is 9
of elements (1, 2, 3, -2, 5) which 
is a contiguous subarray.
Example 2:

Input:
N = 4
Arr[] = {-1,-2,-3,-4}
Output:
-1
Explanation:
Max subarray sum is -1 
of element (-1)

Your Task:
You don't need to read input or print anything. The task is to complete the function maxSubarraySum() which takes Arr[] and N as input parameters and returns the sum of subarray with maximum sum.


Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

*/

#include<bits/stdc++.h>
using namespace std;
long long maxElement(int arr[] ,int n){
        long long max = INT_MIN ;
        for( long long i= 0 ;i<n;i++){
            if(arr[i]>max){
                max = arr[i] ;
            }
        }
        return max ;
    }
    
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        long long sum = 0;
        long long ans = INT_MIN ;
        for(int  i = 0 ;i<n;i++){
            sum = sum + arr[i] ;
            if(sum > ans){
                ans = sum ;
            }
            if(sum < 0){
                sum = 0 ;
            }
        }
        
        long long max = maxElement(arr,n) ;
       
        if(max > ans)  return max ;
         else return ans ;
        
    }
int main() 
{
    // Input:
    // N = 5
    // Arr[] = {1,2,3,-2,5}
    // Output:
    // 9

    int Arr[] = {1,2,3,-2,5} ;
    int N = 5 ;
    cout<<maxSubarraySum(Arr,N) <<endl;

     
     
  return 0;
}