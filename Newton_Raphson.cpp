#include<bits/stdc++.h>
using namespace std;
double f(double x)
{
    return ((x*x*x)-x*x+2);
}
double df(double x)
{
    return ((3*x*x)-(2*x));
}
int main()
{
 double x0,x1;
 cout<<"Enter the intial gauess: "<<endl;
 cin>>x0;
 do
 {
   x1=x0-f(x0)/df(x0);
   x0=x1;
 }while(fabs(f(x1))>0.001);

 cout<<"the root is: "<<x1<<endl;



return 0;
}
