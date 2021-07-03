// Code owner : PAVAN CHAVAN
// Title : Print  Left Arrow Pattern
// date: 26/05/2021



#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, n,k,c=1;
    cin>>n;
    k=2*n;
    // print upper part
    for(i=1;i<=n;i++)
    {

        for(j=2*n;j>=1;j--)
                {
                if(c<=k)
                cout<<"* ";
                c++;
                }
        c=1;
        k=k-2;
        cout<<endl;
    }
    //print lower part
    k=2;
     for(i=1;i<=n;i++)
    {

        for(j=2*n;j>=1;j--)
                {
                if(c<=k)
                cout<<"* ";
                c++;
                }
        c=1;
        k=k+2;
        cout<<endl;
    }

    return 0;
}






