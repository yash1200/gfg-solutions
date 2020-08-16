#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> ans;
void cal(int i,vector<int> &v,vector<int> x,int a,int sum,int n){
    if(i==n||a>sum)
        return;
    if(a==sum){
        ans.push_back(x);
        return;
    }
    cal(i+1,v,x,a,sum,n);
    x.push_back(v[i]);
    cal(i+1,v,x,a+v[i],sum,n);
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,sum;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
            cin>>v[i];
        cin>>sum;
        sort(v.begin(),v.end());
        ans.clear();
        cal(0,v,{},0,sum,n);
        sort(ans.begin(),ans.end());
        auto itr=unique(ans.begin(),ans.end());
        ans.resize(distance(ans.begin(),itr));
        if(ans.size()==0){
            cout<<"Empty\n";
            continue;
        }
        for(auto a:ans){
            cout<<"(";
            for(int i=0;i<a.size()-1;i++)
                cout<<a[i]<<" ";
            cout<<a.back()<<")";
        }
        cout<<endl;
    }
	return 0;
}