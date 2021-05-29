#include<iostream>
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
	int flag=1;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n-1;j++)
		{
			if(arr[j]<arr[i])
			{
				flag=0;
			}
			if(flag==0)
			{
				break;
			}
		}
	}
		if(flag==1)
		{
			cout<<"The elements are sorted";
		}
		else{
			cout<<"The elements are not sorted";
		}
	
}
