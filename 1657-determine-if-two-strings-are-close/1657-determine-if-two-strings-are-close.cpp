class Solution {
public:
    bool closeStrings(string word1, string word2) {
        vector<int>count1(26,0),count3(26,0);
        vector<int>count2(26,0),count4(26,0);
        int n1=word1.size();
        int n2=word2.size();

        if(n1!=n2)
        return false;

        for(int i =0;i<n1;i++){
            count1[word1[i]-'a']++;
            count3[word1[i]-'a']=1;
        }
        
        for(int i =0;i<n2;i++){
            count2[word2[i]-'a']++;
            count4[word2[i]-'a']=1;
        }

        sort(count1.begin(),count1.end());
        sort(count2.begin(),count2.end());

        return count1==count2&&count3==count4;
    }
};