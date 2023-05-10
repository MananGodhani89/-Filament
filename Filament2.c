#include<stdio.h>

main()
{
	char E1[100]="manangodhani900@gmail.com";
	char pass[100]="manan_100";
	char E2[100];
	char P1[100];
	
	printf("Enter Your Email =>");
	gets(E2);
	printf("Enter Your password =>");
	gets(P1);
	
	if(strcmp(E1,E2)==0)
	{
		if(strcmp(pass,P1)==0)
		{
			printf("Successfully Login\n");
			printf("Welcome to the account");
		}
		else
		printf("plase cheak your password & try again  !");
	}
	else
	printf("plase  cheak your Email & try again !");
}
