#include<bits/stdc++.h>
using namespace std;
int n,m;
string s[3003];
string t;
string minn;
int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>s[i];
    }
    minn=s[1];
    for(int i=1;i<=n;i++){
        if(minn.compare(s[i])>0){
            minn=s[i];
        }
    }
    for(int i=1;i<=n;i++){
        sort(s[i].begin(),s[i].end());
        if(minn.compare(s[i])>=0){
            cout<<2;
        }else{
            cout<<0;
        }
    }
    return 0;
}