#include<stdio.h>
#include<math.h>
#include<string.h>

struct mother {
   char name[50],work_status[50];
   int age,height;
};

struct father {
   char name[50],work_status[50];
   int age,height;
};

int main() {

    int n;

    printf("Enter total no. of students");
    scanf("%d",&n);

    struct mother m[5];
    struct father f[5];

    int i=0;

    for(i=0;i<n;i++) {
        printf("\nEnter name age height(in inches) work_status of %d student's mother\n",i+1);
        scanf("%s%d%d%s",m[i].name,&m[i].age,&m[i].height,m[i].work_status);

        printf("\nEnter name age height(in inches) work_status of %d student's father\n",i+1);
        scanf("%s%d%d%s",f[i].name,&f[i].age,&f[i].height,f[i].work_status);
    }

    int working_womens=0;

    for(i=0;i<n;i++) {
        if(!strcmp(m[i].work_status, "working"))
            working_womens++;

    }

    printf("\nNo. of working womens are%d",working_womens);

    if((((float)working_womens/n)*100)>70)
        printf("\nWomens are job oriented\n\n");

    float avg_diff=0,diff;

    for( i=0;i<n;i++) {
        diff=abs(m[i].height-f[i].height);
        avg_diff+=abs(m[i].height-f[i].height);

        if(diff>=10)
        printf("\n%s mismatches %s\n",m[i].name,f[i].name);
    }

    avg_diff/=n;

    printf("Average difference in the ages of mother and father is %f \n\n",avg_diff);

    return 0;
}
