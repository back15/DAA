#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
class sai
{
int a[100],n,max,min;
public:
int i,j;
void get();
void put();
void maxmin(int,int,int&,int&);
void show();
void call();
};
void sai::get()
{
cout<<"\n Enter the size of array=>";
cin>>n;
for(i=1;i<=n;i++)
{
a[i]=random(1000);
}
}
void sai::put()
{
cout<<"\n Show the element of array=>\n";
for(i=1;i<=n;i++)
{
if(i%8==0)
cout<<"\n";
cout<<a[i]<<"\t";
}
}
void sai::call()
{
maxmin(1,n,0,0);
}
void sai::maxmin(int i,int j,int &max1,int &min1)
{
int mid,max2,min2;
if(i==j)
max1=min1=a[i];
else if(i==j-1)
{
if(a[i]<a[j])
{
25
max1=a[j];
min1=a[i];
}
else
{
max1=a[i];
min1=a[j];
}
}
else
{
mid=(i+j)/2;
maxmin(i,mid,max1,min1);
maxmin(mid+1,j,max2,min2);
if(max1<max2)
max1=max2;
if(min1>min2)
min1=min2;
}
cout<<"\nmax "<<max<<"min "<<min;
max=max1;
min=min1;
}
void sai::show()
{
cout<<"\nThe maximum element is=>"<<max;
cout<<"\nThe minimum element is=>"<<min;
}
void main()
{
clrscr();
sai s;
clock_t e,l;
s.get();
s.put();
e=clock();
s.call();
l=clock();
s.show();
cout<<"\n The time compexity is =>"<<(l-e)/CLK_TCK;
getch();
}