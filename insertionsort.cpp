#include<conio.h>
#include<iostream.h>
#include<iomanip.h>

void main()
{
clrscr();
int x[10],i,j,temp;
// input
cout<<"Enter 10 numbers to be sort:";
for(i=0;i<10;i++)
 cin>>x[i];

// Processing
for(i=1;i<10;i++)
{
	temp=x[i];
	j=i-1;
	while(temp<x[j] && j>=0)
	{
	 x[j+1]=x[j];
	 j=j-1;
	}
	x[j+1]=temp;
}
// output
cout<<"\n sorted Array:";
for(i=0;i<10;i++)
	cout<<setw(4)<<x[i];

getch();
return;
}
