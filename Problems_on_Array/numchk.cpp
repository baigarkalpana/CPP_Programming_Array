/*
Author:Kalpana  Baigar

Accept N numbers from user and accept one another number as NO,and check wether number is present or not


*/


#include<iostream>
#include<stdbool.h>

using namespace std;


class Number
{
   public:
   	      int i;
   	      int frequency;
   	      
   public:
           bool display(int[],int ,int);	      
   	      
   	
};


bool Number::display(int arr[],int size,int num)
{

	for(i=0;i<=size;i++)
    {
		if(arr[i]==num)
	    {
           return true;
		   break;	    	
 		}
 	

	}
		
	return false;	

}

int main()
{
	int isize=0,i=0,no;
	bool bret;
	int *p=NULL;
	
	
	cout<<" enter size of array";
    cin>>isize;
    p=new int[isize];
	if(p==NULL)
	{
	   cout<<" memory not allocated\n";	
	}	 
	else
	{
		 cout<<" memory allocated\n";	
	}
	
	cout<<"enter elements\n";
	
	for(i=0;i<=isize;i++)
	{
      cin>>p[i];	
	}
	
	
	cout<<"\nyour entered elements are:";
	
	for(i=0;i<=isize;i++)
	{
		cout<<p[i]<<" ";
	
		
	}

    cout<<"\n enter another number";
    cin>>no;

	Number obj;
	bret=obj.display(p,isize,no);
	
    
	
	if(bret==true)
	{
		cout<<"\n number is present";
		
	}
	else
	{
		cout<<"\n number not present";
	}
	
	
	delete []p;
	
	
	
	
	
	return 0;
}
