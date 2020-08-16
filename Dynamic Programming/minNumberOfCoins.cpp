#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int ar[10]={1,2,5,10,20,50,100,200,500,2000};
    while(t--){
        int n,j=10;
        cin>>n;
        while(j--){
            for(int i=0;i<n/ar[j];i++)
                cout<<ar[j]<<" ";
            n%=ar[j];
        }
        cout<<endl;
    }
	return 0;
}