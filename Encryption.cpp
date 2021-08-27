
//Title:- Encrypation
//coder:- Pavan Chavan
//Email:- pavan.21920161@viit.ac.in
//date:- 27/8/2021
/*
An English text needs to be encrypted using the following encryption scheme.
First, the spaces are removed from the text. Let  be the length of this text.
Then, characters are written into a grid, whose rows and columns have the following constraints:

*/
#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'encryption' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string encryption(string s) {
    
        int row,col,c=-1;
        int size=s.size();
        char* enc = (char*)malloc((size+1) * sizeof(char));
        int len=s.size();   
        row=(int)sqrt(len);
        col=row+1;
        
        if((row*row)==len) col=row;
         else if(len<=(row*(row+1))) col=row+1;
        for (int i=0; i<col; i++) {
            for (int j=i; j<s.size(); j=j+col) {
                c++;
                enc[c]=s[j];
                cout<<s[j];
            }
            enc[++c]=' ';
            cout<<' ';
        }
        enc[c]='\0';
        return enc;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = encryption(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
