#include <iostream>
#include <stack>
using namespace std;
int n;
int h,d;
int heights[250000];
stack<int> k;
int counter=0;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>d>>h;
		heights[i]=h;
	}
	for(int i=0;i<n;i++)
	{
		while(!k.empty()&&k.top()>heights[i])
		{
			k.pop();
		}
		if(k.empty()||k.top()<heights[i])
		{
			k.push(heights[i]);
			counter++;
		}
	}
	cout<<counter;
}
