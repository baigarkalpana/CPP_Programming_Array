/*
Author:Kalpana  Baigar

Accept N numbers and also accept another number from user and return frequency of another number


*/


#include<iostream>

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
	 int display(int arr[],int size,int no)
        {
        	
        	for(i=0;i<=size;i++)
        	{
			     if(arr[i]==no)
		        	{
		        		frequency++;
					}
	    	}
			return frequency;
		}
};


int main()
{
	int isize=0,i=0,iret=0,num=0;
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
	
		cout<<"\nenter another number:";
		cin>>num;

	
	Math obj;
    iret=obj.display(p,isize,num);
    
	
	cout<<"\nfrequency of number 11 is :"<<iret;
	
	delete []p;
	
	
	
	
	
	return 0;
}
