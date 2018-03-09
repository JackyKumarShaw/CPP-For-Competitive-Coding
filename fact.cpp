#include<iostream>
using namespace std;
void factorial(int);
int multiply(int[],int);
int size=1;
void factorial(int n){

	int result[10000];
	result[0]=1;
	for(int i=2;i<=n;i++){
		size=multiply(result,i);
	}
	cout<<"Factorial of given no. "<<n<<"is :-"<<endl;
	for(int i=size-1;i>=0;i--){
		cout<<result[i];
	}
}
int multiply(int result[],int a){
	int c=0,k=0;
	for(int i=0;i<size;i++){
		k=result[i]*a+c;
		result[i]=k%10;
		c=k/10;
	}
	while(c){
		result[size]=c%10;
		c=c/10;
		size++;
	}
	return size;
}
int main(){
	int n;
	cin>>n;
	factorial(n);
	return 0;
}