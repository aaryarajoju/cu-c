#include<stdio.h>

struct student {
    char stu_name[20];
    float mst1_marks,mst2_marks;
    int total_lect, attended_lect;
};

int main() {

    int n,i;

    printf("Enter total no of students\n");
    scanf("%d",&n);

    struct student s[n];

    for(i=0;i<n;i++) {
        printf("Enter name of student\n");
        scanf("%s",s[i].stu_name);

        printf("Enter mst1 and mst2 marks\n");
        scanf("%f%f",&s[i].mst1_marks,&s[i].mst2_marks);

        printf("Enter total lectures and attended lectures\n");
        scanf("%d%d",&s[i].total_lect,&s[i].attended_lect);
    }

    int flag=0;

    for( i=0;i<n;i++) {

        float avg_marks= (s[i].mst1_marks+s[i].mst2_marks)/2;

        float attendance_pre= (float)s[i].attended_lect/s[i].total_lect;

        if(avg_marks<80.0f && attendance_pre<0.75f ) { 
            flag+=1;

            if(flag==1)
                printf("List of Detained Students:\n");
        
            printf("%s\n",s[i].stu_name);
        }
    }

    if(flag==0)
        printf("No student detained");

    return 0;
}
