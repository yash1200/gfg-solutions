#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll> v(n),ans(n);
        for(int i=0;i<n;i++)
            cin>>v[i];
        stack<ll> s;
        for(int i=n-1;i>=0;i--){
            while(!s.empty()&&v[i]>=s.top())
                s.pop();
            ans[i] = s.empty() ? -1 : s.top();
            s.push(v[i]);
        }
        for(int i=0;i<n;i++)
            cout<<ans[i]<<" ";
        cout<<endl;
    }
	return 0;
}