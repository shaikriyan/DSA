#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout<<#x<<" = "; print(x); cout<<endl;

template<class T> void print(T a){ cout<<a;}

template<typename T>
void print(vector<T> v){
	cout<<"[ ";
	for(int i=0;i<v.size();i++){
		print(v[i]);
		cout<<" ";
	}
	cout<<"]";
}



int main()
{
	string str;
	getline(cin,str);

	vector<int> v = {2,3,4,5};

	deb(v);

	cout<<str<<endl;
	

	return 0;
}