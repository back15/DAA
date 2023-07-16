#include<iostream.h>
#include<conio.h>
#include<process.h>
int FRONT=-1,REAR=-1;
int item,queue[7],MAX=7;
class ABC
{
	 public:
	 void insert();
	 void remove();
	 void show();
};
void ABC::insert()
{
	   if(FRONT==0 && REAR==MAX-1)
	   {
	      cout<<"\n Stack is OVERFLOW";
	   }
	   else
	   {
	       cout<<"\n Enter the elements";
	       cin>>item;
	       if(FRONT==-1 && REAR==-1)
	       {
		 FRONT++;
		 REAR++;
		 queue[REAR]=item;

		 cout<<"\n item "<<item<<"is iserted on posistion"<<REAR;
		 }
		 else
		 {
		    REAR++;
		 queue[REAR]=item;
		 cout<<"\n item "<<item<<"is iserted on posistion"<<REAR;
		 }

	       }


}
void ABC::show()
{
     int i ;
     for(i=0;i<=REAR;i++)
     {
	  cout<<"\n"<<queue[i];
     }

}
void main()
{
	clrscr();
	ABC A;
	cout<<"\n 1.inertion.2.show 3.exit";
	int ch;
	while(ch!=3)
	{
		cout<<"\n Enter your choice";
		cin>>ch;
	    switch(ch)
	    {

	      case 1: A.insert();
		      break;
	      case 2: A.show();
		      break;
	      case 3: exit(0);
		      break;
	      default:cout<<"\n Invalid Choice";

	    }
	}


	getch();
}