class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int sum = accumulate(apple.begin(),apple.end(),0) ;
        int sum2 = 0 ;
        sort(capacity.begin(),capacity.end(),greater<int>()) ;
        for(int i = 0 ;i<capacity.size();i++){
            sum2 += capacity[i] ;
            if(sum2>=sum){
                return i+1;
            }
            
        }
        return -1 ;
        
    }
};