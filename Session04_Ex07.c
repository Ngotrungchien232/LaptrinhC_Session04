#include<stdio.h>

int main() {
	
	//khai bao ham va bien 
	// nam len ta co the su dung int 
	int year;
	
	//yeu cau nguoi dung nhap vao nam ma ho muon
	printf("Moi ban nhap nam ma ban muon kiem tra: ");
	
	//gan tri tri cho bien year
	scanf("%d", &year);
	
	//tien hanh tinh xem co phai nam nhuan hay khong 
	// dung if else la du
	if((year % 4 ==0) || (year % 100 ==0 & year % 400 ==0)){
		printf("%d day la nam nhuan roi", year);
	} else{
		printf("%d day khong phai nam nhuan dau", year);
	}
	
	//ket thuc chuong trinh
	return 0;
}
