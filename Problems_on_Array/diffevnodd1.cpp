/*
Author:Kalpana Baigar

Accept N numbers from user and return the difference between frequency of even and odd numbers


*/


#include<iostream>

using namespace std;


class Number
{
   public:
   	      int i,no;
   	      int freqevn,freqodd;
   	      
   	
};

class Math : public Number
{
    public:
	 int display(int arr[],int size)
        {
        	freqevn=0;
        	freqodd=0;
        	
        	for(i=0;i<=size;i++)
        	{
			     if(arr[i]%2==0)
		        	{
		        		freqevn++;
					}
				else 
				   { 
					    freqodd++;
				   }	
	    	}
	    	
	    	no=freqevn-freqodd;
			return no;
		}
};


int main()
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

	
	Math obj;
    iret=obj.display(p,isize);
	
	cout<<"\nfrequency of even number is :"<<iret;
	
	delete []p;
	
	
	
	
	
	return 0;
}
