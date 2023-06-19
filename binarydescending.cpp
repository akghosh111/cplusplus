#include<iostream.h>
#include<conio.h>
#include<process.h>


#define MAX 50


int BSearch(int arr[],int range,int item);


void main()
{
  clrscr();

  int arr[MAX],i,n,itm,index;

  cout<<"Enter the length of the array not more than 50:";
  cin>>n;

  cout<<"\nEnter the values in the array in descending order:\n";
  for(i=0;i<n;i++)
  {
	 cin>>arr[i];
  }

  cout<<"\nEnter the value to be searched or the search item:";
  cin>>itm;

  index=BSearch(arr,n,itm);

  if(index==-1)
  {
		cout<<"\n This item is not present in the array.....";
  }
	else
  {
		cout<<"\n Its position in the array is="<<index;
  }

  getch();

}




int BSearch(int arr[],int range,int item)
{
  int lb=0,ub=range-1,mid;

  while(lb<=ub)
  {
	  mid=(lb+ub)/2;

	  if(item==arr[mid])
	  {
		 return (mid);
		 break;
	  }
	  else if(item<arr[mid])
	  {

	  	lb=mid+1;

	  }
	  else if(item>arr[mid])
	  {

		ub=mid-1;

	  }

  }
		 return (-1);


}
