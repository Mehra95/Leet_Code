class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>stk;
        for(auto it:tokens){
            if(it=="+" ||it=="-"|| it=="*" || it=="/"){
                int num1=stk.top();
                stk.pop();
                int num2=stk.top();
                stk.pop();
                if(it=="+")
                stk.push(num1+num2);
                else if(it=="-")
                stk.push(num2-num1);
                else if(it=="*")
                stk.push(num1*num2);
                else 
                stk.push(num2/num1);
            }
            else 
            stk.push(stoi(it));
        }
        return stk.top();
    }
};