#include<stdio.h>
#include<iostream>
using namespace std;

static int count = 0;

void p(){
	count++;
	if(count<=100){
		cout<<"Hello"<<count<<endl;
		p();
	}
}
int main(){
	p();
	return 0;
}
