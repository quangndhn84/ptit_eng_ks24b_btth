#include <stdio.h>
int main(){
	//B1. Nhap 3 so nguyen
	//--B1.1. Khai bao 3 bien so nguyen
	int firstNumber, secondNumber, thirthNumber;
	//--B1.2. Thong bao nhap
	printf("Nhap vao 3 so nguyen:");
	//--B1.3. Nhap 3 so nguyen va luu gia tri vao cac bien
	scanf("%d %d %d",&firstNumber,&secondNumber,&thirthNumber);
	//B2. Tinh tong va trung binh 3 so nguyen
	//--B2.1. Tinh tong
	int sum = firstNumber + secondNumber + thirthNumber;
	//--B2.2. Tinh trung binh
	float avgNumber = (float)sum/3;
	//B3. In ra 3 so nguyen, tong va trung binh
	//--B3.1. In ra 3 so nguyen
	printf("%d %d %d\n",firstNumber,secondNumber,thirthNumber);
	//--B3.2. In ra tong
	printf("Tong: %d\n",sum);
	//--B3.3. In ra trung binh
	printf("Trung binh: %f\n",avgNumber);	
	
}
