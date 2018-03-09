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
	Student(Student &s){
		roll=s.roll;
		name=s.name;
	}
	void show(){
		cout<<"Roll "<<roll<<" Name "<<name<<endl;
	}
};
int main(){
	Student ob,ob1(34,"Jacky");
	Student ob3(ob1);
	ob1.show();
	ob3.show();
	
}
	
