#include <stdio.h>

int i=0, n=1;

union Patient{
    char name[10];
    int patient_id;
    char group[2];
    long long int contact;
    char disease[10];
    int DOA;
}patient[5];

void AddPatient(){
    for(i=0; i<n; i++){
        printf("\t Patient name =");
        scanf("%s", patient[i].name);

        printf("\t Patient ID =");
        scanf("%d", &patient[i].patient_id);

        printf("\t Blood Group =");
        scanf("%s", patient[i].group);

        printf("\t Contact =");
        scanf("%lld", &patient[i].contact);

        printf("\t Disease =");
        scanf("%s", patient[i].disease);

        printf("\t Date of Admission =");
        scanf("%d", &patient[i].DOA);
    }
}

void PrintPatient(){

    printf("Patient Record:\n\n");

    for(i=0; i<n; i++){
        printf("\t Patient name = %s", patient[i].name);
        printf("\t Patient ID = %d", patient[i].patient_id);
        printf("\t Blood Group = %s", patient[i].group);
        printf("\t Contact = %lld", patient[i].contact);
        printf("\t Disease = %s", patient[i].disease);
        printf("\t Date of Admission = %d", patient[i].DOA);
    }
}

int main(){

    AddPatient();
    PrintPatient();

    return 0;
}
