#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool comp(pair<int,int> a,pair<int,int> b){
    return a.second<b.second; 
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,count=1;
		cin>>n;
		vector<pair<int,int>> v(n);
		for(int i=0;i<n;i++)
			cin>>v[i].first;
		for(int i=0;i<n;i++)
			cin>>v[i].second;
		sort(v.begin(),v.end(),comp);
		pair<int,int> last=v[0];
		for(int i=1;i<n;i++)
			if(last.second<=v[i].first)
				last=v[i],count++;
		cout<<count<<endl;
	}
	return 0;
}