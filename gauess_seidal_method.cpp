#include<bits/stdc++.h>
using namespace std;
double f1(double x,double y,double z)
{
    return (17-y+2*z)/20;
}
double f2(double x,double y,double z)
{

    return (-18-3*x+z)/20;
}
double f3(double x,double y,double z)
{
    return (25-2*x+3*y)/20;
}
int main()
{
 double x0=0,y0=0,z0=0,x1,y1,z1,e,e1,e2,e3;
 int step=0;
 cout<<"Enter the tolerence: "<<endl;
 cin>>e;
 do
 {
     x1=f1(x0,y0,z0);
     y1=f2(x1,y0,z0);
     z1=f3(x1,y1,z0);
     step++;
     e1=fabs(x0-x1);
     e2=fabs(y0-y1);
     e3=fabs(z0-z1);
     x0=x1;
     y0=y1;
     z0=z1;
 }while(e1>e&&e2>e&&e3>e);

 cout<<setprecision(2)<<fixed<<x1<<" "<<y1<<" "<<z1<<endl;






return 0;
}
