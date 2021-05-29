#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,min;
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
	min=arr[0];
	for(int i=0;i<n;i++)
	{
		if(min>arr[i])
		{
			min=arr[i];
		}
	}
	cout<<"The maximum element in given array is:"<<min;
}
