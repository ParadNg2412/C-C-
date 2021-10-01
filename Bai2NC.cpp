#include<stdio.h>
#include<conio.h>
#include<string.h>
#define MAX 100

typedef struct Student
{
	int ID;
	char Name[50];
	char NgaySinh[10];
	float Mark;
}Stu;

void Nhap1sv(Stu &s)
{
	printf("MSSV: "); scanf("%d", &s.ID);
	fflush(stdin);
	printf("Ho ten: "); gets(s.Name);
	printf("Ngay sinh: "); gets(s.NgaySinh);
	printf("Diem thi: "); scanf("%f", &s.Mark);
}

void Xuat1sv(Stu s)
{
	printf("MSSV: %d\n", s.ID);
	printf("Ho ten: %s\n", s.Name);
	printf("Ngay sinh: %s\n", s.NgaySinh);
	printf("Diem thi: %.2f\n", s.Mark);
}

void NhapDSSV(Stu s[], int n)
{
	for(int i=0; i<n; i++)
	{
		printf("\nSinh vien thu %d:\n", i);
		Nhap1sv(s[i]);
	}
}

void XuatDSSV(Stu s[], int n)
{
	for(int i=0; i<n; i++)
	{
		printf("Sinh vien thu %d:\n", i);
		Xuat1sv(s[i]);
	}
}

int DemSVtren8(Stu s[], int n)
{
	int d=0;
	for(int i=0; i<n; i++)
	{
		if(s[i].Mark>8)
			d++;
	}
	return d;
}

void SortSV(Stu s[], int n)
{
	Stu d;
	for(int i=0; i<n; i++)
	{
		for(int j=0; i<n; j++)
		{
			d=s[i];
			s[i]=s[j];
			s[j]=d;
		}
	}
	printf("\nMang sau khi sap xep: \n");
	XuatDSSV(s, n);
}

int main()
{
	Stu s[MAX];
	int n=3;
	NhapDSSV(s, n);
	XuatDSSV(s, n);
	int d=DemSVtren8(s, n);
	printf("So sinh vien co diem tren 8: %d", d);
	SortSV(s, n);
	return 0;
}
