#include <stdio.h>
struct book//对结构体进行定义，相当于定义了一个大变量，
{
	char name[20];//结构体由若干个变量构成
	int price;
	int quantity;
};//结尾记得加分号表示定义完成
int main()
{
	struct book b={"c plan",20,10};//声明变量：struct book（变量类型），b（变量名）={（对结构体里每一个变量进行赋值）}
	struct book*p=&b;
	b.price=5;//对结构体里的单一变量进行操作,声明的变量.结构体里的变量ps：好像不太适用于数组
	b.quantity=40;
	printf("name=%s\n",b.name);//对其打印
	printf("price=%d\n",b.price);
	printf("quantity=%d\n",b.quantity);
	


	(*p).price=1000;//等价于b.price,p*使用的时候记得加括号
	p->quantity=1000;//p指向结构体中的quantity，p是结构体b的地址，再指向其中的变量进行赋值
	printf("price=%d",p->price);
	printf("quantity=%d\n",(p*).quantity);




	return 0;
}