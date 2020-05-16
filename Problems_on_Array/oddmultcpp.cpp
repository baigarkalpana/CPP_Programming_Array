/*
Author:Kalpana  Baigar

Accept N numbers from user and print multiplication of odd nubers

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
	int mult=1;

	for(i=0;i<=size;i++)
       {
	   	  if(arr[i]%2!=0)
	   	   {
	   	   	   mult=mult*arr[i];
	             	   	  
	       }
        }
       
	   return mult;

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

    

	Number obj;
	bret=obj.display(p,isize);
	

	cout<<"\nmultiplication of odd  number is:"<<bret;
	
    
	
	
	
	return 0;
}
