#include<stdio.h>
   void main()
{
	float marks,per;
	printf("Enter your total marks");
	scanf("%f",&marks);
	per=(marks/700)*100;
	printf("Percentage=%f\n",per);
	if(per>=80)
	{
		printf("you got distinction\n");
	}
	else if(per>=60 && per<79)
	{
		printf("you got first division\n");
	}
	else if(per>=45 && per<59)
	{
		printf("you got Second division\n");
	}
	else if(per>=32 && per<44)
	{
		printf("You got third division\n");
	}
	else
	{
		printf("You Failed");
	}
}
