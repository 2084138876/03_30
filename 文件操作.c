#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <errno.h>

// ���ļ���
//int main()
//{
//	FILE* pf = fopen("C:\\Users\\20841\\Desktop\\test.txt", "r");//�� �� �ķ�ʽ���ļ�
//	// ����ʹ�þ���·�� ע��ʹ��\ת��·�����µ�\
//	// Ҳ����ʹ�����·������ʱ������򿪵��ļ�Ҫ��������̷���ͬһ���ļ�����
//	// fopen �򿪳ɹ������ص��� ָ�򱻴��ļ��� ָ��
//  //��ʧ�ܷ��ص���NULL��ָ��
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	fclose(pf);//�ر� pf ָ����ļ�
//	pf = NULL;
//	return 0;
//}

// д�ļ���
//int main()
//{
//	// ���ļ�
//	FILE* pf = fopen("C:\\Users\\20841\\Desktop\\test.txt", "w");
//	//  �� w ��ʽ���Ǹ���д�룬д������ݻḲ�Ǵ�֮ǰ�����ݣ�Ҫ�����ļ������������׷��Ҫʹ�� a
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}


//	// д�ļ�----д�ַ�fputc
//	//fputc('a', pf);// �� �ַ� a д�� pf ָ����ļ���
//	
//	// д�� ��ĸ a �� ��ĸ z
//	char i = 0;
//	for (i = 'a'; i <= 'z'; i++)// ascall ��ֵ
//	{
//		fputc(i, pf);//fputc��������д�ַ�,
//		// ��ʾ�� �ַ� iд��pfָ����ļ�
//	}
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

// ���ļ�------���ַ�fgetc
//int main()
//{
//	// ���ļ�
//	FILE*pf=fopen("C:\\Users\\20841\\Desktop\\test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");//��ӡ�ַ� fopen �ʹ�����Ϣ
//	}
//	// ���ļ�
//	// fgetc()����ÿ��ֻ�ܶ�ȡһ���ַ����ӣ��򿪺��ϴζ�ȡ��λ�ü�����ȡ
//	//int ch = fgetc(pf);//�õ�pfָ����ļ����ݣ������� ��ȡʧ���򷵻�EOF
//	//printf("%c\n", ch);//�ѵõ���������%c����ʽ��ӡ����
//	/*int ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	fclose(pf);
//	pf = NULL;*/
//
//	// ����forѭ����ȡ
//	//int ch = 0;
//	/*int i = 0;
//	for (i = 0; i < 26; i++)
//	{
//		ch = fgetc(pf);
//		if (ch != EOF)
//		{
//			printf("%c ", ch);
//		}
//	}
//	fclose(pf);
//	pf = NULL;*/
//
//	// whileѭ����ȡ
//	//int ch = 0;
//	//while ((ch = fgetc(pf) )!= EOF)
//	//{
//	//	// ��ȡ����
//	//	printf("%c ", ch);
//
//	//}
//
//
//	return 0;
//}


//// д�ļ�------дһ��fputs
//int main()
//{
//	FILE* pf = fopen("C:\\Users\\20841\\Desktop\\test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	// дһ������
//	fputs("hello xiaopohai\n", pf);
//	// ��ʾ�� �ַ��� hello xiaopihai д�뵽pfָ����ļ�����ȥ ,���һ���
//	fputs("hello xiaopohai\n", pf);
//	fputs("hello xiaopohai\n", pf);
//	fputs("hello xiaopohai\n", pf);
//
//	// �ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//// д�ļ�------׷��һ��fputs
//int main()
//{
//	FILE* pf = fopen("C:\\Users\\20841\\Desktop\\test.txt", "a");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	// дһ������
//	fputs("hello xiaopohai\n", pf);
//	// ��ʾ�� �ַ��� hello xiaopihai д�뵽pfָ����ļ�����ȥ ,׷�ӵ�����ļ�����󣬲��һ���
//	fputs("hello xiaopohai\n", pf);
//	fputs("hello xiaopohai\n", pf);
//	fputs("hello xiaopohai\n", pf);
//
//	// �ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

// ���ļ�------��һ������fgets
//int main()
//{
//	FILE* pf = fopen("C:\\Users\\20841\\Desktop\\test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	char arr[20];
//	fgets(arr, 5, pf);
//	// ��ʾ��pfָ����ļ���һ�ж�ȡ��arr���棬����ȡ��һ�е�5���ַ�
//	// ��ʵֻ��ȡ4���ַ�����ΪҪ�ڽ�β����һ��  '\0' ���ڱ�ʾ��β
//
//	// ��ȡ�ɹ������ش�Ŷ�ȡ���ݵĵ�ַ
//	// ��ȡʧ�ܷ���NULL��ָ��
//	printf("%s\n", arr);
//
//
//	// �ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


// ��ʽ�����뺯�� (д�� fprintf
// ����д���κ����͵�����

//struct S
//{
//	char name[20];
//	int age;
//	float score;
//};


//int main()
//{
//	struct S s = { "zhangsan",25,60.9f };
//
//
//	FILE* pf = fopen("C:\\Users\\20841\\Desktop\\test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	fprintf(pf, "%s %d %f", s.name, s.age, s.score);
//	// ��ʾ�� s.name,s.age,s.score �ֱ��� %s,%d,%f������д�� pf��ָ����ļ�
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

