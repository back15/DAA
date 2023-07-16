#include<conio.h>
#include<iostream.h>
#include<stdlib.h>
#include<process.h>
int main()
{

     int s1,s2,a[100],b[100],c[200],i,j,k;
     clrscr();
     cout<<"\n Enter the size of array";
     cin>>s1;
     cout<<"\n Enter the first element of array";

     for(i=0;i<s1;i++)
     {
	  cin>>a[i];
     }
     cout<<"\n Enter the size of array ";
     cin>>s2;
     cout<<"\n Enter the 2nd element of array" ;
     for(i=0;i<s2;i++)
     {
	  cin>>b[i];
     }
     cout<<"\n Merge array Given below";
     i=0,j=0,k=0;
     while(i<s1 &&j<s2)
     {
	 if(a[i]<b[j])
	 {
	    c[k++]=a[i++];
	 }
	 else
	 {
	     c[k++]=b[j++];
	 }
     }
     if(i>=s1)
     {
	 while(j<s2)
	 {
	    c[k++]=b[j++];

	 }
      }
      else if(j>=s2)
      {
	     while(i<s1)
	     {
		 c[k++]=a[i++];
	     }
      }

      for(i=0;i<s1+s2;i++)
      {
	      cout<<c[i]<<" ";
      }
      return 0;
}