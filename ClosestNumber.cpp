//Title:- closest number problem in hacker rank
//coder:- Pavan Chavan
//Email:- pavan.21920161@viit.ac.in
//date:- 23/8/2021
/*
Sorting is useful as the first step in many different tasks. The most common
 task is to make finding things easier, but there are other uses as well. In this case, 
 it will make it easier to determine which pair or pairs of elements have the smallest 
 absolute difference between them.
*/
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);


vector<int> closestNumbers(vector<int> arr) {
        long temp;
        vector<int>result;
        for (int i=0; i<arr.size(); i++) {
            for (int j=i+1; j<arr.size(); j++) {
                if (arr[j]<arr[i]) {
                    temp=arr[j];
                    arr[j]=arr[i];
                    arr[i]=temp;
                }
            }
        }
        temp=INT16_MAX;
        for (int i=0; i<arr.size()-1; i++) {
            if(temp<0)temp=-temp;
            if ((arr[i+1]-arr[i])<temp) {
                temp=arr[i]-arr[i+1];
                cout<<temp<<" ";
                result.clear();
                result.push_back(arr[i]);
                result.push_back(arr[i+1]);  
            }
            else if ((arr[i+1]-arr[i])==temp) {
                result.push_back(arr[i]);
                result.push_back(arr[i+1]);
                
            }
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

    vector<int> result = closestNumbers(arr);

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
