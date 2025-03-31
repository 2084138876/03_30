#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <errno.h>

// 打开文件：
//int main()
//{
//	FILE* pf = fopen("C:\\Users\\20841\\Desktop\\test.txt", "r");//以 读 的方式打开文件
//	// 可以使用绝对路径 注意使用\转义路径名下的\
//	// 也可以使用相对路径，此时这个被打开的文件要和这个工程放在同一个文件夹下
//	// fopen 打开成功，返回的是 指向被打开文件的 指针
//  //打开失败返回的是NULL空指针
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	fclose(pf);//关闭 pf 指向的文件
//	pf = NULL;
//	return 0;
//}

// 写文件：
//int main()
//{
//	// 打开文件
//	FILE* pf = fopen("C:\\Users\\20841\\Desktop\\test.txt", "w");
//	//  以 w 方式打开是覆盖写入，写入的内容会覆盖打开之前的内容，要保存文件本身的内容再追加要使用 a
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}


//	// 写文件----写字符fputc
//	//fputc('a', pf);// 把 字符 a 写进 pf 指向的文件中
//	
//	// 写入 字母 a 到 字母 z
//	char i = 0;
//	for (i = 'a'; i <= 'z'; i++)// ascall 码值
//	{
//		fputc(i, pf);//fputc函数用来写字符,
//		// 表示把 字符 i写入pf指向的文件
//	}
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

// 读文件------读字符fgetc
//int main()
//{
//	// 打开文件
//	FILE*pf=fopen("C:\\Users\\20841\\Desktop\\test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");//打印字符 fopen 和错误信息
//	}
//	// 读文件
//	// fgetc()函数每次只能读取一个字符，从，打开后，上次读取的位置继续读取
//	//int ch = fgetc(pf);//得到pf指向的文件内容，并返回 读取失败则返回EOF
//	//printf("%c\n", ch);//把得到的内容以%c的形式打印出来
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
//	// 采用for循环读取
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
//	// while循环读取
//	//int ch = 0;
//	//while ((ch = fgetc(pf) )!= EOF)
//	//{
//	//	// 读取正常
//	//	printf("%c ", ch);
//
//	//}
//
//
//	return 0;
//}


//// 写文件------写一行fputs
//int main()
//{
//	FILE* pf = fopen("C:\\Users\\20841\\Desktop\\test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	// 写一行数据
//	fputs("hello xiaopohai\n", pf);
//	// 表示把 字符串 hello xiaopihai 写入到pf指向的文件里面去 ,并且换行
//	fputs("hello xiaopohai\n", pf);
//	fputs("hello xiaopohai\n", pf);
//	fputs("hello xiaopohai\n", pf);
//
//	// 关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//// 写文件------追加一行fputs
//int main()
//{
//	FILE* pf = fopen("C:\\Users\\20841\\Desktop\\test.txt", "a");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	// 写一行数据
//	fputs("hello xiaopohai\n", pf);
//	// 表示把 字符串 hello xiaopihai 写入到pf指向的文件里面去 ,追加到这个文件的最后，并且换行
//	fputs("hello xiaopohai\n", pf);
//	fputs("hello xiaopohai\n", pf);
//	fputs("hello xiaopohai\n", pf);
//
//	// 关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

// 读文件------读一行数据fgets
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
//	// 表示把pf指向的文件的一行读取到arr里面，最多读取这一行的5个字符
//	// 其实只读取4个字符，因为要在结尾放入一个  '\0' 用于表示结尾
//
//	// 读取成功，返回存放读取内容的地址
//	// 读取失败返回NULL空指针
//	printf("%s\n", arr);
//
//
//	// 关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


// 格式化输入函数 (写） fprintf
// 可以写入任何类型的数据

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
//	// 表示把 s.name,s.age,s.score 分别按照 %s,%d,%f的类型写入 pf所指向的文件
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

// 格式化输入函数 (读取） fscanf
// 可以读取任何类型的数据
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
//	// 表示读取pf所指向的文件内容，并且分别按照 %s,%d,%f的类型把读取到的内容写入 s.name,s.age,s.score 
//
//	// 查看一下有没有放进去
//	printf("%s %d %f\n", s.name, s.age, s.score);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


