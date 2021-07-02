// Code owner : PAVAN CHAVAN
// Title :  print the inverted full pyramid.
// date: 26/05/2021
#include<bits/stdc++.h>
using namespace std;



int main()
{
    int i, j, n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i<=j)
            {
                cout<<"* ";
            }
            else
                cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}











