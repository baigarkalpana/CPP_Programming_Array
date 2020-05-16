/*
Author:Kalpana  Baigar

Accept N numbers from user and display all such elements which are even and divisible by 5


*/


#include<iostream>

using namespace std;


void arrdisplay(int arr[],int size)
{  
   int sumevn=0,sumodd=0,i;
   for(i=0;i<=size;i++)
   {
   	 if((arr[i]%2==0) && (arr[i]%5==0))
   	   {
   	   	   printf("\n%d",arr[i]);
   	   	  
       }
   }
	
}


int main(void)
{
	int isize=0,i=0;
	int *p=NULL;
	
	
	cout<<"enter size of array";
    cin>>isize;
    p=new int[isize];
	if(p==NULL)
	{
	   cout<<"memory not allocated\n";	
	}	 
	else
	{
		 cout<<"memory allocated\n";	
	}
	
	cout<<"enter elements\n";
	
	for(i=0;i<=isize;i++)
	{
      cin>>p[i];	
	}
	
	
	cout<<"your entered elements are:";
	
	for(i=0;i<=isize;i++)
	{
		cout<<p[i]<<" ";
		
	}
	
	arrdisplay(p,isize);
	
	
	
	delete []p;
	
	
	
}
