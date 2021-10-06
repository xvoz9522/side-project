#include <stdio.h>

//int GOD = 2021;

//int main()
//{
//	printf("1:%d\n", GOD);
//	printf("good\n"); 
//	{
//		printf("2:%d\n", GOD);
//		int a = 10;
//		printf("a = %d\n", a);
//	}
//	printf("3:%d\n", GOD);
//	return 0;
//
//}

//extern int GOD;
//
//int main() {
//	printf("%d\n", GOD);
//
//	return 0;
//}

//常量
#define MAX 10000
int main() {
	//1.字面常量
	//3.14;
	//10;
	//"a";
	//"abc";

	//2. const修飾的常量
	//const int num = 10;//變量就是常變量 - 具有常屬性(不能改變的屬性)
	//num = 20;
	//printf("num = %d\n", num);//20

	//int arr[10] = { 0 };//10個元素

	//const int n = 10;
	//int arr2[n] = { 0 };//n是變量的, 這裡不行


	//3. #define 定義的標示符常量
	//MAX =20000;//err
	int n = MAX;
	printf("n = %d\n", n);
	return 0;
}