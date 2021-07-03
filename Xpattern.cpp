// Code owner : PAVAN CHAVAN
// Title : print X pattern otherwise print INVALID
// date: 26/05/2021

#include<bits/stdc++.h>
using namespace std;

int main()
{
    char p[200];
    int i,j,Rk,Fk=0,n,k;
    cin>>p;
    for(k=0;p[k]!='\0';k++);
    if(k%2==0)
    {
        cout<<"INVALID";
        exit(0);
    }

    n=Rk=k;
    for(i=0;i<=n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
                {
                cout<<p[Fk];
                Fk++;
                if((i==j)&&((i+j)==(n-1)))Rk--;
                }
            else if((i+j)==(n-1))
            {
                Rk--;
                cout<<p[Rk];

            }

            else
                cout<<" ";
        }
        cout<<endl;
    }

}
