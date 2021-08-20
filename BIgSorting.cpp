//Title:- Min Max Sum
//coder:- Pavan Chavan
//Email:- pavan.21920161@viit.ac.in
//date:- 18/8/2021

/*
Consider an array of numeric strings where each string is a positive
 number with anywhere from  to  digits. Sort the array's elements in 
 non-decreasing, or ascending order of their integer values and return
  the sorted array.
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> unsorted(n);
    for(int unsorted_i = 0; unsorted_i < n; unsorted_i++){
       cin >> unsorted[unsorted_i];
    }

    sort(unsorted.begin(), unsorted.end(), [](const string& a, const string& b) 
    {
        if (a.length() != b.length()) {
            return a.length() < b.length();
        }
        return a < b;
    });    
    return 0;
}