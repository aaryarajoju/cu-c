//PRACTICAL 3.3
/*Amba, Aambika and Ambalika have money in the ratio x:y:z. All go to market and spend money in ratio p:q:r. 
Total money they have initially is Rs. N. After spending money in the market who has maximum amount left with?*/

#include <stdio.h>

int main (){
    
    float initialRatioAmba, initialRatioAambika, initialRatioAmbalika;
    float initialAmba, initialAambika, initialAmbalika;
    float totalMoney;
    float spentRatioAmba, spentRatioAambika, spentRatioAmbalika;
    float spentAmba, spentAambika, spentAmbalika;
    float savedRatioAmba, savedRatioAambika, savedRatioAmbalika;
    float savedAmba, savedAambika, savedAmbalika;
    float x, y, z;

    printf("\nEnter the total amount of money that they had before spending - $");
    scanf("%f", &totalMoney);

    printf("Enter the ratio of money that they had (in the format x:y:z) - ");
    scanf("%f:%f:%f", &initialRatioAmba, &initialRatioAambika, &initialRatioAmbalika);

    printf("Enter the ratio of money that they spent (in the format p:q:r) - ");
    scanf("%f:%f:%f", &spentRatioAmba, &spentRatioAambika, &spentRatioAmbalika);
   
    printf("Enter the ratio of money that they saved (in the format g:h:i) - ");
    scanf("%f:%f:%f", &savedRatioAmba, &savedRatioAambika, &savedRatioAmbalika); 


    x = totalMoney / (initialAmba + initialAambika + initialAmbalika);

    initialAmba = x * initialRatioAmba;
    initialAambika = x * initialRatioAambika;
    initialAmbalika = x * initialRatioAmbalika;


    if ((spentRatioAmba/spentRatioAmba) != (savedRatioAmba/savedRatioAambika)){
        
        y = ((savedRatioAmba * (-initialRatioAambika)) - (savedRatioAambika * (-initialRatioAmba))) / ((spentRatioAmba * savedRatioAambika) - (spentRatioAambika * savedRatioAmba));
        z = ((spentRatioAambika * (-initialRatioAmba)) - (spentRatioAmba * (-initialRatioAambika))) / ((spentRatioAmba * savedRatioAambika) - (spentRatioAambika * savedRatioAmba));

        spentAmba = y * spentRatioAmba;
        spentAambika = y * spentRatioAambika;
        spentAmbalika = y * spentRatioAmbalika;

        savedAmba = z * savedRatioAmba;
        savedAambika = z * savedRatioAambika;
        savedAmbalika = z * savedRatioAmbalika;

        if ((savedAmba == savedAambika) && (savedAambika ==  savedAmbalika)){
            printf("\nAll three have saved the same amount \n\n");
        } else if ((savedAmba > savedAambika) && (savedAambika == savedAmbalika)){
            printf("\nAmba left with the maximum amount ($%d) \n\n", (int)savedAmba);
        } else if ((savedAambika > savedAmba) && (savedAmba == savedAmbalika)){
            printf("\nAambika left with the maximum amount ($%d) \n\n", (int)savedAambika);
        } else if ((savedAmbalika > savedAmba) && (savedAmba == savedAambika)){
            printf("\nAmbalika left with the maximum amount ($%d) \n\n", (int)savedAmbalika);
        } else if ((savedAmba > savedAambika) && (savedAmba > savedAmbalika)){
            printf("\nAmba left with the maximum amount ($%d) \n\n", (int)savedAmba);
        } else if ((savedAambika > savedAmba) && (savedAambika > savedAmbalika)){
            printf("\nAambika left with the maximum amount ($%d) \n\n", (int)savedAambika);        
        } else if ((savedAmbalika > savedAmba) && (savedAmbalika > savedAambika)){
            printf("\nAmbalika left with the maximum amount ($%d) \n\n", (int)savedAmbalika);
        } else {
            printf("\nINVALID! \n\n");
        }

    } else if ((spentRatioAmba/spentRatioAambika) == (savedRatioAmba/savedRatioAambika)){
        
        if ((spentRatioAmba/spentRatioAambika) != (initialAmba/initialAambika)){
            printf("\nINVALID! No valid solution exists \n\n");
        } else if ((spentRatioAmba/spentRatioAambika) == (initialAmba/initialAambika)){
            printf("\nAll of them have the same amount of money left \n\n");
        } else {
            printf("\nINVALID! \n\n");
        }   

    } else {
        printf("\nINVALID! \n\n");
    } 

    return 0;
}
