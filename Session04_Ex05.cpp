#include<stdio.h>

int main() {
	
	//khai bao ham va bien 
	//3 so nguyen ta co the dung int 
	int a, b, c;
	
	//yeu cau nguoi dung nhap tu ban phim
	printf("Moi ban nhap so a");
	scanf("%d", &a);
	printf("Moi ban nhap so b");
	scanf("%d", &b);
	printf("Moi ban nhap so c");
	scanf("%d", &c);
	
	//phan loai de bai bai nay ta len dung if else
	if(c > a && c < b){
		printf("%d thoa man de bai", c);
	} else{
		printf("%d khong thoa man de bai", c);
	}
	
	//ket thuc chuong trinh
	return 0;
}
