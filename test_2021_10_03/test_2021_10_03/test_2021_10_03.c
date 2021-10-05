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

	int arr[10] = { 0 };//10個元素

	int n = 10;
	int arr2[n] = { 0 };//n是變量的, 這裡不行

	return 0;
}