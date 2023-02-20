#include<bits/stdc++.h>
using namespace std;
double f(double x,double y)
{
    return (x+y);
}
int main()
{
  double x0,y0,xn,yn,slope,n,h;
  cout<<"Enter the initial gauess: "<<endl;
  cin>>x0>>y0;
  cout<<"Enter the calculation point: "<<endl;
  cin>>xn;
  cout<<"Enter the number of steps: "<<endl;
  cin>>n;
  h=(xn-x0)/n;
  for(int i=0;i<n;i++)
  {
      slope=f(x0,y0);
      yn=y0+slope*h;
      x0=x0+h;
      y0=yn;

  }
    cout<<fixed<<setprecision(4)<<xn<<" "<<yn<<endl;


return 0;
}
