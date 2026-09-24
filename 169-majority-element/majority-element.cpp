class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int count=0,i;
        int element;
        for(i=0;i<n;i++)
        {
            if(count==0)
            {
                count=1;
                element=nums[i];
            }
            else if(nums[i]==element)
            count++;
            else
            count--;
        }
        return element;
    }
};