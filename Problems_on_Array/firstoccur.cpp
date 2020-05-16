/*
Author:Kalpana  Baigar

Accept N numbers from user and accept one another number as NO,and return the index of first occurence of number

*/


#include<iostream>


using namespace std;


class Number
{
   public:
   	      int i;
   	      int frequency;
   	      
   public:
           int display(int[],int ,int);	      
   	      
   	
};


int Number::display(int arr[],int size,int num)
{

	for(i=0;i<=size;i++)
    {
		if(arr[i]==num)
	    {
           return i;
		   break;	    	
 		}
 	

	}
		
   return -1;	

}

int main()
{
	int isize=0,i=0,no;
	int bret;
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
	
	if(bret== -1)
	{
		cout<<"number is not present";
	}
	
	else
	{
		cout<<"First occurence of number is:"<<bret;
	}
    
	
	
	
	return 0;
}
