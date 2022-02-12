#include<stdio.h>
#include<string.h>
main()
{
	struct student
	{
		int roll,phone;
		char name[30];
		char address[50];
	}s[5];
	int k;
	for(k=0;k<5;k++)
	{
		printf("enter student name:");
		scanf("%s",s[k].name);
		printf("enter roll number:");
		scanf("%d",&s[k].roll);
		printf("enter phone number:");
		scanf("%d",&s[k].phone);
		printf("enter address:");
		scanf("%s",s[k].address);
	}
	for(k=0;k<5;k++)
	{
		printf("name:%s\n",s[k].name);
		printf("roll number:%d\n",s[k].roll);
		printf("phone number:%d\n",s[k].phone);
		printf("address:%s\n",s[k].address);
	}
}

