#include<bits/stdc++.h>
using namespace std;
const int N=100000;
int main(){
    int n;
    cin>>n;
    int a[N];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int l=1,r=n+1;
    long long s=0;
    for(int i=1;i<=n-1;i++){
    if(a[l]>=a[r]){
        s+=a[r];
        a[r-1]+=a[r];
        r-=1;
    }else{
        s+=a[l];
        a[l+1]+=a[l];
        l+=1;
    }
    }
    cout<<s;
}
