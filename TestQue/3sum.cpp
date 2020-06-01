#include<unordered_map>
#include<climits>
int Solution::threeSumClosest(vector<int> &A, int B) {
    sort(A.begin(),A.end());
    int ans=0,min=INT_MAX,curr;
    for(int i=0;i<A.size()-2;i++){
        int s=i+1;
        int e=A.size()-1;
        while(s<e){
            curr=A[i]+A[s]+A[e];
            int dif=abs(B-curr);
            if(dif<min){
                min=dif;
                ans=curr;
            }
           //cout<<min<<" "<<ans<<" , ";
            if(curr==B)
                return curr;
            if(curr<B)
                s++;
            else if(curr>B)
                e--;
        }
    }
    return ans;
}
