#include<iostream>
#include<string>
using namespace std;
int main(){
	int t,i=0,g=0,q;
	string elements[100];
	cin>>t;
	q=t+1;
	while(i<q){
		getline(cin,elements[i]);
		i++;
	}
	string str=elements[1];
	int l=0;
	while(str[l]!='\0'){
		int j,k,count=1,flag=0;
		for(j=2;j<q;j++){
			flag=0;
			string str1=elements[j];
			for(k=0;str1[k]!='\0';k++){
				if(str.at(l)==str1.at(k)){
					count++;
					flag=1;
					break;
				}
			}
			if(flag==0) break;
		}
		if(count==t){
			g++;
		}
		l++;
		
	}
cout<<g;
return 0;			
}

