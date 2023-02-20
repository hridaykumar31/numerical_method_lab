#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cout<<"Enter the number of data: "<<endl;
  cin>>n;
  double x[n],y[n],xp,yp,k;
  for(int i=0;i<n;i++)
  {
      cin>>x[i];
  }
  for(int i=0;i<n;i++)
  {
      cin>>y[i];
  }
  cout<<"Enter enterpolation point"<<endl;
  cin>>xp;
  for(int i=0;i<n;i++)
  {
    k=1;
    for(int j=0;j<n;j++)
    {
        if(i!=j)
        {
            k=k*(xp-x[j])/(x[i]-x[j]);
        }
    }
    yp+=(k*y[i]);

  }
  cout<<setprecision(4)<<fixed<<yp<<endl;







return 0;
}
