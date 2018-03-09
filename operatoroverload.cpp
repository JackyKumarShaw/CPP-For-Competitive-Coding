#include<iostream>
using namespace std;
class Complex{
	int real,img;
	public:
	void getdata(int real,int img){
		this->real=real;
		this->img=img;
	}
	Complex add(Complex c){
		this->real=this->real+c.real;
		this->img=this->img+c.img;
		return *this;
	}
	void operator -(){
		real=-real;
		img=-img;
	}
	void putdata(){
		cout<<"The Sum is : "<<this->real<<" + ("<<this->img<<")i"<<endl;
	}
};
int main(){
	Complex ob1,ob2,ob3,obt;
	ob1.getdata(5,6);
	ob2.getdata(7,8);
	ob3.getdata(4,9);
	obt=ob1.add(ob2);
	ob1=obt.add(ob3);
	-obt;
	obt.putdata();
}
	
	
		
