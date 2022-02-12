void perfect();
main()
{
	int n,i,r,x;
	scanf("%d",&n);
	r=0;
	x=n;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			r=r+i;
		}
	}
	if(n==x)
	printf("perfect number");
	else
	printf("not a perfect numeber");
}
