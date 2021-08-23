//Title:- The full counting sort hacker rank problem
//coder:- Pavan Chavan
//Email:- pavan.21920161@viit.ac.in
//date:- 23/8/2021
/*
Use the counting sort to order a list of strings associated with integers. 
If two strings are associated with the same integer, they must be printed in 
their original order, i.e. your sorting algorithm should be stable. There is 
one other twist: strings in the first half of the array are to be replaced with 
the character - (dash, ascii 45 decimal).

Insertion Sort and the simple version of Quicksort are stable, but the faster 
in-place version of Quicksort is not since it scrambles around elements while sorting.

Design your counting sort to be stable.
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int main() {
    long int n;
    cin >> n;
    
    string ar[n];
    
    for(long int i = 0; i < n/2; i++){
        int x;
        cin >> x;
        
        string s;
        cin >> s;
        
        ar[x] = ar[x] + "-" + " ";
        
    }

    
    for(long int i = n/2; i < n; i++){
        int x;
        cin >> x;
        
        string s;
        cin >> s;

        ar[x] = ar[x] + s + " ";
        
    }
    
    
    for(int i = 0; i < n; i++)
        cout << ar[i];

    return 0;
}