#include<stdio.h>

int main(){
    int n, i=0,max=0,counter=0,l[2],m=0;
    int frequency[4]={0,0,0,0};

    printf("Hello Sir/Ma'am\n This survey is regarding the common issue we all face,\n Many a times we get late reaching the railway station\n And face a dilemma deciding whether to get ticket first or rush to train\n So, below given are some options please fill most preferable");

    char a='a', ch, ar[][60]={"Rush to train to catch it and inform T.T at next stop",
        "Catch the train and perform journey without ticket",
        "Purchase ticket first otherwise wait for next train",
        "Miss the train and take ticket for next train"};

    printf("\n\n Enter the no of people to take survey from:");
    scanf("%d", &n);

    for(i=0;i<4;i++){
        printf("%c. %s\n", a, ar[i]);
        a++;
    }

    i=0;

    do{
        printf("enter your choice: ");
        scanf("\n%c", &ch);

        if(ch=='a'){
            frequency[0]++;
        } else if(ch=='b'){
            frequency[1]++;
        } else if(ch=='c'){
            frequency[2]++;
        } else if(ch=='d'){
            frequency[3]++;
        } else{
            printf("invalid choice");
        }

        i++;
    } while(i<n);

    printf("\nFrequencies of option a,b,c,d are:");

    for(i=0;i<4;i++){
        printf("%d ",frequency[i]);
    }

    for(i=0;i<4;i++){
        if(max<frequency[i]){
            max=frequency[i];
        }
    }

    for(i=0;i<4;i++){
        if(frequency[i]%max<1&&frequency[i]!=0){
            ++counter;
        }
    }

    if(counter==1){
        for(i=0;i<4;i++){
            if(max==frequency[i]){
                printf("\nMost of the people will %s",ar[i]);
            }
        }
    } else if(counter==2){
        for(i=0;i<4;i++){
            if(max==frequency[i]){
                l[m]=i;
                m++;
            }
        }
        printf("\npeople will either %s or %s",ar[l[0]],ar[l[1]]);
    } else{
        printf("\nNo conclusion");
    }

    return 0;
}