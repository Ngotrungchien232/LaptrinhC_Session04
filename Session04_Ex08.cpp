#include<stdio.h>

int main() {
	
	//khai bao ham va bien
	//3 canh cua tam giac co the le len ta dùng float 
	float a, b, c;
	
	//sau do yeu cau nguoi dung nhap tu ban phim 3 canh cua tam giac
	printf("Moi ban nhap canh thu nhat cua tam giac: ");
	scanf("%f", &a);
	printf("Moi ban nhap canh thu hai cua tam giac: ");
	scanf("%f", &b);
	printf("Moi ban nhap canh thu ba cua tam giac: ");
	scanf("%f", &c);
	
	//kiem tra xem co thoa man la ba canh cua tam giac khong 
	//ta len su dung cau lenh if else
	if(a + b > c && a + c > b && c + b > a){
		printf("%d %d %d la ba canh cua tam giac", a, b, c);
	}else{
		printf("%d %d %d khong la ba canh cua tam giac", a, b, c);
	}
	
	//ket thuc chuong trinh
		return 0;
	
}
