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
*/

class BigInteger{
public:
    // method to findout the greater number
    int BigIntFind(string a,string b){
        if(a.length() < b.length()) swap(a,b);
        string d = b;
        reverse(b.begin(),b.end());
        while(b.length() < a.length()) b.push_back('0');
        reverse(b.begin(),b.end());
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
        string c;
        bool flag = true;
        if(BigIntFind(a,b)==1){
            swap(a,b);
            flag = false;
        }
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        while(b.length() < a.length()) b.push_back('0');
        int i = 0,carry = 0,x = 0;
        while(a[i]){
            if(b[i] > a[i]) x = (a[i]-48) + 10;
            else x = a[i]-48;
            carry = x-(carry + (b[i]-48));
            c.push_back(carry+48);
            carry = x / 10;
            i++;
        }
        while(c[c.length()-1]=='0' && c.length() > 1) c.erase(c.length()-1,1);
        if(!flag) c.push_back('-');
        reverse(c.begin(),c.end());
        return c;
    }

    // method to generate fibonacci numbers
    vector <string> F(string a,string b,long unsigned int n){
        vector <string> f;
        string c;
        if(n){
            f.push_back(a);
            c = addition(a,b);
            F(b,c,--n);
        }
        return f;
    }
};

#endif // BigInteger_H
