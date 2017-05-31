    #include<stdio.h>
    int main()
    {
    	int t,n,m,u[100],v[100],k,i;
    	scanf("%d",&t);
    	for(k=0;k<t;k++)
    	{
    		scanf("%d%d",&n,&m);
    		for(i=0;i<m;i++)
    			scanf("%d%d",&u[i],&v[i]);
    		if((n-(2*m))%2==0)
    			printf("yes\n");
    		else
    			printf("no\n");
    	}
    	return 0;
    }
     