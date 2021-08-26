//Title:- Organizing containers of ball
//coder:- Pavan Chavan
//Email:- pavan.21920161@viit.ac.in
//date:- 25/8/2021

/* David has several containers, each with a number of balls in it. 
He has just enough containers to sort each type of ball he has into its 
own container. David wants to sort the balls using his sort method.

David wants to perform some number of swap operations such that:

Each container contains only balls of the same type.
No two balls of the same type are located in different containers.
*/
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'organizingContainers' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts 2D_INTEGER_ARRAY container as parameter.
 */

string organizingContainers(vector<vector<int>> container) {
        vector<int>capacity;
        vector<int>qantity;
        int cost,cost1;
        for (int i=0; i<container.size(); i++) {
            cost=cost1=0;
            for (int j=0; j<container.size(); j++) {
                cost=cost+container[i][j];
                cost1=cost1+container[j][i];
            }
            capacity.push_back(cost);
            qantity.push_back(cost1);
        }
        
        sort(capacity.begin(),capacity.end());
        sort(qantity.begin(),qantity.end());
        
        for (int i=0; i<capacity.size(); i++) {
            if(capacity[i]!=qantity[i])
            return "Impossible";
        }
        return "Possible";
}   

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string q_temp;
    getline(cin, q_temp);

    int q = stoi(ltrim(rtrim(q_temp)));

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string n_temp;
        getline(cin, n_temp);

        int n = stoi(ltrim(rtrim(n_temp)));

        vector<vector<int>> container(n);

        for (int i = 0; i < n; i++) {
            container[i].resize(n);

            string container_row_temp_temp;
            getline(cin, container_row_temp_temp);

            vector<string> container_row_temp = split(rtrim(container_row_temp_temp));

            for (int j = 0; j < n; j++) {
                int container_row_item = stoi(container_row_temp[j]);

                container[i][j] = container_row_item;
            }
        }

        string result = organizingContainers(container);

        fout << result << "\n";
    }

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
