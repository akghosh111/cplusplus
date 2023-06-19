#include<conio.h>
#include<iostream.h>

int Linear_Search (int x[],int N,int data)
{
int i, found=0;
for(i=0;i<N;i++)
{
if(x[i]==data)
found=1;
}
return(found);
}
int main()
{
clrscr();
int x[10],data, i;
cout<<"\n Enter 10 numbers:";
for(i=0;i<10;i++)
{
cin>>x[i];
}
cout<<"\n Enter No. to be searched:";
cin>>data;
int res=Linear_Search(x,10,data);
if(res==1)
cout<<"\n found";
else
cout<<"\n not found";
getch();
return 0;
}
