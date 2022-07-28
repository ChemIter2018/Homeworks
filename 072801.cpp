#include<iostream>
using namespace std;
int i,j,c,n=10,x=0,y=0,temp;
int a[15],b[15];
int main(){
	for(i=1;i<=n;i++)
	{
		cin>>temp;
		if(temp%2==0)
		{
			x++;
            a[x]=temp;
		}
		else
		{
			y++;
            b[y]=temp;
		}
	}
    for(i=1;i<=x;i++)
	{
		cout<<a[i]<<" ";
	}
    cout << x << " " << y << endl;
	for(i=1;i<=x-1;i++)
	{
		for(j=1;j<=x-i;j++)
		{
			if (a[j]>a[j+1])
			{
				swap(a[j],a[j+1]);
			}
		}
	}
	for(i=1;i<=y-1;i++)
	{
		for(j=1;j<=y-i;j++)
		{
			if (b[j]<b[j+1])
			{
				swap(b[j],b[j+1]);
			}
		}
	}
	for(i=1;i<=y;i++)
	{
		cout<<b[i]<<" ";
	}
	for(i=1;i<=x;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}