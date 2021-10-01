#include<stdio.h>
#include<iostream>
using namespace std;

void nhap(int &a)
{
	cout<<"Nhap 1 so:";
	cin>>a;
}
void xuat(int a)
{
	if(a>0)
	{
		cout<<"So da nhap:"<<a;
	}
}
int main()
{
	int a;
	nhap(a);
	xuat(a);
	return 0;
}