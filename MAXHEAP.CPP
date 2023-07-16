#include<conio.h>
#include<iostream.h>
class heap
{
	  int q,i,j,key,a[10],item,n;
	  public:
	  void get();
	  void create();
	  void show();
};
void heap::get()
{
      cout<<"Enter the size";
      cin>>n;
      cout<<"Enter the element";

      for(i=1;i<=n;i++)
      {
	   cin>>a[i];
      }
}
void heap::create()
{
       for(q=2;q<=n;q++)
       {
	    i=q;
	    key=a[q];
	    j=i/2;

	    while(i>1 && key<a[j])
	    {
		 a[i]=a[j];
		 i=j;
		 j=i/2;

		 if(j<1)
		   j=1;

	    }
	      a[i]=key;
       }
}
void heap::show()
{
     for(i=1;i<=n;i++)
     {
	 cout<<"  "<<a[i];
     }

}
void main()
{
      clrscr();
      heap S;
      S.get();
      S.create();
      S.show();
      getch();
}
