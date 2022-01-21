#include<iostream>
using namespace std;
int main()
{
	int i,A[50],j,count=0;
	int n;
	cout<<"Enter the no of elements ";
	cin>>n;
	cout<<"Enter the array ";
	for(i=0;i<n;i++)
	{
		cin>>A[i];
	}
	for(i=0;i<n-1;i++)
	{
	for(j=i+1;j<n;j++)
	{
		if(A[j]==A[i])
		{
			count++;
			A[j]=-1;
		}
	

}

}
cout<<"Array after removing duplicates ";
if(count>1)
{
for(i=0;i<n;i++)
{
if(A[i]>0)
cout<<A[i]<<" ";
else
 break;}
}
}

