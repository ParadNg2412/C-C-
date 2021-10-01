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

long TongMang(int n, int a[])
{
	if (n < 0)
    	return 0;
	else
     	return a[n] + TongMang(n-1, a);
}

float TinhTBC(int n, int a[])
{
	long s=TongMang(n, a);
	float tbc=s/n;
	return tbc;
}

int main()
{
	int n, a[100];
	n=10;
	Nhapmang(n, a);
	xuatmang(n, a);
	long s=TongMang(9, a);
	cout<<"\n";
	cout<<"Tong cac phan tu: "<<s;
	float tbc=TinhTBC(n, a);
	cout<<"\n";
	cout<<"Trung binh cong: "<<tbc;
	return 0;
}