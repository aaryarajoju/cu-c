//PRACTICAL 3.3
/*Amba, Aambika and Ambalika have money in the ratio x:y:z. All go to market and spend money in ratio p:q:r. 
Total money they have initially is Rs. N. After spending money in the market who has maximum amount left with?*/

#include <stdio.h>

int main (){
    
    float initialRatioAmba, initialRatioAmbika, initialRatioAmbalika;
    float initialAmba, initialAmbika, initialAmbalika;
    float totalMoney;
    float spentRatioAmba, spentRatioAmbika, spentRatioAmbalika;
    float spentAmba, spentAmbika, spentAmbalika;
    float savedRatioAmba, savedRatioAmbika, savedRatioAmbalika;
    float savedAmba, savedAmbika, savedAmbalika;
    float x, y, z;

    printf("Enter the total amount of money that they had before spending : ");
    scanf("%f", &totalMoney);

    printf("Enter the ratio of money that they had (in the format x:y:z) : ");
    scanf("%f:%f:%f", &initialRatioAmba, &initialRatioAmbika, &initialRatioAmbalika);

    printf("Enter the ratio of money that they spent (in the format p:q:r) : ");
    scanf("%f:%f:%f", &spentRatioAmba, &spentRatioAmbika, &spentRatioAmbalika);
   
    printf("Enter the ratio of money that they saved (in the format g:h:i) : ");
    scanf("%f:%f:%f", &savedRatioAmba, &savedRatioAmbika, &savedRatioAmbalika); 


    x = totalMoney / (initialAmba + initialAmbika + initialAmbalika);

    initialAmba = x * initialRatioAmba;
    initialAmbika = x * initialRatioAmbika;
    initialAmbalika = x * initialRatioAmbalika;


    if ((spentRatioAmba/spentRatioAmba) != (savedRatioAmba/savedRatioAmbika)){

        //calculation:





        spentAmba = y * spentRatioAmba;
        spentAmbika = y * spentRatioAmbika;
        spentAmbalika = y * spentRatioAmbalika;

        savedAmba = z * savedRatioAmba;
        savedAmbika = z * savedRatioAmbika;
        savedAmbalika = z * savedRatioAmbalika;

        if (savedAmbika > savedAmba && savedAmbika > savedAmbalika){
            printf("\n Ambika left with the maximum amount ($ %d) \n\n", (int)savedAmbika);
        } else if (savedAmba > savedAmbalika){
            printf("\n Amba left with the maximum amount ($ %d) \n\n", (int)savedAmba);
        } else {
            printf("\n Ambalika left with the maximum amount ($ %d) \n\n", (int)savedAmbalika);
        }
    } else if ((spentRatioAmba/spentRatioAmbika) == (savedRatioAmba/savedRatioAmbika)){
        
        if ((spentRatioAmba/spentRatioAmbika) != (initialAmba/initialAmbika)){
            printf("\n INVALID! No valid solution exists \n\n");
        } else if ((spentRatioAmba/spentRatioAmbika) == (initialAmba/initialAmbika)){
            printf("\n All of them have the same amount of money left \n\n");
        } else {
            printf("\n INVALID! \n\n");
        }       
    } else {
        printf("\n INVALID! \n\n");
    } 

    return 0;
}
