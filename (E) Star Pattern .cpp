#include <bits/stdc++.h> 

void printPattern(int n) {
	
	for(int i=0;i<n;i++){

        for(int j=1;j<n-i;j++){
            cout<<" ";
        }
        for(int j=n-i;j<=n+i;j++){
            cout<<'*';
        }
        cout<<endl;
     }
}