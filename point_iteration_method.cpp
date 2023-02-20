#include<bits/stdc++.h>
using namespace std;
double f(double x)
{
    return (cos(x)-3*x+1);
}
double g(double x)
{
    return ((1+cos(x))/3);
}
int main()
{
   double x0,t,N,x1,step=0;
   cout<<"Enter the initial gauess: "<<endl;
   cin>>x0;
   cout<<"Enter the tollerence: "<<endl;
   cin>>t;
   cout<<"Enter the maximum number of iteration: "<<endl;
   cin>>N;
   do
   {
      x1=g(x0);
      step++;
      if(step>N)
      {
          cout<<"convergent"<<endl;
          break;
      }
    x0=x1;
   }while(fabs(f(x1)>t));
   cout<<x1<<endl;





return 0;
}
