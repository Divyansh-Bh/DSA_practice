class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max=0;
        int sum;
        int i,j;
        for(i=0;i<accounts.size();i++)
        {
            sum=0;
            for(j=0;j<accounts[0].size();j++)
            {
                sum+=accounts[i][j];
                if(sum>max)
                max=sum;
            }
        }
        return max;
        
    }
};