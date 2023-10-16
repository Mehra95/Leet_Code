class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>prev;
        prev.push_back(1);
        for(int i=0;i<=rowIndex;i++){
            vector<int>temp(i+1);
            temp[0]=1;
            temp[i]=1;
            for(int j=1;j<i;j++){
                temp[j]=prev[j-1]+prev[j];
            }
            if(i==rowIndex)
                return temp;
            else
                prev=temp;
        }
        return prev;
    }
};