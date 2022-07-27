#include <stdio.h>

// 字符指针

// 两种用指针打印字符串的方法
//int main()
//{
//	char arr[] = "abcdef";
//	char* pc = arr;      // 把首元素地址传给pc
//	printf("%s\n", arr);   // 从首元素地址开始打印
//	printf("%s\n", pc);		// 从首元素地址开始打印
//	return 0;
//}

//int main()
//{
//	char* p = "abcdef";     // "abcdef"是一个常量字符串（不能改,准确写法加const），
//	// 这里是将字符串首字母首字母的地址赋给了 p
//	//*p = 'W';
//	//printf("%s\n", p);     // 这种写法是错误的
//	printf("%c\n", *p);   // 打印的是'a',解引用时得到首字母
//	printf("%s\n", p);    // 从首字母地址处开始打印，打印到'\0'就停止了
//	return 0;
//}
// www.stackoverflow.com   网站
// segmentfault.com        网站 （段错误）

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "acbdef";    // arr1和arr2存在不同的内存空间中
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";   //是常量字符串，又一模一样，且不可被修改
//	// 所以不必在内存中开辟两个空间来存储它们，所以它们存在于同一个空间
//	// 所以p1和p2里面存的是同一个地址，所以p1和p2相同
//	if (arr1 == arr2)//这里的arr1和arr2是首元素地址，两内存空间不同，则首元素地址也不相同
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}                // 打印 haha
//	
//	if (p1 == p2) 
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

// 指针数组   -是数组,用来存放指针

//int main()
//{
//	int arr[10] = { 0 };  // 整形数组
//	char ch[5] = {0};     // 字符数组
//	int* parr[4];         // 存放整形指针的数组
//	char* pch[5];		  // 存放字符指针的数组
//	return 0;
//}

int main()
{
	int arr1[] = { 1,2,3,4,5,6 };
	int arr2[] = { 2,3,4,5,6,7 };
	int arr3[] = { 3,4,5,6,7,8 };
	int* parr[] = { arr1,arr2,arr3 };    // 存的是上面三者arr首元素的地址
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 6; j++)  
		{
			printf("%d ", *(parr[i] + j));
			// parr[i]+j（地址+ j,依次是后面元素的地址）访问的是arr中每一个元素
		}
		printf("\n");
	}
	return 0;
}