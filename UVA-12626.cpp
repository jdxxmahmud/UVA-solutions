#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
int minimumElement(int *arr)
{
    int maxm=arr[0];
    for(int i=1; i<6; i++)
    {
        if(arr[i]<maxm)
        {
            maxm= arr[i];
        }
    }
    return maxm;
}

int countPizza(string str)
{
    int newArr[6]={0, 0, 0, 0, 0, 0};
    int oida[26];
    for(int i=0; i<26; i++) { oida[i]=0;}
    int ans=0;
    int x= str.length();
    /// cout<< x;
    for(int i=0; i<x; i++)
    {
        oida[str[i]-'A']++;
    }
  ///  for(int i=0; i<26; i++) { cout<< oida[i]<<" ";}

    newArr[0]= oida[0]/=3;
    newArr[1]= oida['R'-'A']/=2;
    newArr[2]= oida['M'-'A'];
    newArr[3]= oida['G'-'A'];
    newArr[4]= oida['I'-'A'];
    newArr[5]= oida['T'-'A'];

    ans= minimumElement(newArr);
    ///cout<<"\n";
    return ans;

}
int main()
{
    int n;
    cin>>n;
    string str;
    for(int i=0; i<n; i++)
    {
            int pizza;
            cin>> str;
            pizza= countPizza(str);
            cout<<pizza<<"\n";
    }

}
