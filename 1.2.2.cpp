#include<stdio.h>
#include<string.h>
#define MAX 100

typedef struct Book
{
	int ID;
	char Name[50];
	float price;
}Book;

void Nhap1Sach(Book &b)
{
	/*printf("Ma sach: "); scanf("%d", &b.ID);
	fflush(stdin);
	printf("Ten sach: "); gets(b.Name);*/
	printf("Gia sach: "); scanf("%f", &b.price);
	printf("\n");
}

void Xuat1Sach(Book b)
{
	printf("Ma sach: %d\n", b.ID);
	printf("Ten sach: %s\n", b.Name);
	printf("Gia sach: %.2f\n", b.price);
}

void NhapSL(int &n)
{
	printf("Nhap so luong sach: "); scanf("%d", &n);
}

void NhapList(int n, Book b[])
{
	for(int i=0; i<n; i++)
	{
		printf("Sach thu %d: \n", i);
		Nhap1Sach(b[i]);
	}
}

void XuatList(int n, Book b[])
{
	for(int i=0; i<n; i++)
	{
		printf("Sach thu %d: \n", i);
		Xuat1Sach(b[i]);
	}
}

void swap (Book &x,Book &y)
{
	Book t=x;
	{
		x=y;
		y=t;
	}
}

void sort (Book b[], int n)
{
	for(int i = 0 ; i<n-1 ;i++)
	{
		for(int j= i+1; j<n;j++)
		{
			if(b[i].ID>b[j].ID)
			{
				swap(b[i],b[j]);
			}
		}
	}
}

int searchTT(Book b[], int n, int X)
{
	for(int i=0; i<n; i++)
	{
		if(b[i].ID==X)
		{
			return i;
		}
	}
	return -1;
}

int searchNP(Book b[], int n, int X)
{
	int L=0, R=n-1;
	int M;
	while(L<=R)
	{
		M=(L+R)/2;
		if(b[M].ID==X)
		{
			return M;
		}
		if(b[M].ID<X)
		{
			L=M+1;
		}
		else
		{
			R=M-1;
		}
	}
	return -1;
}

void timSachTenY (Book b[], int n, char Y[])
{
	 
	for(int i=0; i<n; i++)
	{
		if(strcmp(b[i].Name, Y)==0)
		{
			Xuat1Sach(b[i]);
		}
	}
} 

float TimMax (Book b[], int n)
{
	float m= b[0].price;
	for (int i=1;i<n;i++)
	{
		if(b[i].price>m)
		{
			m=b[i].price;
				
		}
	}
	return m;
}

float dqTinhTong(Book b[], int n)
{
	float s=0;
	if(n==0)
		return s;
	return b[n-1].price + dqTinhTong(b, n-1);
}

int main()
{
	Book b[MAX];
	char Y[MAX];
	int n, X;
	//Nhap1Sach(b);
	//Xuat1Sach(b);
	NhapSL(n);
	NhapList(n, b);
	XuatList(n, b);
	sort(b, n);
	/*printf("\nNhap ma sach can tim: ");
	scanf("%d", &X);
	int vttt=searchTT(b, n, X);
	if(vttt==-1)
	{
		printf("Khong tim thay sach");
	}
	else
	{
		printf("Thong tin sach tim duoc: ");
		XuatList(n, b);
	}
	int vtnp=searchNP(b, n, X);
	if(vtnp==-1)
	{
		printf("Khong tim thay Sach");
	}
	else
	{
		printf("Thong tin sach tim duoc: ");
		XuatList(n, b);
	}
	printf("Moi nhap danh sach sach Y : "); 
	gets(Y);
	gets(Y);
	printf("Cac Sach co ten %s gom: \n",Y);
	timSachTenY( b, n, Y);*/
	/*float timvtmax=TimMax(b, n);
	printf("\nGia tien lon nhat: %.2f", timvtmax);*/
	float s=dqTinhTong(b, n);
	printf("Tong gia tien: %.2f", dqTinhTong);
	return 0;
}