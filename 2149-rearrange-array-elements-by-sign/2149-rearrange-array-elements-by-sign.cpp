/*
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        vector<int>ans,positive,negative;
        
        for(auto i:nums)
        {
            if(i<0)
                negative.push_back(i);
            else 
                positive.push_back(i);
        }
        
        int index=1;
        int p=1; //will store the index of positive array 
        int n=0; //will store the index of negative array
        ans.push_back(positive[0]);
        
        while(index<nums.size())
        {
            if(ans[index-1]<0)
            {
                ans.push_back(positive[p]);
                p++;
            }
            else
            {
                ans.push_back(negative[n]);
                n++;
            }
            
            index++;
        }
        return ans;
    }
};
*/

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int pos_index=0,neg_index=1;
        vector<int> ans(nums.size());
        
        for(auto i: nums)
        {
            if(i>0)
            {
                ans[pos_index]=i;
                pos_index+=2;
            }
            else if(i<0)
            {
                ans[neg_index]=i;
                neg_index+=2;
            }
            
        }
        return ans;
    }
};


