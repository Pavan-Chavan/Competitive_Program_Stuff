//Title:- quick sort partion hacker rank problem 
//coder:- Pavan Chavan
//Email:- pavan.21920161@viit.ac.in
//date:- 23/8/2021
/*
The previous challenges covered Insertion Sort, which is a simple and intuitive 
sorting algorithm with a running time of . In these next few challenges, we're 
covering a divide-and-conquer algorithm called Quicksort (also known as Partition 
Sort). This challenge is a modified version of the algorithm that only addresses 
partitioning. It is implemented as follows:
*/
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'quickSort' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

vector<int> quickSort(vector<int> arr) {
    vector<int>left;
    vector<int>right;
    vector<int>result;
    int p=arr[0];
    for (int i=1; i<arr.size(); i++) {
        if(p<arr[i])
        right.push_back(arr[i]);
        else if(arr[i]<p)
        left.push_back(arr[i]);
    }
    for (int i=0; i<left.size(); i++) {
    result.push_back(left[i]);
    }
    result.push_back(p);
    for (int i=0; i<right.size(); i++) {
    result.push_back(right[i]);
    }
    return result;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

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

    vector<int> result = quickSort(arr);

    for (size_t i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << " ";
        }
    }

    fout << "\n";

    fout.close();

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
