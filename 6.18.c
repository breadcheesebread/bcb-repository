#include <stdio.h>
struct book//�Խṹ����ж��壬�൱�ڶ�����һ���������
{
	char name[20];//�ṹ�������ɸ���������
	int price;
	int quantity;
};//��β�ǵüӷֺű�ʾ�������
int main()
{
	struct book b={"c plan",20,10};//����������struct book���������ͣ���b����������={���Խṹ����ÿһ���������и�ֵ��}
	struct book*p=&b;
	b.price=5;//�Խṹ����ĵ�һ�������в���,�����ı���.�ṹ����ı���ps������̫����������
	b.quantity=40;
	printf("name=%s\n",b.name);//�����ӡ
	printf("price=%d\n",b.price);
	printf("quantity=%d\n",b.quantity);
	


	(*p).price=1000;//�ȼ���b.price,p*ʹ�õ�ʱ��ǵü�����
	p->quantity=1000;//pָ��ṹ���е�quantity��p�ǽṹ��b�ĵ�ַ����ָ�����еı������и�ֵ
	printf("price=%d",p->price);
	printf("quantity=%d\n",(p*).quantity);




	return 0;
}