#include<iostream>
using namespace std;
class Complex{
	int real,img;
	public:
	void getdata(int real,int img){
		this->real=real;
		this->img=img;
	}
	Complex operator +(Complex c){
		real=real+c.real;
		img=img+c.img;
		return *this;
	}
	Complex operator -(Complex c){
		real=real-c.real;
		img=img-c.img;
		return *this;
	}
	Complex operator *(Complex c){
		real=(real*c.real)-(img*c.img);
		img=(real*c.img)+(img*c.real);
		return *this;
	}
	Complex operator /(Complex c){
		real=((real*c.real)+(img*c.img))/(c.real*c.real+c.img*c.img);
		img=((img*c.real)-(real*c.img))/(c.real*c.real+c.img*c.img);
		return *this;
	}
	void putdata(){
		cout<<"The Result is : "<<this->real<<" + ("<<this->img<<")i"<<endl;
	}
};
int main(){
	Complex ob1,ob2,ob3,ob4,ob5,obt;
	ob1.getdata(5,6);
	ob2.getdata(7,8);
	ob3.getdata(4,9);
	ob4.getdata(10,7);
	ob5.getdata(19,8);
	obt=ob1+ob2*ob3-ob4/ob5;
	obt.putdata();
}
	
	
		
