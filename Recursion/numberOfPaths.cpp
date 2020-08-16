#include<bits/stdc++.h>
using namespace std;
int cal(int n,int m){
    if(n==1||m==1)
        return 1;
    return cal(n-1,m)+cal(n,m-1);
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        cout<<cal(n,m)<<endl;
    }
	return 0;
}