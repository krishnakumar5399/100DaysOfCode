
// https://www.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/0
vector<int> leaders(int a[], int n){
        // Code here
        vector<int>ans ;
        if(n==1) {
            ans.push_back(a[0]) ;
            return ans ;
        }
        
        int max = a[n-1] ;
        // reverse loop ;
        for(int i = n-1 ;i>=0 ;i--){
            if(a[i] >= max){
                ans.push_back(a[i]);
                max = a[i] ;
            }
        }
        
        int s = 0 ;
        int e = ans.size()-1;
        while(s<=e){
            swap(ans[s],ans[e]) ;
            s++;
            e-- ;
        }
        return ans ;
        
