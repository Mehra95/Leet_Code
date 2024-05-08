class Solution {
private:
    static bool comp(int a, int b){
        return a>b;
    }
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string>ans;
        vector<int>score_copy(score);
        sort(score.begin(),score.end(),comp);
        unordered_map<int,string>mp;
        for(int i=0;i<score.size();i++){
            if(i==0)
                mp[score[i]]="Gold Medal";
            else if(i==1)
                mp[score[i]]="Silver Medal";
            else if(i==2)
                mp[score[i]]="Bronze Medal";
            else
                {
                    int temp=i+1;
                    mp[score[i]]=to_string(temp);
                }
        }

        for(int i=0;i<score.size();i++){
            ans.push_back(mp[score_copy[i]]);
        }
        return ans;
    }
};