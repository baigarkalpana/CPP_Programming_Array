/*
Author:Kalpana  Baigar

Accept N numbers from user and also accept the range and print the numbers in dat range only.

*/


#include<iostream> 


  

using namespace std;

class Number
{
   public:
   	      int i;
   	             
   public:
           void display(int[],int);	      
   	
	        	   



	        
   	
};


 
void Number::display(int arr[],int size)
{
    int start,end;
	 
	
	cout<<"\nenter starting range:";
	cin>>start;
	
	cout<<"\nenter ending range:";
	cin>>end;

	for(i=0;i<=size;i++)
       {
	   	 
	   	   if(arr[i]>=start && arr[i]<=end)
	   	   {
	   	   	   
	            printf("\n%d ",arr[i]); 	   	  
	       }
	       
	    }
       

}  

int main()
{
	
	int isize=0,i=0;

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
	obj.display(p,isize);
	 

    
    
	
    
	
	
	
	return 0;
}
