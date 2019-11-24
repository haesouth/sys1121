#include <stdio.h>
#include <unistd.h>
#include <sys/times.h>

int main()
{
	double cticks;
	clock_t tcstart, tcend;
	struct tms tmstart, tmend;
	int i, a=1, b=2, c;

	if((tcstart = times(&tmstart)) == -1) {
		perror("Failed to get start time");
		exit(1);
	}
	printf("Fraciton of CPU time used if %d\n", tcstart);
	printf("CPU time spnent executing process is %d\n", tmstart.tms_utime);
	printf("CPU time spnent in the system is %d\n", tmstart.tms_utime);
	for(i=0; i<10000000; i++)
		c = a + b;
	if((tcend = times(&tmend)) == -1) {
			perror("Failed to get start time");
			exit(1);
	}
	printf("Fraciton of CPU time used if %d\n", tcend);
	printf("CPU time spnent executing process is %d\n", tmend.tms_stime);
	printf("CPU time spnent in the system is %d\n", tmend.tms_stime);
	cticks = tmend.tms_utime + tmend.tms_stime - tmstart.tms_utime - tmstart.tms_stime;
	printf("Total CPU time is %f seconds.\n", cticks/100.);
	printf("Fraciton of CPU time used if %d\n", cticks/(tcend - tcstart));
}
