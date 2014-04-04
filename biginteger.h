#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#ifndef BIGINTEGER_H
#define BIGINTEGER_H

using namespace std;

/** BigInteger Library
    Coding : Sakib Sami ( s4kibs4mi@gmail.com )
    Coded in Standard C++
    implemented functions :
    addition,substraction,fibonacci numbers
    to work with this add "biginteger.h" in your code
    and keep biginteger.h file in root of your program
*/

class BigInteger{
public:
    // method to findout the greater number
    int BigIntFind(string a,string b){
        if(a.length() < b.length())
            return 1;
        else if(a.length() > b.length()) return -1;
        int i = 0;
        while(a[i]){
            if(a[i] > b[i]) return -1;
            else if(a[i] < b[i]) return 1;
            i++;
        }
        return 0;
    }

    // method for addition
    string addition(string a,string b){
        string c;
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        if(a.length() < b.length())
            swap(a,b);
        while(int(b.length()) < int(a.length()))
            b.push_back('0');

        int i = 0,carry = 0;
        while(a[i]){
            carry = carry + a[i]-48 + b[i]-48;
            c.push_back((carry %10) + 48);
            carry = carry / 10;
            i++;
        }
        while(carry > 9){
            c.push_back((carry % 10) + 48);
            carry = carry / 10;
        }
        if(carry != 0) c.push_back(carry + 48);
        reverse(c.begin(),c.end());
        return c;
    }

    // method for substraction
    string substract(string a,string b){
        if(a == b)
            return "0";
        string c;
        bool check = false;
        if(BigIntFind(a,b) == 1){
            check = true;
            swap(a,b);
        }
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());

        int lenA = a.length();
        while((int) b.length() < lenA)
            b.push_back('0');

        int i = 0 , carry = 0;
        while(a[i]){
            if(a[i] < carry + b[i]){
                int d = (a[i]-48) + (1*10);
                c.push_back((d - ((b[i]-48)+carry)) + 48);
                carry = 1;
            }
            else{
                c.push_back(((a[i]-48) - ((b[i]-48)+carry)) + 48);
                carry = 0;
            }
            i++;
        }

        while(c.length() > 0 && c[c.length()-1] == '0')
            c.resize(c.length()-1);

        if(check)
            c.push_back('-');
        reverse(c.begin(),c.end());
        return c;
    }

    // method to generate fibonacci numbers
    vector <string> Fibonacci(string a,string b,long unsigned int n){
        vector <string> f;
        if(n){
            f.push_back(a);
            Fibonacci(b,addition(a,b),--n);
        }
        return f;
    }
};

#endif // BigInteger_H
