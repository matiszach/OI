#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int SIZE=1e6+7;
int n,m,b,k;
bitset<SIZE> bony,arr;
int pos[SIZE];
ll ans[SIZE];
int main()
{
	ios_base::sync_with_stdio(0);
	cin>>m;
	for(int i=1;i<=m;++i){
		cin>>b;
		bony[b]=1;
	}
	cin>>n;
	ll total=0;
	for(int i=1;i<SIZE;++i) pos[i]=i;
	int counter=0;
	for(int i=1;i<=n;++i){
		cin>>k;
		ll curr=0;
		int idx=pos[k];
		while(curr<k&&idx<SIZE){
			if(!arr[idx]){
				++curr;
				arr[idx]=1;
				if(bony[idx]){
					++counter;
					ans[counter]=total+curr;
				}
				pos[k]=idx+k;
			}
			idx+=k;
		}
		total+=k;
	}
	cout<<counter<<"\n";
	for(int i=1;i<=counter;++i) cout<<ans[i]<<"\n";
}
