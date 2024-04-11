#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int count  = 1 ;
        int ans = 0 ;
        int cnt = 1 ;
        int res = 0 ;
        for(int i = 0 ;i<nums.size()-1 ;i++){
            if(nums[i] < nums[i+1]){
                count++ ;
            }
            else{
                if(count >= ans){
                    ans = count ;
                }
                count = 1 ;
            }
        }
        for(int i = 0 ;i<nums.size()-1 ; i++){
            if(nums[i] > nums[i+1]){
                cnt++;
            }
            else{
                if(cnt >= res){
                    res = cnt ;
                }
                cnt = 1 ;
            }
        }
        if(count > ans) ans = count ;
        if(cnt > res) res = cnt ;
        return max(ans,res) ;
        
    }
};
int main() 
{
     
     
  return 0;
}