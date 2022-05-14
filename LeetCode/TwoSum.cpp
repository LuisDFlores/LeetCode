class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int x= nums.size();
        int i,j;
        int sum;
        int temp;
        
        for(i=0;i<x;i++)
        {
            temp = nums[i];
            for(j=i+1;j<x;j++)
            {
              sum = temp + nums[j];
                if(sum==target)
                    return {i,j};
            }
           
         }
        return {};
    }
    
};
