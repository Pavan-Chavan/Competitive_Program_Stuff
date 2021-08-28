
//Title:- 3D surface area
//coder:- Pavan Chavan
//Email:- pavan.21920161@viit.ac.in
//date:- 28/8/2021
/*
Madison, is a little girl who is fond of toys. Her friend Mason works in a toy 
manufacturing factory . Mason has a 2D board  of size  with  rows and  columns. 
The board is divided into cells of size  with each cell indicated by it's coordinate . 
The cell  has an integer  written on it. To create the toy Mason stacks  number of cubes 
of size  on the cell .
*/

#include <bits/stdc++.h>

using namespace std;

int surfaceArea(vector < vector<int> > A) {
    int res = 0;
    for(int i = 1; i < A.size() -1; i++) {
        for(int j = 1; j < A[0].size()-1; j++) {
            for(int k = 1; k <= A[i][j]; k++){
                if(A[i-1][j] < k) res++;
                if(A[i+1][j] < k) res++;
                if(A[i][j+1] < k) res++;
                if(A[i][j-1] < k) res++;
            }
            res+=2;
        }
     }
    return res;
}

int main() {
    int H;
    int W;
    cin >> H >> W;
    vector< vector<int> > A(H + 2,vector<int>(W + 2, 0));
    for(int A_i = 1;A_i <= H;A_i++){
       for(int A_j = 1;A_j <= W;A_j++){
          cin >> A[A_i][A_j];
       }
    }
    int result = surfaceArea(A);
    cout << result << endl;
    return 0;
}