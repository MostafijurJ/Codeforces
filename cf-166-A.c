#include<stdlib.h>
#include<stdio.h>
int main()
{
	int n,k,i,j,count,g,h;
	int p[60],t[60];
	scanf("%d%d",&n,&k);
	count=0;
	for(i=0;i<n;i++)
		scanf("%d%d",&p[i],&t[i]);
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(p[i]<p[j]||(p[i]==p[j]&&t[i]>t[j]))
			{
				g=p[i];
				p[i]=p[j];
				p[j]=g;
				h=t[i];
				t[i]=t[j];
				t[j]=h;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(p[i]==p[k-1]&&t[i]==t[k-1])
			count++;
	}
	printf("%d\n",count);
	return 0;
}
