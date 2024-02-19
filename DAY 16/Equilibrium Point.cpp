int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        if(n==1) return a[0] ;
        
        int s = 0 ;
        int e = n-1 ;
        long long leftSum = 0 ;
        long long rightSum  = 0 ;
        while(s<e){
            
            if(leftSum < rightSum){
                leftSum += a[s] ;
                s++;
            }
            else{
                rightSum += a[e] ;
                e--;
            }
            if(leftSum == rightSum && s==e ){
                
                return s+1;
            }
        }

        return -1;
        
        
    }
