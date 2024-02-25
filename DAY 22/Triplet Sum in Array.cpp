question link -> https://www.geeksforgeeks.org/problems/triplet-sum-in-array-1587115621/1?page=2&category=Arrays,Strings&sortBy=submissions

bool find3Numbers(int A[], int n, int X)
    {
        //Your Code Here
        sort(A,A+n);
        for(int i = 0 ;i<n;i++){
            int start = i+1 ;
            int end = n-1 ;
            while(start<end){
                if((A[i]+A[start]+A[end])==X) return true;
                
                else if(A[i]+A[start] +A[end] > X){
                    end--;
                }
                else{
                    start++;
                }
            }
        }
        return false ;
    }
