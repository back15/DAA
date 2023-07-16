#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
int p[100];
class heap
{
int n,a,b,c,no;
public:
void menu();
void read_e();
void s_union(int,int);
int find(int);
void print();
};
void heap::menu()
{
int ch;
cout<<"1:read_ele 2:simpleunion 3:find 4:print 5:exit"<<endl;
while(ch!=5)
{
switch(ch)
{
case 1:
read_e();
break;
case 2:
cout<<"\n enter root of two set node";
cin>>a>>b;
s_union(a,b);
break;
case 3:
cout<<"\n find the node";
cin>>no;
c=find(no);
cout<<"root node is:";
cout<<c;
break;
case 4:
print();break;
case 5:
exit(0);
}
cout<<"\n enter the choice";
cin>>ch;
}
}
void heap::read_e()
{
cout<<"\n enter the number of ele";

cin>>n;
cout<<"\n ent element:";
for(int i=1;i<=n;i++)
cin>>p[i];
}
void heap::s_union(int i,int j)
{
p[i]=j;
}
int heap::find(int i)
{
while(p[i]>=0)
{
i=p[i];
return i;
}
return 0;
}
void heap::print()
{
cout<<"\n union of two set";
for(int i=1;i<=n;i++)
{
cout<<p[i]<<" ";
}
}
void main()
{
clrscr();
heap h;
h.menu();
getch();
}