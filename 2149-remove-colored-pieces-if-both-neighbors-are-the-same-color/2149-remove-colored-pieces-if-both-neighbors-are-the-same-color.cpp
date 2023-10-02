class Solution {
public:
    bool winnerOfGame(string colors) {
        int count_a=0;
        int count_b=0;
        for(int i=1;i<colors.size()-1;i++){
            if(colors[i]==colors[i-1] && colors[i]==colors[i+1]){
                if(colors[i]=='A')
                    count_a++;
                else 
                    count_b++;
            }
        }

        //Instead of this you can simply write return count_a>count_b;
        // int chance=0;
        // while(1){
        //     if(chance==0 && count_a<1)
        //         return false;
        //     else if(chance==1 && count_b<1)
        //         return true;
        //     else if(chance==0){
        //         count_a--;
        //         chance=1;
        //         }
        //     else {
        //         count_b--;
        //         chance=0;
        //         }
        // }
        return count_a>count_b;
    }
};