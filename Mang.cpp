#include<stdio.h>
#include<iostream>
using namespace std;

void Nhapmang(int n, int a[])
{
	for(int i=0; i<n; i++)
	{
		cout<<"a["<<i<<"]= ";
		cin>>a[i];
	}
}

void xuatmang(int n, int a[])
{
	
	cout<<"Mang phan tu: ";
	for(int i=0; i<n; i++)
	{
		cout<<a[i]<<"\t";
	}
}

int main()
{
	int n, a[100];
	n=10;
	Nhapmang(n, a);
	xuatmang(n, a);
	return 0;
}