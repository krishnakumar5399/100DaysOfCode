
#include<bits/stdc++.h>
using namespace std;
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        vector<int> ans ;
        int i = 0 , j = 0 ;
        while(i<n && j < m){
            if(arr1[i] < arr2[j]){
                ans.push_back(arr1[i++]) ;
            }
            else{
                ans.push_back(arr2[j++]) ;
            }
        }
        
        if(i<n){
            while(i<n){
                ans.push_back(arr1[i++]) ;
            }
        }
        else{
            while(j<m){
                ans.push_back(arr2[j++]) ;
            }
        }
        return ans[k-1] ;
        
    }
int main() 
{
   int arr1[] = {2, 3, 6, 7, 9} ;
   int arr2[] = {1, 4, 8, 10} ;
   int k = 5;
   int n = 5 ;
   int m = 4 ;
   cout<<kthElement(arr1,arr2,n,m,k)<<endl;
     
     
  return 0;
}