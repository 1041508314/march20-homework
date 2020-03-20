#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h> 
//#include <stdlib.h> 
//	 int main()
// {
//		 int a, b, c, t;
//		 printf("请输入三个数：\n");
//		 scanf("%d%d%d", &a, &b, &c);
//		 if (a<b)
//		 {
//			 t = a; a = b; b = t;
//		 }
//		 if (a<c)
//		 {
//			 t = a; a = c; c = t;
//		 }
//		 if (b<c)
//		 {
//			 t = b; b = c; c = t;
//		 }
//		 printf("%d %d %d\n", a, b, c);
//		 return 0;
//	 }
//#include<stdio.h>
//void main()
//{
//	int i;
//	for (i = 1; i < 100; i++);
//	{
//		if
//		(i % 3 == 0)
//		printf("%3d", i);
//	else
//		continue;
//     }
// }
//#include <stdio.h>
// void main()
// {
//	 int i;
//	 for (i = 1; i<100; i++)
//	 {
//		 if (i % 3 == 0)
//			 printf("%d\n", i);
//		 else
//			 continue;
//	 }
// }
//

//#include <stdio.h>
//
//#include <stdlib.h>
//int main()
//{
//  int tmp, a, b;
//  printf("请输入两个整数:\n");
//  scanf("%d%d", &a, &b);
//  while (a%b != 0)
//  {
//  tmp = a%b;//取余
//  a = b;//交换a，b可避免a比b小
//  b = tmp;
//  }
//  printf("%d\n", b);
//  return 0;
//}
 //#include <stdio.h>
 //void main()
 //{
	// int i;
	// for (i = 1000; i<=2000; i++)
	// {
	//	 if (((i % 4 == 0) && (i % 100 != 0)) || (i % 400 == 0))
 //            printf("%d\n", i);
	//	 else
	//		 continue;
	// }
 //}
#include<stdio.h>
int main()
{
	int i, j, t;
	for (i = 100; i <= 200; i++)
	{
		t = i / 2;
		for (j = 2; j <= t; j++)
		{
			if (i%j == 0)
				break;
		}
		if (j>t)
			printf("%d ", i);
	}
	printf("\n");
	return 0;
}