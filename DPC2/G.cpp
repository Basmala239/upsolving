#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long p,a,b,c;
        cin>>p>>a>>b>>c;
        long long ans=(a-(p%a))%a;
        ans=min(ans,(b-(p%b))%b);
        ans=min(ans,(c-(p%c))%c);
        cout<<ans<<endl;
        
    }
}
