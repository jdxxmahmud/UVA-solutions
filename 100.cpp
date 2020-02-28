#include<iostream>
#include<stdio.h>
using namespace std;
void maxCount(int a, int b);
int cycleCount(int n);
int main()
{
    int a,b, maxm=0;

    while((scanf("%d%d", &a, &b))==2 && a>0 && b>0)
    {
        maxCount(a, b);
    }

}
void maxCount(int a, int b)
{
    cout<< a<<" "<<b<<" ";
    if(a>b)
    {
        swap(a, b);
    }
    int maxans=0, cnt=0;
    for(int i=a;i<=b;i++)
    {
      ///  cout<<"\n "<<i<<" count: ";
        cnt= cycleCount(i);
       /// cout<<" count: "<<cnt <<"\n";
        if(maxans<=cnt)
        {
            maxans= cnt;
        }
    }
    cout<<maxans<<"\n";
}
int cycleCount(int n)
{
    int cnt=1;
    while(n!=1)
    {
        if(n%2==0) n/=2;
        else n= 3*n + 1;
      ///  cout<< n<< " ";
        cnt++;
    }

    return cnt;
}
