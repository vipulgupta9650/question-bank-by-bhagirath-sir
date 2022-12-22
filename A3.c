//program to print total marks and percentage obtained by a student in three subjects
#include <stdio.h>
int main()
{
   float marks_in_subject_one , marks_in_subject_two , marks_in_subject_three;
   printf("enter the marks of 3 subjects");
   scanf("%f%f%f",&marks_in_subject_one,&marks_in_subject_two,&marks_in_subject_three);
   float total_marks;
   printf("enter the total marks");
   scanf("%f",&total_marks);
   float overall_marks = (marks_in_subject_one + marks_in_subject_two + marks_in_subject_three);
   printf("your overall marks in 3 subjects is %f out of %f",overall_marks,total_marks);
   printf("your total percentage is %f",overall_marks*100/total_marks);




    return 0;
}//this is an important question