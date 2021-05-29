
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,max;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
	max=arr[0];
	for(int i=0;i<n;i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
		}
	}
	cout<<"The maximum element in given array is:"<<max;
}
