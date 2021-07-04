/*Given an array of integers, calculate the ratios of its elements 
that are positive, negative, and zero. Print the decimal value of
each fraction on a new line with  places after the decimal.

Note: This challenge introduces precision problems. The test cases
are scaled to six decimal places, though answers with absolute error
of up to  are acceptable.

//Title:- Plus Minus
//coder:- Pavan Chavan
//Email:- pavan.21920161@viit.ac.in
//date:- 3/7/2021
*/


#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'plusMinus' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

void plusMinus(vector<int> arr,int n) {
    
    float plus=0,minus=0,zero=0;
    for (int i=0; i<n; i++)
    {
        if (arr[i]>0)
        plus++;
        else if (arr[i]<0)
        minus++;
        else
        zero++;
    }
    printf("%.6f\n",(plus/n));
    printf("%.6f\n",(minus/n));
    printf("%.6f\n",(zero/n));
}

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    plusMinus(arr,n);

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
