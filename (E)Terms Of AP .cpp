#include <bits/stdc++.h> 
#include <vector>

vector < int > termsOfAP(int x) {
    vector<int>ans;
    int i=1;
    while(x>0){

        int num=(3*i)+2;
        if(num%4!=0){
            ans.push_back(num);
            x--;
        }

        i++;
    }

    return ans;
}
