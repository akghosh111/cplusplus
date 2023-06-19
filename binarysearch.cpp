#include<conio.h>
#include<iostream.h>

int Binary_Search(int a[], int N, int data)
{
int first,last,mid;
int found=0;
first=0;
last=N-1;
while(first<=last && found==0)
{
mid=int((first+last)/2);
if(a[mid]==data)
found=1;
if(a[mid]<data)
first=mid+1;
if(a[mid]>data)
last=mid-1;
}
return(found);
}

int main()
{
clrscr();
int x[10],data, i;
cout<<"\n Enter 10 numbers in ascending order:";
for(i=0;i<10;i++)
{
cin>>x[i];
}
cout<<"\n Enter No. to be searched:";
cin>>data;
int res=Binary_Search(x,10,data);
if(res==1)
cout<<"\n found";
else
cout<<"\n not found";
getch();
return 0;

}

