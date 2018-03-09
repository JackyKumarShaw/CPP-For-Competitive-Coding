#include<iostream>
using namespace std;
class Student{
	int roll;
	string name;
	public:
	Student(){
		cout<<"Student Created"<<endl;
	}
	Student(int roll,string name){
		this->roll=roll;
		this->name=name;
	}
	void show(){
		cout<<"Roll "<<roll<<" Name "<<name<<endl;
	}
};
int main(){
	Student ob,ob1(34,"Jacky");
	ob1.show();
}

