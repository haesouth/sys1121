#include<stdio.h>
#include<stdlib.h>

main()
{
	char c, *ptr;
	int count;
	ptr = NULL;

	count = 0;
	while((c=getchar())!='\n'){
		if(count == 0)
			ptr = (char*)malloc(1);
		else
			ptr = (char*)realloc(ptr, count+1);
		*(ptr+count)=c;
		count++;
	}
	*(ptr+count)='\0';

	printf(" input character: %s memory:%d\n", ptr, count);
	free(ptr);
}
