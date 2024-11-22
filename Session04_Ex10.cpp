#include<stdio.h>

int main() {
	
	//yeu cau nhap 3 so nguyen 
	//tao 3 bien a, b, c tuong ung voi 3 so nguyen
	// tao them 3 bien num1, num2, num3 la 3 bien sau khi da sap xep theo thu tu tu nho den lon
	int a, b, c, sum, num2;
	
	//yeu cau nguoi dung nhap tu ban phim cac gia tri a, b, c
	printf("Moi ban nhap gia tri thu nhat: ");
	scanf("%d", &a);
	printf("Moi ban nhap gia tri thu hai: ");
	scanf("%d", &b);
	printf("Moi ban nhap gia tri thu ba: ");
	scanf("%d", &c);
	
	 // tim num2 
    sum = a + b + c;
    
	
	//sau do tim ra so lon nhat
	int num3 = a;
	if(b > num3){
		num3 = b;
	}if(c > num3){
		num3 = c;
	}
	
	//tim tiep ra so nho nhat
	int num1 = a;  
    if (b < num1) {
        num1 = b; 
    }if (c < num1) {
        num1 = c; 
    }
    
    
    num2 = sum - num1 - num3;
    
    /* //thu in ra xem so nao la so lon nhat, so nao la so be nhat
    printf("so lon nhat la: %d\n", num3);
    printf("so be nhat la: %d\n", num1); 
    printf("so o giua la: %d\n", num2); */ 
    
    
    
     //in ket qua ra man hinh
    printf("thu tu tu be den lon la: %d %d %d", num1, num2, num3); 
    
	
	return 0;
}
