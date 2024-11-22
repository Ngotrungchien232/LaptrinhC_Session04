#include<stdio.h>

int main() {
	
	//de bai yeu cau nhap vao mot thang ngau nhien va in ra so ngay co trong thang do tu 1 den 12
	
	    //ta khai bao ham va bien
	int n;
	
	
	//yeu cau nguoi dung nhap vao mot thang ngau nhien
	printf("Moi ban nhap vao mot thang trong nam /n");
	
	//gan gia tri vua nhap vao bien ta su dung trong chuong trinh 
	scanf("%d", &n);
	
	//cho nguoi dung nhap them nam
	int year;
	printf("Moi ban nhap vao nam ban muon check");
	scanf("%d", &year);
	
	//kiem tra nam 
	int isLeapYear(int year){
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1; // Nam nhu?n
    } else {
        return 0; // Không ph?i nam nhu?n
    }
}
	
	
	
	
	
	
	//tien hanh phan loai thang vua nhap co bao nhieu ngay 
	//trong bai nay ta len dung cau lenh switch case 
	
	switch(n){
		case 1:
		printf("%d co 31 ngay", n);
		break:
			
			
			//thang2 
	     if (isLeapYear(year)) {
                printf("Tháng 2 nam %d có 29 ngày (nam nhu?n).\n", year);
            } else {
                printf("Tháng 2 nam %d có 28 ngày (nam không nhu?n).\n", year);
            }
            break:
			
			
			
			
			
			
			
			//thang3
		case 3:
		printf("%d co 31 ngay", n);
		break:
			//thang4
		case 4:
		printf("%d co 30 ngay", n);
		break:
			//thang5
		case 5:
		printf("%d co 31 ngay", n);
		break:
			//thang6
		case 6:
		printf("%d co 30 ngay", n);
		break:
			//thang7
		case 7:
		printf("%d co 31 ngay", n);
		break:
			//thang8
		case 8:
		printf("%d co 31 ngay", n);
		break:
			//thang9
		case 9:
		printf("%d co 30 ngay", n);
		break:
			//thang10
		case 10:
		printf("%d co 31 ngay", n);
		break:
			//thang11
		case 11:
		printf("%d co 30 ngay", n);
		break:
			//thang12
		case 12:
		printf("%d co 31 ngay", n);
		break:
	}
	return 0;
	
}
