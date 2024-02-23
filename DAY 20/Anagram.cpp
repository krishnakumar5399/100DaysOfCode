question link - https://www.geeksforgeeks.org/problems/anagram-1587115620/1?page=2&category=Arrays,Strings&sortBy=submissions

bool isAnagram(string a, string b){
        
        // Your code here
        // create mapping
      
        char mapping[256] ={0} ;
        
        
        // increment ;
        for(int i = 0 ;i<a.length();i++){
            mapping[a[i]]++;
        }
        
        // for decrement ;
        for(int i = 0 ;i<b.length();i++){
            mapping[b[i]]--;
        }
        
        for(int i = 0 ;i<256;i++){
            if(mapping[i] != 0){
                return false;
            }
        }
        return true;
        
    }
