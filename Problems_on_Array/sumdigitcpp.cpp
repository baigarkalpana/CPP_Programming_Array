/*
Author:Kalpana  Baigar

Accept N numbers from user and printing digit summation of number

*/


#include<iostream>


using namespace std;

 l j klj kl kj jkl jkl  hjgs  hd hgsd fs afgh dhg
class Number
{
   public:
   	      int i;
   	
   	      
   public:
           void display(int[],int );	      
   	      
   	
};

b 
void Number::display(int arr[],int size)
{
    int temp,num,sum;

	for(i=0;i<=size;i++)
       {
	   	   num=arr[i];
	   	   temp=num;
	   	   sum=0;
	    
	  		while(num!=0)
		   	 {
		     int digit=num%10;
			    sum=sum+digit;
				num=num/10;  	
			 }
	     cout<<"\nsummation of "<<" "<<temp<<<" "<"is : "<<" "<<sum;
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
