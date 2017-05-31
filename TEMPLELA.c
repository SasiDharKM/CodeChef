#include<stdio.h>
int main()
{
	int s, n, h[250],i,c,j,k,a,b,z[250],f;
	scanf("%d",&s);
	for(i=0;i<s;i++)
	{
		scanf("%d",&n);
		f=0;
		for(j=0;j<n;j++)
			scanf("%d",&h[j]);
		if(n%2==0)
			printf("no\n");
		else
		{
			a=n/2;
			for(b=0;b<=a;b++)
				z[b]=b+1;
			b--;
			for(c=a+1;c<n;c++)
			{
				z[c]=b;
				b--;
			}
			for(b=0;b<n;b++)
				if(h[b]==z[b])
					continue;
				else
					f=1;
			if(f==0)
				printf("yes\n");
			else
				printf("no\n");
		}
	}
	return 0;
}