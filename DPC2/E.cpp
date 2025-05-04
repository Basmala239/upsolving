#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    long long a[n+1];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    long long pre[n+1];
    pre[0]=0;
    for(int i=1;i<=n;i++){
        pre[i]=pre[i-1]+a[i];
    }
    
    while(m--){
        long long x;
        cin>>x;
        int pos=lower_bound(pre,pre+n+1,x)-pre;
        cout<<pos<<" "<<x-pre[pos-1]<<endl;
        
    }

}
