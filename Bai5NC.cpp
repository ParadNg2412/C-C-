#include<stdio.h>
#include<conio.h>

void Nhap(int &n)
{
	printf("\nNhap vào so n: ");
 	scanf("%d", &n);
}

float TinhBT(int n)
{
	int i=1;
	float s=0;
	while(i<=n)
	{
		s = s + i * i * i;
		i++;
	}
	return s;
}

int main()
{
	int n;
	Nhap(n);
	float s=TinhBT(n);
	printf("Gia tri bieu thuc: %f", s);
	return 0;
}
