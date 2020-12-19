#include <stdio.h>
#include <stdlib.h>

char name[50];
int emp_id;
int num_work_days;
char doj[10];
int salary;
long long contact_num;
char designation[15];
char deptt[20];
int mon_salary;

void input_data() {

    printf("Enter name of the Employee:");
    scanf("%s", name);

    printf("Enter emp_id of the Employee:");
    scanf("%d", &emp_id);

    printf("Enter number of working days:");
    scanf("%d", &num_work_days);

    printf("Enter date of joining:");
    scanf("%s", doj);

    printf("Enter salary:");
    scanf("%d", &salary);

    printf("Enter contact_num:");
    scanf("%lld", &contact_num);

    printf("Enter designation:");
    scanf("%s", designation);

    printf("Enter deptt:");
    scanf("%s", deptt);

    printf("\nName is:%s",name);
    printf("\nEmployee ID is:%d", emp_id);
    printf("\nNumber of working days are:%d", num_work_days);
    printf("\nDate of joining is:%s", doj);
    printf("\nSalary is:%d", salary);
    printf("\ncontact_num is:%lld", contact_num);
    printf("\ndesignation is:%s", designation);
    printf("\ndeptt is:%s", deptt);
}

void calc_salary() {
    mon_salary=salary/30*num_work_days;
}

void display() {
    int deduct;

    printf("\n\nMonthly salary of %s is:%d",name,mon_salary);

    printf("\n\nEnter the deductions of salary if any(in Rs):");
    scanf("%d",&deduct);

    mon_salary = mon_salary - deduct;

    printf("\nMonthly salary of %s is:%d",name,mon_salary);
}

int main() {

    input_data();

    calc_salary();

    display();

    return 0;
}
