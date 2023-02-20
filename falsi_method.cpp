#include<bits/stdc++.h>
using namespace std;
double f(double x)
{
    return ((x*x*x)-(x*x)+2);
}
int main()
{
   double a,b,c;
   cin>>a>>b;
   if(f(a)*f(b)>=0)
   {
       cout<<"No root exist"<<endl;
   }
   else
   {
       int i=1;
       while(i<=1000000)
       {
           c=(a*f(b)-b*f(a))/(f(b)-f(a));
           if(f(c)==0)
           {
               break;
           }
           if(f(a)*f(c)>0)
           {
               a=c;
           }
           else
           {
               b=c;
           }
           i++;
       }
       cout<<"the root is"<<c<<endl;
   }




return 0;
}

