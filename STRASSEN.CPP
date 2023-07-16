#include<iostream.h>
#include<conio.h>
#include<time.h>
class mmul
{
int a[3][3],b[3][3],c[3][3],p,q,r,s,t,u,v,i,j;
public:
void get();
void put();
void formula();
};
void mmul::get()
{
cout<<"enter the matrix1=";
for( i=1;i<=2;i++)
for( j=1;j<=2;j++)
cin>>a[i][j];
cout<<"enter the matrix2=";
for( i=1;i<=2;i++)
for( j=1;j<=2;j++)
cin>>b[i][j];
}
void mmul::formula()
{
p=((a[1][1]+a[2][2])*(b[1][1]+b[2][2]));
q=((a[2][1]+a[2][2])*(b[1][1]));
r=((a[1][1])*(b[1][2]-b[2][2]));
s=((a[2][2])*(b[2][1]-b[1][1]));
t=((a[1][1]+a[1][2])*(b[2][2]));
u=((a[2][1]-a[1][1])*(b[1][1]+b[1][2]));
v=((a[1][2]-a[2][2])*(b[2][1]+b[2][2]));
c[1][1]=p+s-t+v;
c[1][2]=r+t;
c[2][1]=q+s;
c[2][2]=p+r-q+u;
}
void mmul::put()
{
for(int i=1;i<=2;i++)
{
for(int j=1;j<=2;j++)
cout<<c[i][j]<<" ";
cout<<" \n";
}
}
void main()
{
clrscr();
40
mmul m;
clock_t e,s;
m.get();
s=clock();
m.formula();
cout<<"\n output="<<endl;
m.put();
e=clock();
cout<<"\n Time comlexity="<<((e-s)/CLK_TCK);
getch();
}