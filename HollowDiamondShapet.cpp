// Code owner : PAVAN CHAVAN
// Title : Print  Hollow Diamond shape
// date: 26/05/2021



#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, n;
    cin>>n;
    // print upper part
    for(i=0;i<n;i++)
    {
        for(j=0;j<(2*n-1);j++)
        {
                if(i==(j-(n-1)) || (i+j==(n-1)))    //checking diagonal elements for printing
                cout<<"*";
                else
                cout<<" ";
        }
        cout<<endl;
    }
    //print lower part
    for(i=1;i<n;i++)
    {

        for(j=0;j<(2*n-1);j++)
        {
                    if(i==j || (i+j==(2*n-2)))      //checking diagonal elements for printing
                    cout<<"*";
                    else
                    cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}






