/*
c�Ĺؼ��ֹ���32��
�������͹ؼ��֣�12����
char, short, int, long, float, double, unsigned, signed, struct, union, enum, void
�������ؼ���(12��)
if��else��swicth, case, default, for, do, while, break, continue,goto, return 
�洢��ؼ��֣�5����
auto��extern(��������register,static,const
�����ؼ��֣�3����
sizeof,typedef,volatile(��ֹ�����ڱ仯���ױ����)
*/

#if 0

int main01(void) {
	//�޷�����������
	unsigned int a = 10;
	//�з�����������
	signed int b = 20;
	printf(%u, a);
	return 0;
}

int main02(void) {
	//������ 2�ֽ�
	short a = 10;
	//���� windowsΪ4�ֽڣ�linuxΪ4�ֽڣ�8�ֽ�
	long b = 20;
	//������ 8�ֽ�
	long long c = 20;
	printf("%hd\n", a);
	printf("%ld\n", b);
	printf("%lld\n", c);
	return 0;
}

int main03(void) {
	//�ַ��ͱ���
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

	//������Ĭ�ϱ���6λС��
	printf("%f", pi);
	printf("%.2f", pi);
	printf("%.3f".pi);

	double d = 23.244;
	printf("%lf", a);
	return 0;
}

//�궨��
#define PI 3.14
int main(void){
	//����һ������ const���εı�����Ϊ����
	const float pi = 3.14;
	printf("%f/n", pi);

	//auto����ʡ��
	auto float t = 2;
	printf("%f/n", pi);
	return 0;
}
#endif