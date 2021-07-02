// Code owner : PAVAN CHAVAN
// Title : Print Fibonacci series
// date: 26/05/2021

#include<bits/stdc++.h>

using namespace std;
void get_Feb_Number(int Number)
{
    int No1=0,No2=1,temp;
    cout<<No1<<" "<<No2<<" ";
        for(int i=2;i<Number;i++)
        {
            cout<<(No1+No2)<<" ";
            temp=No2+No1;
            No1=No2;
            No2=temp;
        }
        cout<<endl;
}
int main()
{
    int Number,temp,Count=0,*Arr;
    cin>>Number;
    Arr= (int*)calloc(Number,sizeof(int));
    for(int i=0;i<Number;i++)cin>>Arr[i];
    for(int i =0;i<Number;i++)
    {
        get_Feb_Number(Arr[i]);
    }

}








