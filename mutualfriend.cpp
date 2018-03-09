#include<iostream>
using namespace std;
class Ram;
class Ravan{
	int x[5];
	public:
	void getdata(){
		cout<<"Enter the values:"<<endl;
		for(int i=0;i<5;cin>>x[i++]);
	}
	friend void Sita(Ram,Ravan);
};
class Ram{
	int x[5];
	public:
	void getdata(){
		cout<<"Enter the values:"<<endl;
		for(int i=0;i<5;cin>>x[i++]);
	}
	friend void Sita(Ram,Ravan);
};
int main(){
	Ram good;
	Ravan bad;
	good.getdata();
	bad.getdata();
	Sita(good,bad);
	return 0;
}
void Sita(Ram good,Ravan bad){
	int x[5],i;
	for(i=0;i<5;cout<<good.x[i++]<<"\t");
	cout<<"\n";
	for(i=0;i<5;cout<<bad.x[i++]<<"\t");
	for(i=0;i<5;x[i]=good.x[i]+bad.x[i++]);
	cout<<"\n";
	for(i=0;i<5;cout<<x[i++]<<"\t");
}
	


	
