class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n=boxes.length();
        vector<int> v;
        vector<int>ans1;
        for(int i=0;i<n;i++)
        {
            if(boxes[i]=='1') v.push_back(i);
        }
        int m=v.size();
        for(int i=0;i<n;i++)
        {
            int ans=0;
            for(int j=0;j<m;j++)
            {
                ans+=abs(v[j]-i);
            }
            ans1.push_back(ans);
        }
        
        return ans1;
    }
};