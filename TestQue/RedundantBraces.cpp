#include<stack>
int Solution::braces(string A) {
    stack<char>s;
    for(int i=0;i<A.size();i++){
        if(A[i]=='(' || A[i]=='+' || A[i]=='-' || A[i]=='*' || A[i]=='/'){
            s.push(i);
        }
        else if(A[i]==')'){
            if(A[s.top()]=='(')
                return 1;
            while(A[s.top()]!='('){
                s.pop();
            }
            s.pop();
        }
    }
    return 0;
}
