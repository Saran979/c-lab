int armstrong();
main()
{
	int i=0,p,r,l,x;
	scanf("%d",&x);
	r=x;
	for(x>0;p=x%10;x=x/10)
	{
		i=i+(p*p*p);
	}
	if(i==r)
	{
		printf("armstrong number");
	}
	else
	{
		printf("not a armstrong number");
	}
}
