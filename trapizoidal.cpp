#include<bits/stdc++.h>
using namespace std;
double f(double x)
{
    return 1/(1+x*x);
}
int main()
{
  double a,b,n,h,integration=0,k;
  cout<<"Enter the lower limit: "<<endl;
  cin>>a;
  cout<<"Enter the upper limit: "<<endl;
  cin>>b;
  cout<<"Enter the number of subinterval:"<<endl;
  cin>>n;
  h=(b-a)/n;
  integration=f(a)+f(b);
  for(int i=1;i<=n-1;i++)
  {
      k=a+i*h;
      integration+=(2*f(k));
  }

  cout<<(integration*h)/2<<endl;



return 0;
}
