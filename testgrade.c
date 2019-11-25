#include<stdio.h>
#include<stdlib.h>

struct student{
	char name[10];
	int mid;
	int final;
};

main()
{
	int stu_num, i;
	int sum;
	float avg;
	struct student *stu_ptr;

	printf("학생 수는?");
	scanf("%d", &stu_num);

	/*사용자가 입력한 수만큼 메모리 할당*/
	stu_ptr = (struct student *)malloc( stu_num * sizeof(struct student));
	 /*메모리 할당에 실패할 경우*/
	if(stu_ptr == NULL) {
		printf("메모리를 할당하지 못했습니다.");
		exit(-1);
	}

	fflush(stdin);
	for(i=0; i<stu_num; i++){
		printf("%d번째 학생의 이름", i+1);
		scanf("%s", stu_ptr[i].name);
		printf("%d번째 학생의 mid final:", i+1);
		scanf("%d%d", stu_ptr[i].mid, &stu_ptr[i].final);
		fflush(stdin);
	}
	printf("grade list\n");
	printf("=========================================\n");
	printf("name 1th 2th grade avg\n");
	printf("=========================================\n");

	for(i=0; i<stu_num; i++){
		sum=stu_ptr[i].mid + stu_ptr[i].final;
		avg=sum/2;


	printf("%s %d %d %d %4.2f\n", stu_ptr[i].name, stu_ptr[i].mid, stu_ptr[i].final, sum, avg);
	}
	printf("==========================================\n");
	free((struct student*)stu_ptr);
}


