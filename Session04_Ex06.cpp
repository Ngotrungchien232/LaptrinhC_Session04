#include<stdio.h>
//kho vai chuong

int main() {
	
	//khai bao ham va bien 
	//so dien co the le len ta dung ham float
	float n, money;
	
	//yeu cau nguoi dung nhap vao so dien da dung 
	printf("Moi ban nhap vao so dien da su dung: ");
	
	//gan gia tri cho bien
	scanf("%f", &n);
	
	//tien hanh tinh tien dien
	//len su dung if else
	if(0 <= n && n < 50){
		money = n * 10.000;
		printf("Voi %f thi so tien ban phai tra la %f", n, money);
	} else if(50 <= n && n < 100){
		money = n * 15.000;
		printf("Voi %f thi so tien ban phai tra la %f", n, money);
	} else if(100 <= n && n < 150){
		money = n * 20.000;
		printf("Voi %f thi so tien ban phai tra la %f", n, money);
	} else if(150 <= n && n < 250){
		money = n * 25.000;
		printf("Voi %f thi so tien ban phai tra la %f", n, money);
	} else if(200 <= n){
		money = n * 30.000;
		printf("Voi %f thi so tien ban phai tra la %f", n, money);
	} else
	    printf("Dung nhap so am ban oi");
	
	//ket thuc chuong trinh
	return 0;

}
