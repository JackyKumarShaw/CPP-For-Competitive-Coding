#include<iostream>
using namespace std;
class Parent {
	int a;
	public:
	int b;
	protected:
	int c;
	public:
	void get_abc(int a,int b,int c){
		this->a=a;
		this->b=b;
		this->c=c;
		cout<<"A="<<a<<" B="<<b<<" C="<<c<<endl;
	} 
};
class Child1 : public Parent{
	int x;
	public:
	int y;
	void get_xyc(int x,int y,int c){
		this->x=x;
		this->y=y;
		this->c=c;
		cout<<"X="<<x<<" Y="<<y<<" C="<<c<<endl;
	}
};
class Child2 : private Parent{
	int x;
	public:
	int y;
	void get_xyc(int x,int y,int c){
		this->x=x;
		this->y=y;
		this->c=c;
		cout<<"X="<<x<<" Y="<<y<<" C="<<c<<endl;
	}
};
class Child3 : protected Parent{
	int x;
	public:
	int y;
	void get_xyc(int x,int y,int c){
		this->x=x;
		this->y=y;
		this->c=c;
		cout<<"X="<<x<<" Y="<<y<<" C="<<c<<endl;
	}
};
main(){
	Child1 ob1;
	Child2 ob2;
	Child3 ob3;
	ob1.get_abc(100,200,300);
	ob1.get_xyc(400,500,600);
	//ob2.get_ab(700,800,900);
	ob2.get_xyc(1000,1100,1200);
	//ob3.get_ab(1300,1400,1500);
	ob3.get_xyc(1600,1700,1800);
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
