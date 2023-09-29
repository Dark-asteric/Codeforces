#include "bits/stdc++.h"
#define ll long long int
using namespace std;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(0);
    ll n; cin>>n;
    ll arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    ll cur_mx = 1,total_mx = 1;
    for(int i=0; i<n-1; i++){
        //ll cur_mx = 1;
        if(arr[i]<=arr[i+1]){
            cur_mx++;
            total_mx = max(cur_mx,total_mx);
        }
        else cur_mx = 1;
        
    }
    cout<<total_mx<<"\n";
    return 0;
}