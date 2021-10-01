#include<stdio.h>
#include<iostream>
using namespace std;

void Nhap2so(int &a, int &b)
{
	cout<<"Nhap 2 so: ";
	cin>>a>>b;
}

int TinhTong(int a, int b)
{
	cout<<"Tong 2 so: "<<a + b;
	return a + b;
}

int main()
{
	int a, b, c;
	Nhap2so(a, b);
	c=TinhTong(a, b);
	return 0;
}