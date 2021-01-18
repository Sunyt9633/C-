#include<stdio.h>
//int main()//主函数
//{
//	printf("hello world\n");
//		return 0;
//}
//int main()
//{
	//char ch ='A';//y英文的符号才好用
	//printf("%c\n", ch);
	//short int ;
	//long num = 100;
//	printf("%d\n", num);
//	float f = 5.0;
//	printf("%f\n", f);
//	double d = 3.14;
//	printf("%lf\n", d);
//	int age = 20;
//	printf("%d\n", age);
//	return 0;
//}
//int main()
//{
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	return 0;
//}
//int main()
//{
//	short age = 20;
//	float weight = 45.5f;
//	char ch = 'c';
//	return 0;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;//必须在前面定义好
//	printf("输入两个操作数:>");
//	scanf_s("%d%d", &num1, &num2);//必须是定义过的名字写在&后；scanf_s比较安全
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}
int main()
{
	extern int g_val;
	printf("g_val = %d\n", g_val);
	return 0;
}