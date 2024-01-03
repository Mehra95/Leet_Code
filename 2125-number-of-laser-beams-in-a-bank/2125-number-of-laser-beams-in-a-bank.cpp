class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int total=0;
        int prev=0;
        for(int i=bank.size()-1;i>=0;i--){
            int No_one=0;
            for(int j=0;j<bank[i].size();j++){
                if(bank[i][j]=='1')
                    No_one++;
            }
            if(prev!=0 && No_one!=0){
                total+=prev*No_one;
            }
            if(No_one!=0)
            prev=No_one;
            
        }
        return total;
    }
};