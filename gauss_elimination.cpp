#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cout<<"Enter the numebr of unknowns: "<<endl;
  cin>>n;
  double arr[n][n+1],x[n+1],r;
  for(int i=1;i<=n;i++)
  {
      for(int j=1;j<=n+1;j++)
      {

          cin>>arr[i][j];
      }
  }
  for(int i=1;i<=n-1;i++)
  {
      if(arr[i][i]==0.0)
      {
          cout<<"mathmatical error"<<endl;
          exit(0);
      }
      for(int j=i+1;j<=n;j++)
      {
          r=arr[j][i]/arr[i][i];
          for(int k=1;k<=n+1;k++)
          {
              arr[j][k]=arr[j][k]-arr[i][k]*r;
          }
      }
  }
  x[n]=arr[n][n+1]/arr[n][n];

  for(int i=n-1;i>=1;i--)
  {
      x[i]=arr[i][n+1];
      for(int j=i+1;j<=n;j++)
      {
          x[i]=x[i]-arr[i][j]*x[j];
      }
      x[i]=x[i]/arr[i][i];
  }
  for(int i=1;i<=n;i++)
  {
      cout<<setprecision(3)<<fixed<<x[i]<<endl;
  }





return 0;
}
