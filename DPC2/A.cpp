#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin>>s;
	stack<char>t;
	string u="";
	int fr[26],n=s.size();
	memset(fr,0,sizeof(fr));
	
	for(int i=0;i<n;i++){
	    fr[s[i]-'a']++;
	}
	
	for(int i=0,j=0;i<26&&j<n;){
	    while(!t.empty()&&t.top()-'a'<=i){
	        u+=t.top();
	        t.pop();
	    }
	    if(fr[i]){
	        if(s[j]-'a'==i){
	            u+=s[j];
	        }else{
	            t.push(s[j]);
	        }
	        fr[s[j]-'a']--;
	        j++;
	    }else{
	        i++;
	    }
	}
	while(!t.empty()){
        u+=t.top();
        t.pop();
    }
    cout<<u<<endl;

}
