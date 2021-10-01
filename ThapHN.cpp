#include<stdio.h>
#include<conio.h>

void TowerHN(int n , char a, char b, char c ){
    if(n==1){
        printf("\t%c-------%c\n",a,c);
        return;
    }
    TowerHN(n-1,a,c,b);
    TowerHN(1,a,b,c);
    TowerHN(n-1,b,a,c);
    }
int main(){
    char a='A', b='B', c='C';
    int n;
    printf("Nhap n: ");
    scanf("%d",&n);
    TowerHN(n,a,b,c);
}
