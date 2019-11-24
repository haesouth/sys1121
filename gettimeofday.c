#include <stdio.h>
#include <sys/time.h>

main()
{
	struct timeval tv;
	struct timezone tz;
	int ret;

	ret=gettimeofday(&tv, &tz);
	if(ret == 0){
		printf("time = %u.%06u, minuteswest = %d, dsttime = %d\n", tv.tv_sec, tv.tv_usec, tz.tz_minuteswest, tz.tz_dsttime);
	}else{
		perror("gettimeofdat() failed.\n");
		exit(1);
	}
}
