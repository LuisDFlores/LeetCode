class Solution {
public:
    bool isPalindrome(int x) {
        
        string num;
        string rnum;
        int s, i;
        num = to_string(x);
        
        
       for(int i = num.size()-1; i >= 0; i--){
           rnum.push_back(num[i]);
            
      
        
        if(num.compare(rnum)==0)
            x=true;
        else
            x=false;

                
        }
    
        return x;
    }
};