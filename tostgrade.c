#include<stdio.h>
#incude<stdlib.h>
struct student {
 char name[10];
 int mid;
 int final;
};
main()
{
 int stu_num;
 int sum;
 float avg;
 struct student *str_ptr;

 printf(”학생 수는?”);
 scanf(”%d”, &stu_num);

 /*사용자가 입력한 수만큼 메모리 할당*/
 stu_ptr=(struct student *) malloc (stu_num * sizeof(struct student));
 /*메모리 할당에 실패할 경우*/
 if(stu_ptr == NULL) {
  printf(”메모리를 할당하지 못했습니다.”);
  exit(-1);
 }
 fflush(stdin);
 for(i=0; i<stu_num; i++){
  printf(”%d:번째 학생의 이름” , &stu_num);
 scanf(”%s”,  
