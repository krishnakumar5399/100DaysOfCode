#include<bits/stdc++.h>
using namespace std;
	int print2largest(int arr[], int n) {
	    // code here
	    if(n==1){
	        return -1 ;
	    }
	    
	    auto maxv1 = max_element(arr , arr + n) ;
	    int firstMax = *maxv1 ;
	    int index = maxv1 - arr ;
	    
	    for(int i = 0 ;i<n ;i++){
	        if(arr[i] == firstMax){
	            arr[i] = -1 ;
	        }
	    }
	  
	
	    
	    auto maxv2 = max_element(arr , arr + n) ;
	    int secondMax = *maxv2 ;
	    
	    return secondMax ;
int main() 
{
     
     
  return 0;
}