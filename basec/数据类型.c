/*
c的关键字共有32个
数据类型关键字（12个）
char, short, int, long, float, double, unsigned, signed, struct, union, enum, void
控制语句关键字(12个)
if，else，swicth, case, default, for, do, while, break, continue,goto, return 
存储类关键字（5个）
auto，extern(声明），register,static,const
其它关键字（3个）
sizeof,typedef,volatile(防止编译期变化的易变变量)
*/

#if 0

int main01(void) {
	//无符号整型数据
	unsigned int a = 10;
	//有符号整型数据
	signed int b = 20;
	printf(%u, a);
	return 0;
}

int main02(void) {
	//短整型 2字节
	short a = 10;
	//整型 windows为4字节，linux为4字节，8字节
	long b = 20;
	//长整形 8字节
	long long c = 20;
	printf("%hd\n", a);
	printf("%ld\n", b);
	printf("%lld\n", c);
	return 0;
}

int main03(void) {
	//字符型变量
	/*
	char ch = 'A';
	printf("%c", ch);
	return 0;
	*/
	char ch = 'B';
	ch = ch - 32;
	printf("%c", ch);

}

int main04(void){
	float pi;
	scanf("%f", &pi);

	//浮点数默认保留6位小数
	printf("%f", pi);
	printf("%.2f", pi);
	printf("%.3f".pi);

	double d = 23.244;
	printf("%lf", a);
	return 0;
}

//宏定义
#define PI 3.14
int main(void){
	//定义一个常量 const修饰的变量成为常量
	const float pi = 3.14;
	printf("%f/n", pi);

	//auto可以省略
	auto float t = 2;
	printf("%f/n", pi);
	return 0;
}
#endif