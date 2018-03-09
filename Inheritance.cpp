#include<iostream>
using namespace std;
class Parent {
	int a;
	public:
	int b;
	void get_ab(int a,int b){
		this->a=a;
		this->b=b;
		cout<<"A="<<a<<" B="<<b<<endl;
	}
};
class Child1 : public Parent{
	int x;
	public:
	int y;
	void get_xy(int x,int y){
		this->x=x;
		this->y=y;
		cout<<"X="<<x<<" Y="<<y<<endl;
	}
};
class Child2 : private Parent{
	int x;
	public:
	int y;
	void get_xy(int x,int y){
		this->x=x;
		this->y=y;
		cout<<"X="<<x<<" Y="<<y<<endl;
	}
};
main(){
	Child1 ob;
	ob.get_ab(100,200);
	ob.get_xy(300,400);
	Child2 ob2;
	//ob2.get_ab(500,600);
	ob2.get_xy(700,800);
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
