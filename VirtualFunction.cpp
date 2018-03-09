#include<iostream>
using namespace std;
class Parent{
	public:
	virtual void display(){
		cout<<"I am Display form Base"<<endl;
	}
	virtual void show(){
		cout<<"I am Show from Base"<<endl;
	}
	//virtual void abc() = 0; //Pure Virtual Function can be defined in sub class or out of the class using scope resolution 
};
class Child : public Parent {
	public: 
	void display(){
		cout<<"I am Display from Child"<<endl;
	}
	void show(){
		cout<<"I am Show from Child"<<endl;
	}
};
int main(){
	Parent A,*BPTR;
	Child B;
	BPTR=&A;
	BPTR->display();
	BPTR->show();
	BPTR=&B;
	BPTR->display();
	BPTR->show();
	return 0;
}
