#include<conio.h>
#include<iostream.h>
#include<iomanip.h>

int main()
{
int x[10],i,j,temp;
//input phase
clrscr();
for(i=0;i<10;i++)
{
cout<<"\n Enter "<<i+1<<" value";
cin>>x[i];
}
// Processing
for(i=0;i<9;i++)
{
	for(j=0;j<=(9-i);j++)
	{
		if(x[j]>x[j+1])
		{
		 temp=x[j];
		 x[j]=x[j+1];
		 x[j+1]=temp;
		}
	}
}
// Output Phase

cout<<"\n Sorted Array";
	for(i=0;i<10;i++)
	{
	cout<<setw(6)<<x[i];
	}
getch();
return 0;
}
