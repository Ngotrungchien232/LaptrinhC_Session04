#include<stdio.h>

int main() {
	
	//khai bao ham va bien can su dung 
	//la so nguyen dung int 
	int n;
	
	//yeu cau nguoi dung nhap mot so nguyen tu ban phim 
	printf("Moi ban nhap mot so tu ban phim: ");
	
	//gan gia tri vua nhap cho bien da su dung trong chuong trinh
	scanf("%d", &n);
	
	//tien hanh phan loai va in ra xem co % cho 3 hoac 5 và ca 3,5 khong
	 
	/* switch(n){
		case n % 3 == 0:
		printf("%d chia het cho 3");
		break;
		case n % 5 ==0:
		printf("%d chia het cho 5");
		break;
		case n % 3 ==0 && n % 5 ==0:
		printf("%d chia het cho ca 3 va 5");
		break;
		default:
	    printf("So ban nhap khong chia het cho ca 3 va 5");
		
	} */
	
	//su dung if moi lam duoc bai nay 
	if(n % 5 ==0 && n % 3 ==0){
		printf("%d chia het cho ca 3 va 5");
	} else if(n % 5 == 0){
		printf("%d chia het cho 5");
	} else if(n % 3 == 0){
		printf("%d chia het cho 3");
	} else {
		printf("So ban vua nhap khong chia het cho ca 3 va 5");
	}
	
	//ket thuc chuong trinh
	return 0;
	
}
