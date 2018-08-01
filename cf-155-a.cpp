#include<stdio.h>
#include<string.h>
int main()
{
	char name1[20],name2[20],temp[20];
	int n,i;
	scanf("%s%s",&name1,&name2);
	scanf("%d",&n);
	printf("%s %s\n",name1,name2);
	for(i=0;i<n;i++){
		scanf("%s",&temp);
		if(strcmp(temp,name1)==0){
			scanf("%s",&name1);
		}
		else{
			scanf("%s",&name2);
		}
		printf("%s %s\n",name1,name2);
	}
	return 0;
}
