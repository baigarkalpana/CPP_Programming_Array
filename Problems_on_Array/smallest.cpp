/*
Author:Kalpana  Baigar

Accept N numbers from user and returning maximum number

*/


#include<iostream>


using namespace std;


class Number
{
   public:
   	      int i;
   	
   	      
   public:
           int display(int[],int );	      
   	      
   	
};


int Number::display(int arr[],int size)
{
	int min=0;
	min=arr[0];

	for(i=0;i<=size;i++)
       {
	   	  if(arr[i]<min)
	   	   {
	   	   	  min=arr[i];
	             	   	  
	       }
        }
       
	   return min;

}

int main()
{
	int isize=0,i=0;
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

    

	Number obj;
	bret=obj.display(p,isize);
	

	cout<<"\nsmallest number is:"<<bret;
	
    
	
	
	
	return 0;
}
