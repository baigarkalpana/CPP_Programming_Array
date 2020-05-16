/*
Author:Kalpana  Baigar

Accept array  from user and return difference of summation of even and odd elements in an array

*/


#include<iostream>

using namespace std;


int arrdisplay(int arr[],int size)
{  
   int sumevn=0,sumodd=0,i;
   for(i=0;i<=size;i++)
   {
   	   if(arr[i]%2==0)
   	   {
   	      sumevn=sumevn+arr[i];	  
	   }
	   else
	   {
	   	  sumodd=sumodd+arr[i];	  
	   }
   }
	return sumevn-sumodd;
}


int main(void)
{
	int isize=0,i=0,iret=0;
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
	
	iret=arrdisplay(p,isize);
	
	cout<<"\ndiffernce of summation of even and odd elements is:"<<iret;
	
	
	delete []p;
	
	
	
}
