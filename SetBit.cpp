#include<iostream>
using namespace std;
int main(){
	int n,rem=0,count=0;
	cin>>n;
	while(n){
		rem=n%2;
		if(rem==1) count++;
		n=n/2;
	}
	cout<<count<<endl;
	return 0;
}