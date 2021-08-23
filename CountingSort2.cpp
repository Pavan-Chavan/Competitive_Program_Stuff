//Title:- counting sort 2 printing sorted array 
//coder:- Pavan Chavan
//Email:- pavan.21920161@viit.ac.in
//date:- 23/8/2021
/*
Often, when a list is sorted, the elements being sorted are just keys to other values. 
For example, if you are sorting files by their size, the sizes need to stay connected to 
their respective files. You cannot just take the size numbers and output them in order, 
you need to output all the required file information.

The counting sort is used if you just need to sort a list of integers. Rather than using a 
comparison, you create an integer array whose index range covers the entire range of values 
in your array to sort. Each time a value occurs in the original array, you increment the counter 
at that index. At the end, run through your counting array, printing the value of each non-zero
 valued index that number of times.

For example, consider an array . All of the values are in the range , so create an array of 
zeroes, . The results of each iteration follow
*/
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'countingSort' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

vector<int> countingSort(vector<int> arr) {
    int result[100]={0};
    vector<int>finalResult;
    for (int i=0; i<arr.size(); i++) {
        result[arr[i]]++;
    }
    
    for (int i=0; i<100; i++) {
        for (int j=0; j<result[i]; j++) {
            finalResult.push_back(i);
        }
    }
    return finalResult;
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

    vector<int> result = countingSort(arr);

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
