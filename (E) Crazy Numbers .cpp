#include <bits/stdc++.h> 
vector < vector < int > > numberPattern(int n) {

  vector<vector<int>>ans;
  
  int start=1;
  for(int i=0;i<n;i++){
    vector<int>res;
    for(int j=0;j<n-i-1;j++){
      res.push_back(-1);
    }

    for(int j=0;j<=i;j++){
      res.push_back(start);
      if(start==9){
        start=1;
        continue;
      }
      start++;
    }
    ans.push_back(res);
  }
  return ans;

}
