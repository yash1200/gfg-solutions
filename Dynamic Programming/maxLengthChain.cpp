bool comp(struct val a,struct val b){
    return a.second < b.second;
}
int maxChainLen(struct val vect[],int n){
   if(n==0)return 0;
   
    int ans=1;
    sort(vect,vect+n,comp);
    int b=vect[0].second;
    for(int i=1;i<n;i++){
        if(b < vect[i].first){
            b=vect[i].second;
            ans++;
        }
    }
    return ans;
} 