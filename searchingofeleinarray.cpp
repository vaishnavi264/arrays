#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
	int n,x,flag=0;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"enter the element to find"<<endl;
	cin>>x;
	for(int i=0;i<=n;i++)
	{
		if(arr[i]==x)
		{
          flag++;
          	cout<<"the element found at position:"<<i<<":"<<arr[i]<<endl;
        }
	}
	if(flag==0)
	{
		cout<<"the element is not found";
	}
	return 0;
}
	
