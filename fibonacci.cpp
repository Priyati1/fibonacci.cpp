#include<iostream>
using namespace std;
int main(){
	int n,c;
	cin>>n;
	int f=0,s=1;
	if(n==f||n==s){
		cout<<"part of fibonacci"<<endl;
	}
	int t=f+s;
	while(c<=n){
		if(c==n){
			cout<<"exist"<<endl;
			return 0;
		}
		f=s;
		s=t;
		c=f+s;
	}
	cout<<"does not exist"<<endl;
	return 0;
}
