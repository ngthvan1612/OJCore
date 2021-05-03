#include <iostream>
#include <stdio.h>
void Nhap(int &m, int &n, int a[][200]);
bool nguyento(int n);
int xuli(int m, int n, int a[][200]);
using namespace std;

int main()
{
    int m, n, a[200][200];
    Nhap(m,n,a);
    cout<<xuli(m,n,a);
}
void Nhap(int &m, int &n, int a[][200])
{
    cin>>m>>n;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>a[i][j];
        }
    }
}
bool nguyento(int n)
{
    if(n<2)
        return false;
    for(int i=2;i<n/2 +1;i++){
        if(n%i==0)
        {
            return false;
        }
    }
   return true;
}
int xuli(int m, int n, int a[][200])
{
     int minn=999999;
    for(int i=0; i<m; i++)
    {
        int tong =0;
        for(int j=0; j<n; j++)
        {
            if(nguyento(a[i][j])==1)
              {
                  tong=tong+a[i][j];
              }
        }

        if(tong<=minn)
        {
            minn=tong;
        }

    }
    return minn;
}
