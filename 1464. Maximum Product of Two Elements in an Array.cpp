#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans=0;
        for(int i=0; i<nums.size(); i++)
        {
            for(int j=i+1; j<nums.size(); j++)
            {
                ans=max(ans, ((nums[i]-1)*(nums[j]-1)));
            }
        }
        return ans;
    }
};
int main()
{
    Solution s;
    vector<int>v={3, 4, 5, 2}; //12
    cout<<s.maxProduct(v)<<endl;
    return 0;
}
