#include <stdio.h>

int main(){
    int month;
    int date;
    char star[12];
    int again = 1;

    printf("Know your Zodiac sign\n");

    do{
        printf("Select your month and enter your date of birth\n");
        printf(" 1: January \n 2: February \n 3: March\n 4: April\n 5: May\n 6: June\n");
        printf(" 7: July\n 8: August\n 9: September\n 10: October\n 11: November\n 12: December\n");
        printf("Month: ");
        scanf("%d", &month);
        printf("Date: ");
        scanf("%d", &date); 

        printf("You are a: ");

        if((month == 1 && date < 20) || (month == 12 && date > 21)){
            printf("Capricon");
        } 
        else if((month == 2 && date < 18) || (month == 1 && date > 18)){
            printf("Aquarius");
        } 
        else if((month == 3 && date < 21) || (month == 2 && date > 18)){
            printf("Pisces");
        } 
        else if((month == 4 && date < 20) || (month == 3 && date > 20)){
            printf("Aries");
        } 
        else if((month == 5 && date < 21) || (month == 4 && date > 19)){
            printf("Taurus");
        } 
        else if((month == 6 && date < 21) || (month == 5 && date > 20)){
            printf("Gemini");
        }
        else if((month == 7 && date < 23) || (month == 6 && date > 20)){
            printf("Cancer");
        }  
        else if((month == 8 && date < 23) || (month == 7 && date > 22)){
            printf("Leo");
        }  
        else if((month == 9 && date < 23) || (month == 8 && date > 22)){
            printf("Virgo");
        } 
        else if((month == 10 && date < 23) || (month == 9 && date > 22)){
            printf("Libra");
        } 
        else if((month == 11 && date < 22) || (month == 10 && date > 22)){
            printf("Scorpio");
        }   
        else if((month == 12 && date < 22) || (month == 11 && date > 21)){
            printf("Sagittarius");
        } 
        else {
            printf("You selected the wrong month or date");
        }  

        printf("\n");
        printf("Enter 1 to check another Zodiac Sign or 1 to exit: ");
        scanf("%d", &again);
    }
    while (again == 1);  

}