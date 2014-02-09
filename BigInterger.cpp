// Interger Class for performing Big Integer Taskes

#include<iostream>
#include<string>
#include<cstdio>
#include<cstdlib>
#include<algorithm>

using namespace std;

class Integer{
	private:
		string c;
	public:
		string Add(string a,string b){
			c.clear();
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
		
		string Minus(string a,string b){
			c.clear();
			bool flag = true;
			reverse(a.begin(),a.end());
			reverse(b.begin(),b.end());
			if(a.length() < b.length()){
				swap(a,b);
				flag = false;
			}
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
			if(!flag) c.push_back('-');
			while(c[c.length()-1]=='0' && c.length() > 1) c.erase(c.length()-1,1);
			reverse(c.begin(),c.end());
			return c;
		}
	
};

int main(){
	
	return 0;
}
