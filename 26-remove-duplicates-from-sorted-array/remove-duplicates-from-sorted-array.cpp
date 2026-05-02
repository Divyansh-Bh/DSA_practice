class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> v;
        int k=0;
        v.push_back(nums[0]);
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]!=v[k])
            {
                k++;
                v.push_back(nums[i]);
            }
        }
        int j=0;
        for(auto it:v)
        {
            nums[j]=it;
            j++;
        }
        return k+1;
    }
};