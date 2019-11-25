#include<stdio.h>
#include<string.h>

int main()
{
	char srcstr[] = "This is a test string";
	char dststr[25], *ptr;
	int ret;

	memcpy (dststr, srcstr, strlen(srcstr)+1);
	printf("dststr is \"%s\"\n", dststr);

	memeset (srcstr + 5, 'a', 5);
	
	ret = memscmp (srcstr, dststr, strlen(srcstr));
	if(ret>0) printf("srcstr is greater than dststr.\n");
	else if (ret == 0) printf("srcstr is equal to dststr.\n");
	else printf("srcstr is less than dststr.\n");

	ptr = memchr(dststr, "", strlen(dststr));
	if(ptr !=NULL)
		printf("First space was at position%d.\n", ptr-dststr+1);
	else
		printf("Space was not found.\n");
}
