/*
اللهم اشرح لي صدري ويسر لي أمري واحلل عقدة من لساني يفقهوا قولي
*/
#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define all(x) x.begin(), x.end()
#define endl '\n'
#define T  ll t ; cin >> t; while(t--)

int main() {
    fast
    T{
    int n;
    cin>>n;
    int a[n],b[n],mn=1e9;
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[i]=a[i];
        mn=min(mn,a[i]);
    }
    sort(a,a+n);
    bool can=1;
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            if(a[i]%mn!=0){
                can=0;
                break;
            }
        }
    }
    if(can){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
    }

}
