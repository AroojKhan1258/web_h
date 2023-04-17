//Student name is Arooj Aslam. Reg no is SP23-bcs-026
#include<stdio.h>
int main(){
    float average; //take average in float
    float hours,hours_for_1st_employee,hours_for_2nd_employee,hours_for_3rd_employee,hours_for_4th_employee,hours_for_5th_employee,hours_for_6th_employee,hours_for_7th_employee,hours_for_8th_employee,hours_for_9th_employee,hours_for_10th_employee;
    int rate,rate_per_hours_for_1st_employee,rate_per_hours_for_2nd_employee,rate_per_hours_for_3rd_employee,rate_per_hours_for_4th_employee,rate_per_hours_for_5th_employee,rate_per_hours_for_6th_employee,rate_per_hours_for_7th_employee,rate_per_hours_for_8th_employee,rate_per_hours_for_9th_employee,rate_per_hours_for_10th_employee;
    float rang, rang1,rang2, rang3, rang4, rang5, rang6,rang7, rang8, rang9,rang10;// express ranges in float
    printf("Enter hours worked by 1st employee : \n"); //take hours worked by 1st employee
    scanf("%f", &hours);
    printf("Enter rate_per_hour by 1st employee : \n"); //take rate per hour for 1st employee
    scanf("%f", &rate);
    rang1= hours_for_1st_employee*rate_per_hours_for_1st_employee;
    printf("rang for 1st employee is:%d\n", rang1);
   printf("Enter hours worked by 2nd employee  : \n"); //take hours worked by 2nd employee
    scanf("%f", &hours);
    printf("Enter rate_per_hour by 2nd employee : \n");//take rate per hour for 2nd employee
     scanf("%f", &rate);
    rang2=hours_for_2nd_employee*rate_per_hours_for_2nd_employee;
     printf("rang for 2nd employee is:%d\n", rang2);
   printf("Enter hours worked by 3rd employee : \n");//enter hours for 3rd employee
    scanf("%f", &hours);
    printf("Enter rate_per_hour by 3rd employee : \n");//enter rate per 3rd hour
    scanf("%f", &rate);
    rang3=hours_for_3rd_employee*rate_per_hours_for_3rd_employee;
     printf("rang for 3rd employee is:%d\n", rang3);
   printf("Enter hours worked by 4th employee  : \n"); //enter hour for 4th employee
    scanf("%f", &hours);
    printf("Enter rate_per_hour by 4th employee : \n");//enter rate for 4th employee
    scanf("%f", &rate);
    rang4=hours_for_4th_employee*rate_per_hours_for_4th_employee;
     printf("rang for 4th employee is:%d\n", rang4);
   printf("Enter hours worked by 5th employee  : \n");// enter hours for 5th employee
    scanf("%f", &hours);
    printf("Enter rate_per_hour by 5th employee : \n");//enter rate for 5th employee
    scanf("%f", &rate);
    rang5=hours_for_5th_employee*rate_per_hours_for_5th_employee;
     printf("rang for 5th employee is:%d\n", rang5);
   printf("Enter hours worked by 6th : \n");//enter hours for 6th employee
    scanf("%f", &hours);
    printf("Enter rate_per_hour by 6th employee : \n");//enter rate for 6th employee
    scanf("%f", &rate);
    rang6=hours_for_6th_employee*rate_per_hours_for_6th_employee;
    printf("rang for 6th employee is:%d\n", rang6);
   printf("Enter hours worked by 7th employee  : \n");//enter hour for 7th employee
    scanf("%f", &hours);
    printf("Enter rate_per_hour by 7th employee : \n");//enter rate for 7th employee
    scanf("%f", &rate);
    rang7=hours_for_7th_employee*rate_per_hours_for_7th_employee;
     printf("rang for 7th employee is:%d\n", rang7);
   printf("Enter hours worked by 8th employee : \n");//enter hour  for 8 employee
    scanf("%f", &hours);
    printf("Enter rate_per_hour by 8th employee : \n");//enter rate for 8 employee
    scanf("%f", &rate);
    rang8=hours_for_8th_employee*rate_per_hours_for_8th_employee;
     printf("rang for 8th employee is:%d\n", rang8);
   printf("Enter hours worked by 9th employee  : \n");//enter hour  for 9 employee
    scanf("%f", &hours);
    printf("Enter rate_per_hour by 9th employee : \n");//enter rate for 9 employee
    scanf("%f", &rate);
    rang9=hours_for_9th_employee*rate_per_hours_for_9th_employee;
     printf("rang for 9th employee is:%d\n", rang9);
   printf("Enter hours worked by 10th : \n");//enter hour  for 10th employee
    scanf("%f", &hours);
    printf("Enter rate_per_hour by 10th employee : \n");//enter rate for 10th employee
    scanf("%f", &rate);
    rang10=hours_for_10th_employee*rate_per_hours_for_10th_employee;//range for 10th employee
     printf("rang for 10th employee is:%d\n", rang10);
    rang = rang1+rang2+rang3+rang4+rang5+rang6+rang7+rang8+rang9+rang10;//calculate the sum of all ranges of 10 employees
    printf(" sum of rang of 10 employees:%d\n", rang);
     average= (float)rang/10; // calculate the average
     printf("the average is :%d\n", average);//print the average
if(rate=>500 && rate<=5000){

     printf("Print the maximum hours worked by any employee\n");}// print the no of highest salary
     return 0;
}
