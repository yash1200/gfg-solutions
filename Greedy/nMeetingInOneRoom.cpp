#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool comp(tuple<int,int,int> a,tuple<int,int,int> b){
    return get<1>(a)<get<1>(b);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n;
		vector<int> c;
		vector<tuple<int,int,int>> v(n);
		for(int i=0;i<n;i++)
			cin>>x,get<0>(v[i])=x,get<2>(v[i])=i+1;
		for(int i=0;i<n;i++)
			cin>>x,get<1>(v[i])=x;
		sort(v.begin(),v.end(),comp);
		tuple<int,int,int> last=v[0];
		c.push_back(get<2>(v[0]));
		for(int i=1;i<n;i++)
			if(get<1>(last)<=get<0>(v[i]))
				last=v[i],c.push_back(get<2>(v[i]));
		for(int x:c)
			cout<<x<<" ";
		cout<<endl;
	}
	return 0;
}