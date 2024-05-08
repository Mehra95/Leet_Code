class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int,int>>pq;
        int n=score.size();
        for(int i=0;i<n;i++)
            pq.push({score[i],i});

        int i=0;
        vector<string>ans(n);
        while(!pq.empty()){
            ans[pq.top().second]=i==0?"Gold Medal":i==1?"Silver Medal":i==2?"Bronze Medal":to_string(i+1);
            i++;
            pq.pop();
        }
        return ans;
    }
};