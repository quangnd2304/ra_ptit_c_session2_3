#include <stdio.h>
int main(){
	int number1 = 10;
	int number2 = 10;
	int number3 = number1++;//number3 = 10, number1 = 11
	int number4 = ++number1;//number1 = 12, number4 = 12
	//number1 = 10, number2=10, number3=11, number4=10--> dung
	//number1 = 10, number2=10, number3=10, number4=11--> gio tay
	//number1 = 10, number2=10, number3=10, number4=10 --> Nam Son
	//number1 = 10, number2=10, number3=11, number4=11
	printf("number1=%d - number2=%d - number3=%d - number4=%d\n",
		number1, number2, number3, number4);
	// true && true --> true
	// true && false --> false
	// false && false --> false
	
	//true || true --> true
	//true || false --> true
	//false || false --> false
	float firstNumber = 10;
	int secondNumber = (int)8.7;
	
}