// ��ʽ�����뺯�� (��ȡ�� fscanf
// ���Զ�ȡ�κ����͵�����
//int main()
//{
//	struct S s = {0};
//
//
//	FILE* pf = fopen("C:\\Users\\20841\\Desktop\\test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	fscanf(pf,"%s %d %f", s.name, &(s.age), &(s.score));
//	// ��ʾ��ȡpf��ָ����ļ����ݣ����ҷֱ��� %s,%d,%f�����ͰѶ�ȡ��������д�� s.name,s.age,s.score 
//
//	// �鿴һ����û�зŽ�ȥ
//	printf("%s %d %f\n", s.name, s.age, s.score);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


// �Զ����Ƶ���ʽд���ļ� fwrite
//int main()
//{
//	struct S s = { "zhangsan",25,64.5f };
//	// �Զ�����д�����ʽ���ļ�
//	FILE* pf = fopen("C:\\Users\\20841\\Desktop\\test.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	// �����Ƶķ�ʽд
//	fwrite(&s,sizeof(struct S), 1, pf);
//	// ��ʾ�Զ����Ƶ���ʽд�룬д 1 ����СΪ sizeof(struct S) �����ݣ����ݵĵ�ַ�� &s  д�뵽pfָ����ļ�����
//
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

// �Զ����Ƶ���ʽ��ȡ�ļ� fread
//int main()
//{
//	struct S s = {0};
//	// �Զ�����д�����ʽ���ļ�
//	FILE* pf = fopen("C:\\Users\\20841\\Desktop\\test.txt", "rb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	// �����Ƶķ�ʽ��ȡ���ҽ���
//	fread(&s, sizeof(struct S), 1, pf);
//	// ��ʾ�Զ����Ƶ���ʽ��ȡpfָ����ļ����ݣ�����д 1 ����СΪ sizeof(struct S) �����ݵ� ��ַ s ָ�����������ȥ
//
//	// ��ӡ��һ��д��ȥs��û��
//	printf("%s %d %f\n", s.name, s.age, s.score);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//  sscanf() ��һ���ַ�����ת����һ����ʽ��������
//  sprintf() ��һ����ʽ��������ת�����ַ���

//struct S
//{
//	char name[20];
//	int age;
//	float score;
//};
//
//
//int main()
//{
//	struct S s = { "zhangsan",20,56.6f};
//	char buf[100] = { 0 };
//
//	//��s�еĸ�ʽ������ת�����ַ����ŵ�buf��
//	sprintf(buf, "%s %d %f", s.name, s.age, s.score); //  ������ַ���-->  "zhangsan 20 56.600000"
//	printf("%s\n", buf);// "zhangsan 20 56.600000"
//
//	// ���ַ���buf�л�ȡһ����ʽ�������ݵ�tmp��
//	//  �ŵ�tmp�����  name,age ,score��ȥ
//	struct S tmp = { 0 };
//	sscanf(buf, "%s %d %f", tmp.name, &(tmp.age), &(tmp.score));
//	printf("%s %d %f\n", tmp.name, tmp.age, tmp.score);
//
//
//	return 0;
//}

// fseek()�����������ļ�ָ���λ�ú�ƫ��������λ�ļ�ָ��
// fseek�ĵ�һ�������ļ�ָ�룬��ʾҪʹ�õ��ļ���ַ��FILE*����
// fseek�ĵڶ�������ƫ����������Ϊ���ƫ�ƣ�����Ϊ��ǰƫ��
// fseek�ĵ�����������ʼλ�ã�������ѡ��
//									SEEK_SET ���ļ�������ʼλ�ÿ�ʼ
//									SEEK_CUR ���ļ����ݵ�ǰλ�ÿ�ʼ
//									SEEK_END ���ļ����ݽ���λ�ÿ�ʼ

// ftell() �����������ļ�ָ�뵱ǰλ��������ļ���ʼλ�õ�ƫ����
// ftell ����ֻ��һ���������ļ�ָ��   FILE*����

// rewind()���������ļ�ָ���ί���ص��ļ�����ʼλ��
// rewind() ����ֻ��һ������ --->  �ļ�ָ��
//int main()
//{
//	FILE* pf = fopen("C:\\Users\\20841\\Desktop\\test.txt", "r");
//	if (pf==NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	// ���ļ�
//	// ��λ�ļ�ָ��
//	fseek(pf, 2, SEEK_SET);// ��ʾ��pfָ����ļ���  ��ʼλ��  ���ƫ��  2  ��λ�ÿ�ʼ��ȡ
//	// ���� �ļ������ǣ�  abcdefg
//	// ���Ե�ǰ�ļ�ָ��pfָ���λ���� c
//	int ch = fgetc(pf);// ��ʱ��ȡһ���ַ������� c
//	// ��ȡ��ɺ��ļ�ָ��ָ�� d
//	printf("%c\n", ch);
//	printf("%d\n",ftell(pf)); // ������ļ����ݵ���ʼλ�ã�ƫ������3
//
//	fseek(pf, 2, SEEK_CUR);// ��ʾ��pfָ����ļ���  ��ǰλ��   ���ƫ��  2 ��λ�ÿ�ʼ��ȡ
//	// �ϴζ�ȡ�Ѿ����� �ö�ȡ d ��
//	// ��ô���� pf ָ���λ���� d���ƫ������λ�ã����� f
//    ch = fgetc(pf);// ��ʱ��ȡһ���ַ�������f
//	printf("%c\n", ch);
//
//	fseek(pf, -1, SEEK_END);// ��ʾ��pfָ����ļ���  ���λ��   ��ǰƫ��   1 ��λ�ÿ�ʼ��ȡ
//	ch = fgetc(pf);// f
//	printf("%c\n",ch);
// 
//	rewind(pf);//��ʾ��pfָ����ļ���ָ�� ����Ϊ�ļ����ݵ���ʼλ��
//	ch = fgetc(pf);
//	printf("%c\n", ch);// a
//
//	// �ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
