#include<stdio.h>
  void main()
{
	char ch;
	printf("Enter a Character:");
	ch=getchar();
	if(ch=='a')
	{
		printf("A is Vowel");
	}
	else if(ch=='e')
	{
		printf("E is vowel");
	}
	else if(ch=='i')
	{
		printf("I is vowel");
	}
	else if(ch=='o')
	{
		printf("O is vowel");
	}
	else if(ch=='u')
	{
		printf("U is vowel");
	}
	else
	{
		printf("%c is Consonant",ch);
	}
}
