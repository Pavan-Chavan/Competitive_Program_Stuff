/*
Implement the myAtoi(string s) function, which converts a string to a 32-bit signed integer (similar 
to C/C++'s atoi function).

The algorithm for myAtoi(string s) is as follows:

Read in and ignore any leading whitespace.
Check if the next character (if not already at the end of the string) is '-' or '+'. Read this character
in if it is either. This determines if the final result is negative or positive respectively. Assume the 
result is positive if neither is present.
Read in next the characters until the next non-digit charcter or the end of the input is reached. The rest 
of the string is ignored.
Convert these digits into an integer (i.e. "123" -> 123, "0032" -> 32). If no digits were read, then the
integer is 0. Change the sign as necessary (from step 2).
If the integer is out of the 32-bit signed integer range [-231, 231 - 1], then clamp the integer so that
it remains in the range. Specifically, integers less than -231 should be clamped to -231, and integers
greater than 231 - 1 should be clamped to 231 - 1.
Return the integer as the final result.
*/


//Title:- String to Interger
//Code:- Pavan Chavan
//date:- 24-07-2021
//email:-pavan.21920161@viit.ac.in

class Solution {
public:
    int myAtoi(string s) {
        int i, num = 0, sign = 1;
        
        for(i = 0; s[i] == ' '; ++i);
		
        if(i < s.size()-1){
            if(s[i] == '-'){
                sign = -1;
                ++i;
            }
            else if(s[i] == '+') ++i;
        }
		
        for(; s[i] >= '0' && s[i] <= '9'; ++i){
            if(num > (INT_MAX-(s[i] - '0'))/10)
                    if(sign == -1)
                        return INT_MIN;
                    else return INT_MAX;
            num = num * 10 + (s[i] - '0');
        }
        num = num * sign;
        return num;
    }
};