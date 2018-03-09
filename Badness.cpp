#include<iostream>
using namespace std;
int badness(int,int);
int main(){

	int t,i=0,R,K,vb=0;
	cin>>t;
	while(i<t){
		cin>>R>>K;
		vb=badness(R,K);
		cout<<vb<<endl;
		vb=0;
		i++;
	}
	return 0;
}
int badness(int x,int y){

	int bin[18],s=0,k,rem,f=0;
	for(int i=5;i<=x;i++){
		k=i;
		while(k){
			rem=k%2;
			bin[s++]=rem;
			k=k/2;
		}
		int count=0;
		for(int j=0;j<(s-2);j++){
			int p=0;
			for(int z=j;z<(j+3);z++){
				p=p*10+bin[z];
				if(p==101) count++;
			}
		}
		if(count>=y) f++;
		s=0;
	}
	return f;
}

