#include<stdio.h>

int main() {
	
	//de bai yeu cau so nguyen ta co the dung ham int
	int n;
	
	//tien hanh cho nguoi dung nhap tu ban phim
	printf("Moi ban nhap mot so nguyen tu ban phim: ");
	
	//gan gia tri n vua nhap cho bien
	scanf("%d", &n);
	
	//phan loai xem dau la so chan, dau la so le
	if(n % 2 == 0) {
		printf("%d la so chan", n);
	}else{
		printf("%d la so le", n);
	}
	
	//ket thuc chuong trinh
	return 0;
}
