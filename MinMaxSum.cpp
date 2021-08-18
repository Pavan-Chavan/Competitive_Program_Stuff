//Title:- Min Max Sum
//coder:- Pavan Chavan
//Email:- pavan.21920161@viit.ac.in
//date:- 18/8/2021

/*Given five positive integers, find the minimum and maximum values that 
    can be calculated by summing exactly four of the five integers. Then print
    the respective minimum and maximum values as a single line of two space-
    separated long integers. */

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'miniMaxSum' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

void miniMaxSum(vector<int> arr) {
    unsigned long min=0,max=0;
    int maxInt=0,minInt=INT16_MAX,flagMax=0,flagMin=0;
    maxInt=minInt=arr[0];
    for (int i=1; i<arr.size() ;i++) {
        flagMax=flagMin=0;
        if (maxInt<arr[i]) {
            max=max+maxInt;
            maxInt=arr[i];
            flagMax=1;
            
        }
        if (minInt>arr[i]) {
            min=min+minInt;
            minInt=arr[i];
            flagMin=1;
        }
        if (flagMax==0) {
            max=max+arr[i];
        }
        if (flagMin==0) {
            min=min+arr[i];
        }
    }
    cout<<max<<" "<<min;
}

int main()
{

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<int> arr(5);

    for (int i = 0; i < 5; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    miniMaxSum(arr);

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
