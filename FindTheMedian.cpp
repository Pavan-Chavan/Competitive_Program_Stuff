//Title:- Find the median of given array
//coder:- Pavan Chavan
//Email:- pavan.21920161@viit.ac.in
//date:- 23/8/2021
/*
The median of a list of numbers is essentially its middle element after sorting. 
The same number of elements occur after it as before. Given a list of numbers with 
an odd number of elements, find the median?
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    int mv = 0;
    vector<int> counts(20001, 0);
    for (int i = 0; i < n; ++i) {
        int v;
        cin >> v;
        v += 10000;
        ++counts[v];
        mv = min(mv, v);    
    }
    int c = 0;
    for (int i = mv; i < counts.size(); ++i) {
        c += counts[i];
        if (c * 2 > n) {
            cout << i - 10000 << endl;
            break;
        }
    }
    return 0;
}