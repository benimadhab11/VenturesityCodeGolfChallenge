#include <iostream>
using namespace std;
void func(char a,int n){int space=2*n - 1;int sub=2;int k;for(int i=0;i<n;i++){for(k=0;k<i;k++){cout<<" ";}cout<<a;space=space-sub;for(int j=0;j<space;j++){cout<<" ";}if(space>0){cout<<a<<"\n";}}}
int main(){int t,n;char a;cin>>t;while(t--){cin>>a>>n;func(a,n);cout<<"\n";}return 0;}
