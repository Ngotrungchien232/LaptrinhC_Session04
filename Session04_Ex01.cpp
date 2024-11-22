#include<stdio.h>
//khai bao thu vien chuan trong c

int main() {
	//khai bao ham va bien 
	int n;
	
	//yeu cau nguoi dung nhap mot so nguyen tu ban phim
	printf("Moi ban nhap mot so nguyen: ");
	scanf("%d", &n);
	
	//sau do phan loai yeu cau cua de bai 
	  // dieu kien phan biet so am va so duong 
	  if(n > 0){
	  	printf("%d la so nguyen duong", n);
	} else {
		printf("%d la so nguyen am", n);
	}
	
	// sau do tien hanh hoan thien chuong trinh
	return 0;
}
