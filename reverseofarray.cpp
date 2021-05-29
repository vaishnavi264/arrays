#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{   cout<<"enter the no of elements"<<endl;
	int n;
	cin>>n;
	cout<<"enter the elements"<<endl;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n/2;i++)
	{
		 int temp=arr[i];
		 arr[i]=arr[n-i-1];
		 arr[n-i-1]=temp;
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
