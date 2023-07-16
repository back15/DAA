#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
int a[1000];
class binary
{
int n,l,h,mid,x;
public:
void get();
void put();
int bsearch(int x);
void sort();
};
void binary::get()
{
cout<<"\nEnter the no. of elements";
cin>>n;
for(int i=1;i<=n;i++)
a[i]=random(20000);
}
void binary::put()
{
for(int i=1;i<=n;i++)
{
if(i%8==0)
cout<<endl;
cout<<a[i]<<"\t";
}
}
int binary::bsearch(int x)
{
l=1;
h=n;
while(l<=h)
{
mid=(l+h)/2;
if(x<a[mid])
h=mid-1;
else if(x>a[mid])
l=mid+1;
else
return mid;
}
return 0;
}
void binary::sort()
{ for(int j=1;j<=n;j++)
for(int i=j;i<=n;i++)

{
if(a[i]<a[j])
{
int temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
void main()
{
clrscr();
int x,y;
clock_t e,s;
binary b;
b.get();
b.sort();
cout<<"\n Sorted elements are"<<endl;
b.put();
cout<<"\nEnter elt u want to find="<<endl;
cin>>x;
s=clock();
y=b.bsearch(x);
cout<<"find="<<y<<endl;
b.put();
e=clock();
cout<<"\n time coplexity="<<((e-s)/CLK_TCK);
getch();
}