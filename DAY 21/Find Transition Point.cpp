    int transitionPoint(int arr[], int n) {
        // code here
        int s = 0 ;
        int e = n-1 ;
        int ans = -1 ;
        while(s<=e){
            int mid = s+(e-s) /2 ;
            if(arr[mid] == 1){
                ans = mid ;
                e = mid-1 ;
            }
            else{
                s= mid+1 ;
            }
        }
        return ans;
    }
