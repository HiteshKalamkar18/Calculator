#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the value of a & b");
	scanf("%d%d",&a,&b);
//	printf("Enter your choice:");
	c=a+b;
	printf("Sum is %d\n",c);
	c=a-b;
	printf("substraction is %d\n",c);
	c=a*b;
	printf("multiplication is %d\n",c);
	c=a/b;
	printf("division is %d\n",c);
	//switch(int)
	//{
	//	case 1:{
	//		c=a+b;
	//		printf("sum is %d",c);
	//	      }break;
	//	case 2:{
	//		c=a-b;
	//		printf("substraction is %d",c);
	//	      }break;
	//	case 3:{
	//		c=a*b;
	//		printf("multiplication is %d",c);
	//	      }break;
	//	case 4:{
	//		c=a/b;
	//		printf("division is %d:",c);
	//	      }break;
	//	default:{
	//			printf("Enter the correct choice");
	//		}break;
	//}
	return 0;
}