// 以二进制的形式写入文件 fwrite
//int main()
//{
//	struct S s = { "zhangsan",25,64.5f };
//	// 以二进制写入的形式打开文件
//	FILE* pf = fopen("C:\\Users\\20841\\Desktop\\test.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	// 二进制的方式写
//	fwrite(&s,sizeof(struct S), 1, pf);
//	// 表示以二进制的形式写入，写 1 个大小为 sizeof(struct S) 的内容，内容的地址是 &s  写入到pf指向的文件里面
//
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

// 以二进制的形式读取文件 fread
//int main()
//{
//	struct S s = {0};
//	// 以二进制写入的形式打开文件
//	FILE* pf = fopen("C:\\Users\\20841\\Desktop\\test.txt", "rb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	// 二进制的方式读取并且接收
//	fread(&s, sizeof(struct S), 1, pf);
//	// 表示以二进制的形式读取pf指向的文件内容，并且写 1 个大小为 sizeof(struct S) 的内容到 地址 s 指向的内容里面去
//
//	// 打印看一下写进去s了没有
//	printf("%s %d %f\n", s.name, s.age, s.score);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//  sscanf() 从一个字符串中转化出一个格式化的数据
//  sprintf() 把一个格式化的数据转换成字符串

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
//	//把s中的格式化数组转换成字符串放到buf中
//	sprintf(buf, "%s %d %f", s.name, s.age, s.score); //  变成了字符串-->  "zhangsan 20 56.600000"
//	printf("%s\n", buf);// "zhangsan 20 56.600000"
//
//	// 从字符串buf中获取一个格式化的数据到tmp中
//	//  放到tmp里面的  name,age ,score中去
//	struct S tmp = { 0 };
//	sscanf(buf, "%s %d %f", tmp.name, &(tmp.age), &(tmp.score));
//	printf("%s %d %f\n", tmp.name, tmp.age, tmp.score);
//
//
//	return 0;
//}

// fseek()函数，根据文件指针的位置和偏移量来定位文件指针
// fseek的第一参数是文件指针，表示要使用的文件地址，FILE*类型
// fseek的第二参数是偏移量，正数为向后偏移，负数为向前偏移
// fseek的第三参数是起始位置，有三种选择：
//									SEEK_SET 从文件内容起始位置开始
//									SEEK_CUR 从文件内容当前位置开始
//									SEEK_END 从文件内容结束位置开始

// ftell() 函数，返回文件指针当前位置相对于文件起始位置的偏移量
// ftell 函数只有一个参数：文件指针   FILE*类型

// rewind()函数，让文件指针的委屈回到文件的起始位置
// rewind() 函数只有一个参数 --->  文件指针
//int main()
//{
//	FILE* pf = fopen("C:\\Users\\20841\\Desktop\\test.txt", "r");
//	if (pf==NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	// 读文件
//	// 定位文件指针
//	fseek(pf, 2, SEEK_SET);// 表示从pf指向的文件的  起始位置  向后偏移  2  个位置开始读取
//	// 假如 文件内容是：  abcdefg
//	// 所以当前文件指针pf指向的位置是 c
//	int ch = fgetc(pf);// 此时读取一个字符，就是 c
//	// 读取完成后，文件指针指向 d
//	printf("%c\n", ch);
//	printf("%d\n",ftell(pf)); // 相对于文件内容的起始位置，偏移量是3
//
//	fseek(pf, 2, SEEK_CUR);// 表示从pf指向的文件的  当前位置   向后偏移  2 个位置开始读取
//	// 上次读取已经到了 该读取 d 了
//	// 那么现在 pf 指向的位置是 d向后偏移两个位置，就是 f
//    ch = fgetc(pf);// 此时读取一个字符，就是f
//	printf("%c\n", ch);
//
//	fseek(pf, -1, SEEK_END);// 表示从pf指向的文件的  最后位置   向前偏移   1 个位置开始读取
//	ch = fgetc(pf);// f
//	printf("%c\n",ch);
// 
//	rewind(pf);//表示把pf指向的文件的指针 重置为文件内容的起始位置
//	ch = fgetc(pf);
//	printf("%c\n", ch);// a
//
//	// 关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
