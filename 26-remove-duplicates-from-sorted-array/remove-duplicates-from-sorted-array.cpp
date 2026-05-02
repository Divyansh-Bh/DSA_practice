class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> v;
        v.push_back(nums[0]);
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]!=v.back())
            {
                v.push_back(nums[i]);
            }
        }
        int j=0;
        for(auto it:v)
        {
            nums[j]=it;
            j++;
        }
        return v.size();
    }
};