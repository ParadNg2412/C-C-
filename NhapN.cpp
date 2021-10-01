#include<stdio.h>
#include<iostream>
using namespace std;

void Nhap(int &n)
{
	do{
		cout<<"Nhap n: ";
		cin>>n;
	}while(n<=0);
}

int main()
{
	int n;
	Nhap(n);
	cout<<n;
	return 0;
}