/*Given two integers a and b, return the sum of the two
 integers without using the operators + and -.*/

//Title:- sum of two integers
//Code:- Pavan Chavan
//date:- 16-07-2021
//email:-pavan.21920161@viit.ac.in


class Solution {
public:
    int getSum(int a, int b) {
        while(a>0)
        {
            b++;
            a--;
        }
        while(a<0)
        {
            b--;
            a++;
        }
        return b;
    }
};