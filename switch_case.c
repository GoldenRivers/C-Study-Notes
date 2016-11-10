switch 需要注意的地方:
1 switch(*argv[1])
2 case 需要加单引号

#include <stdio.h>

void fun1()
{
	printf("hello!\n");
}

void fun2()
{
	printf("nice to meet you\n");
}

void fun3()
{
	printf("world\n");
}


int main(int argc, char *argv[])
{
	if(argc != 2)
	{
		printf("usage: ./a.out num\n");
		return -1;
	}
	printf("%s\n",argv[1]);
	switch(*argv[1])
	{
		case '1':
			fun1();
			break;
		case '2':
			fun2();
			break;
		case '3':
			fun3();
			break;
		default:
			printf("hahahahhaah\n");
			break;
	}
	return 0;
}
