/*
Author:Kalpana  Baigar

Accept N numbers from user and check number eleven is present or not


*/


#include<iostream>
#include<stdbool.h>

using namespace std;


class Number
{
   public:
   	      int i;
   	      int frequency;
   	      
   	
};

class Math : public Number
{
    public:
	 bool display(int arr[],int size)
        {
        	
        	for(i=0;i<=size;i++)
        	{
			     if(arr[i]==11)
		        	{
		        		frequency++;
					}
	    	}
			return frequency;
		}
};


int main()
{
	int isize=0,i=0;
	bool bret;
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

	
	Math obj;
    bret=obj.display(p,isize);
    
	
	if(bret==true)
	{
		cout<<"\nnumber eleven is present";
		
	}
	else
	{
		cout<<"\nnumber eleven is not present";
	}
	
	
	delete []p;
	
	
	
	
	
	return 0;
}
