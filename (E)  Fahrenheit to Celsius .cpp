#include <bits/stdc++.h> 
vector<vector<int>> fahrenheitToCelsius(int s, int e, int w)
{
	vector<vector<int>>ans;
	for(int i=s;i<=e;i+=w){
		int temp=(i-32)*5/9;
		ans.push_back({i,temp});
	}

	return ans;
}
