class Solution {
public:
    int compareVersion(string version1, string version2) {
        int i=0,j=0,n,m;
        while(i<version1.size() || j<version2.size()){
            n=0;
            m=0;
            while(i<version1.size() && version1[i]!='.'){
                n=n*10+(version1[i]-'0');
                i++;
            }

            
            while(j<version2.size() && version2[j]!='.'){
                m=m*10+(version2[j]-'0');
                j++;
            }
            if(n>m) return 1;
            else if(n<m) return -1;
            i++;
            j++;
        }
        return 0;
    }
};