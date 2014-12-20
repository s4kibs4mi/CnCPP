#include<iostream>
#include<string>
#include<vector>
#include<map>

using namespace std;

struct myDataType{
	string name;
	string dept;
	string id;
	string semester;
};

typedef myDataType customType;

int main(){
	string name,dept,id,semester;
	vector<customType> v;
	
	for(int i = 0; i < 1; i++){
		cin >> name >> dept >> id >> semester;
		v.push_back({name,dept,id,semester});
	}
	
	vector<customType> :: iterator it;
	it = v.begin();
	while(it != v.end()){
		cout << it->name << "," << it->dept << "," << it->id << "," << it->semester << endl;
		it++;
	}
	return 0;
}

