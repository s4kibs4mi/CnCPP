#include<iostream>
#include<algorithm>

using namespace std;

// Decimal to 8-bit binary conversion using bitwise
string toBinary(int x){
	string bin;
	while(x > 0){
		if(x&1)
			bin += '1';
		else bin += '0';
		x = (x>>1);
	}
	while(bin.length() <= 8) bin += '0';

	reverse(bin.begin(),bin.end());
	return bin;
}

int main(){
	int i;
	cin >> i;

	cout << toBinary(i) << endl;

	return 0;
}
