#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string str;
        getline(cin,str);
        bool c[256]={false};
        for(char a:str)
            if(!c[a])
                cout<<a,c[a]=true;
        cout<<endl;
    }
	return 0;
}