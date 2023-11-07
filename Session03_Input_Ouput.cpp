//1. Nhap xuat phai dua thu vien stdio.h
#include <stdio.h>
//2. Chay chuong trinh phai co ham main
int main(){
	//In ra chuoi Rikkei Academy chao cac ban
	printf("%s chao cac ban\n","Rikkei Academy");
	//In ra ddiem toan, van, anh, diemtb cua hoc sinh
	float toan = 8.7, van = 5.8, anh = 9.6;
	printf("Diem Toan: %f - Diem Van: %f - Diem Anh: %f - Diem TB: %f\n",
			toan,van,anh,(toan+van+anh)/3);
	//Nhap vao nam sinh cua sinh vien
	//B1: Khao bao bien chua gia tri nam sinh
	int year;
	//B2: Thong bao nhap
	printf("Nhap vao nam sinh cua ban:");
	//B3: Lay gia tri nhap luu vao dia chi cua bien year
	scanf("%d",&year);
	
	//In ra gia tri nam sinh
	printf("Nam sinh vua nhap la: %d\n",year);
	//Nhap vao diem html, css, javascript cua sinh vien
	float html, css, javascript;
	printf("Nhap vao diem html, css, javascript:");
	scanf("%f %f %f",&html,&css,&javascript);
	printf("HTML: %f\tCSS: %f\tJavascript: %f\n",html,css,javascript);
	//xoa bo nho dem
	fflush(stdin);
	//Nhap va in ra gioi tinh cua sinh vien
	//B1: Khai bao bien chua gioi tinh
	char sex;
	//B2: Thong bao nhap
	printf("Nhap vao gioi tinh cua ban:");
	//B3: Lay ky tu nhap va luu vao bien sex
	sex = getchar();
	//In ra gioi tinh
	printf("Gioi tinh vua nhap: ");
	putchar(sex);
	
}
