#include<bits/stdc++.h>
using namespace std;
	void pushZerosToEnd(int arr[], int n) {
	    // code here
	    vector<int>ans ;
	    vector<int> ans2 ;
	    for(int i = 0 ;i<n;i++){
	        if(arr[i] !=0 ) ans.push_back(arr[i]) ;
	        else ans2.push_back(arr[i]) ;
	    }
	    for(int i = 0 ;i<ans.size();i++){
	        arr[i] = ans[i] ;
	    }
	    int v = ans.size() ;
	    for(int i = 0 ;i<ans2.size();i++){
	        arr[v++] = ans2[i];
	    }
	}
int main() 
{
     
     
  return 0;
}