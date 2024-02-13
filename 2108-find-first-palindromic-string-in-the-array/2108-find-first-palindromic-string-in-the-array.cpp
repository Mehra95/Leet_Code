class Solution {
private:
bool ispallindrome(string str){
    int i=0;
    int j=str.size()-1;
    while(i<j){
        if(str[i]!=str[j])
            return false;
        i++;
        j--;
    }
    return true;
}
public:
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++){
            if(ispallindrome(words[i])){
                return words[i];
            }
        }
        return "";
    }
};