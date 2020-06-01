#include<algorithm>
#include<unordered_map>
vector<vector<int> > Solution::anagrams(const vector<string> &A) {
    vector<string>ar;
    for(int i=0;i<A.size();i++){
        ar.push_back(A[i]);
    }
    vector<vector<int> > v;
    for(int i=0;i<ar.size();i++){
        sort(ar[i].begin(),ar[i].end());
    }
    unordered_map<string,vector<int>>map;
    for(int i=0;i<ar.size();i++){
        map[ar[i]].push_back(i);
    }
    for(int i=0;i<ar.size();i++){
        if(map.find(ar[i])!=map.end()){
            vector<int>x=map[ar[i]];
            vector<int>v1;
            v1.push_back(x[0]+1);
            for(int i=1;i<x.size();i++){
                v1.push_back(x[i]+1);
            }
            v.push_back(v1);
            map.erase(ar[i]);
        }
    }
   /* for(int i=0;i<v.size();i++){
        for(int k=0;k<v[i].size();k++){
            cout<<v[i][k]<<" ";
        }
    }*/
    return v;
}
