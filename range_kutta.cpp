#include<bits/stdc++.h>
using namespace std;
double f(double x,double y)
{
    return (y*y-x*x)/(y*y+x*x);
}
int main()
{
  double x0,y0,xn,yn,h,n,k,k1,k2,k3,k4,x,y;
  cout<<"Enter the initial gauess: "<<endl;
  cin>>x0>>y0;
  cout<<"Enter the calculation point: "<<endl;
  cin>>xn;
  cout<<"Enter the number of steps: "<<endl;
  cin>>n;

  h=(xn-x0)/n;

  for(int i=0;i<n;i++)
  {
      k1=((x0,y0))*h;
      k2=(f((x0+h/2.0),(y0+k1/2.0)))*h;
      k3=(f((x0+h/2.0),(y0+k2/2.0)))*h;
      k4=f(x0+h,y0+k3);
      k=(k1+2*k2+2*k3+k4)/6;
      yn=y0+k;
      cout<<x0<<" "<<y0<<" "<<yn<<endl;
      x0=x0+h;
      y0=yn;

  }
    cout<<fixed<<setprecision(4)<<xn<<" "<<yn<<endl;


return 0;
}
