#include <stdio.h>

// �ַ�ָ��

// ������ָ���ӡ�ַ����ķ���
//int main()
//{
//	char arr[] = "abcdef";
//	char* pc = arr;      // ����Ԫ�ص�ַ����pc
//	printf("%s\n", arr);   // ����Ԫ�ص�ַ��ʼ��ӡ
//	printf("%s\n", pc);		// ����Ԫ�ص�ַ��ʼ��ӡ
//	return 0;
//}

//int main()
//{
//	char* p = "abcdef";     // "abcdef"��һ�������ַ��������ܸ�,׼ȷд����const����
//	// �����ǽ��ַ�������ĸ����ĸ�ĵ�ַ������ p
//	//*p = 'W';
//	//printf("%s\n", p);     // ����д���Ǵ����
//	printf("%c\n", *p);   // ��ӡ����'a',������ʱ�õ�����ĸ
//	printf("%s\n", p);    // ������ĸ��ַ����ʼ��ӡ����ӡ��'\0'��ֹͣ��
//	return 0;
//}
// www.stackoverflow.com   ��վ
// segmentfault.com        ��վ ���δ���

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "acbdef";    // arr1��arr2���ڲ�ͬ���ڴ�ռ���
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";   //�ǳ����ַ�������һģһ�����Ҳ��ɱ��޸�
//	// ���Բ������ڴ��п��������ռ����洢���ǣ��������Ǵ�����ͬһ���ռ�
//	// ����p1��p2��������ͬһ����ַ������p1��p2��ͬ
//	if (arr1 == arr2)//�����arr1��arr2����Ԫ�ص�ַ�����ڴ�ռ䲻ͬ������Ԫ�ص�ַҲ����ͬ
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}                // ��ӡ haha
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

// ָ������   -������,�������ָ��

//int main()
//{
//	int arr[10] = { 0 };  // ��������
//	char ch[5] = {0};     // �ַ�����
//	int* parr[4];         // �������ָ�������
//	char* pch[5];		  // ����ַ�ָ�������
//	return 0;
//}

int main()
{
	int arr1[] = { 1,2,3,4,5,6 };
	int arr2[] = { 2,3,4,5,6,7 };
	int arr3[] = { 3,4,5,6,7,8 };
	int* parr[] = { arr1,arr2,arr3 };    // �������������arr��Ԫ�صĵ�ַ
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 6; j++)  
		{
			printf("%d ", *(parr[i] + j));
			// parr[i]+j����ַ+ j,�����Ǻ���Ԫ�صĵ�ַ�����ʵ���arr��ÿһ��Ԫ��
		}
		printf("\n");
	}
	return 0;
}