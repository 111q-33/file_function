#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<errno.h>
// FILE * fopen ( const char * filename, const char * mode );
//int main()
//{
//	int i = 0;
//	char n = 0;
//	FILE* pf = fopen("ten.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n",strerror(errno));
//	}
//	for (n = 'a'; n < 'z'; n++)
//	{
//		fputc(n, pf);
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int fgetc( FILE *stream );
//int main()
//{
//	FILE*pf = fopen("ten.txt", "r");
//	if (pf == NULL)
//	{
		//printf("%s\n", strerror(errno));
		//return 1;
//	}
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		printf("%c ", ch);
//	}
//	return 0;
//}


//int fputs( const char *string, FILE *stream );


//int main()
//{
//	FILE* pf = fopen("ten.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	fputs("hello world\n", stdout);
//	fputs("hello bit\n", pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//char *fgets( char *string, int n, FILE *stream );
//int main()
//{
//	char ch[1024] = { 0 };
//	FILE*pf = fopen("ten.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	/*fgets(ch, 5, pf);*/
//	while (fgets(ch, 100, pf) != NULL)
//	{
//		printf("%s", ch);
//	}
//	while (fgets(ch, 100, stdin) != NULL)
//	{
//		printf("%s", ch);
//	}
//	printf("%s\n", ch);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int fprintf(FILE *stream, const char *format[, argument]...);

struct stu
{
	char name[10];
	int age;
	int poi;
};
//int main()
//{
//	struct stu s = { "zhangsan", 20, 60 };
//	FILE*pf = fopen("ten.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	fprintf(pf, "%s %d %d", s.name, s.age, s.poi);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int fscanf( FILE *stream, const char *format [, argument ]... );

//int main()
//{
//	struct stu s = { 0 };
//	FILE*pf = fopen("ten.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	fscanf(pf, "%s %d %d", s.name, &s.age, &s.poi);
//	printf("%s %d %d\n", s.name, s.age, s.poi);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int sprintf( char *buffer, const char *format [, argument] ... );
//int sscanf( const char *buffer, const char *format [, argument ] ... );

int main()
{
	struct stu s = { "zhangsan", 22, 60 };
	struct stu s1 = { 0 };
	char p[100];
	sprintf(p, "%s %d %d", s.name, s.age, s.poi);
	sscanf(p, "%s %d %d", s1.name,&s1.age,&s1.poi);
	printf("字符串方式打印：%s\n", p);
	printf("结构体方式打印：%s %d %d\n", s1.name, s1.age, s1.poi);
	return 0;
}