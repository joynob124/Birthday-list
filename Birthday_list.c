//Project Birthday list

#include<stdio.h>
#include<string.h>

//declaration of birthdays on specific months
void january(){
    printf("\t\t\t\t\t\tEzra- 5 Jan\n\t\t\t\t\t\tKawser- 25 Jan\n");
}
void february(){
    printf("\t\t\t\t\t\tMahadi- 11 Feb\n\t\t\t\t\t\tRafi- 14 Feb\n");
}
void march(){
    printf("\t\t\t\t\t\t---------- Opps! No birthday on March\n");
}
void april(){
    printf("\t\t\t\t\t\tArpita- 5 April\n\t\t\t\t\t\tDipty- 13 Apr\n");
}
void may(){
    printf("\t\t\t\t\t\tLisa- 13 May\n");
}
void june(){
    printf("\t\t\t\t\t\tAtif- 30 June\n");
}
void july(){
    printf("\t\t\t\t\t\tMunif- 10 July\n\t\t\t\t\t\tJiju- 12 July\n");
}
void august(){
    printf("\t\t\t\t\t\tAmmu- 1 Aug\n\t\t\t\t\t\tMishu- 6 Aug\n\t\t\t\t\t\tRidhwan- 13 Aug\n\t\t\t\t\t\tMim- 26 Aug\n");
}
void september(){
    printf("\t\t\t\t\t\t---------- Opps! No birthday on September\n");
}
void october(){
    printf("\t\t\t\t\t\tMarium- 4 Oct\n\t\t\t\t\t\tSayem- 7 Oct\n\t\t\t\t\t\tJamil- 11 Oct\n\t\t\t\t\t\tAysha- 14 Oct\n\t\t\t\t\t\tMaysha- 16 Oct\n");
}
void november(){
    printf("\t\t\t\t\t\tNafis- 26 Nov\n");
}
void december(){
    printf("\t\t\t\t\t\tAbir- 6 Dec\n\t\t\t\t\t\tTanmoy- 24 Dec\n\t\t\t\t\t\tSam-25 Dec\n\t\t\t\t\t\tDipra- 27 Dec\n\t\t\t\t\t\tAbbu- 31 Dec\n");
}

int main()
{
    //intro heading
    printf("\t\t\t\t\t\t\tBirthday Dates of Family & Friends\n");
    printf("\t\t\t\t\t\t====================================================\n\n\n");



    //declaration of variables 1

    int choice;
    printf("\n\t\t\t\t\t\t1.See all the birthdays of the year\n\t\t\t\t\t\t2.Find specific birthdays on a month\n");
    printf("\n\n\t\t\t\t\tEnter your choice here: ");
    scanf("%d",&choice);

    switch(choice){
    case 1: printf("\t\t\t");
            january();
            february();
            march();
            april();
            may();
            june();
            july();
            august();
            september();
            october();
            november();
            december();
            break;
    case 2: //primary inputs
            printf("\t\t\t\t\tEnter a month to see the Birthday dates: ");
            char monthName[10];
            scanf("%s",&monthName);
            printf("\n\n\t\t\t\t\t\t******** Birthdays on %s ********\n\n",monthName);

            //declaration of variables 2

            char *m1="January",*m2="February",*m3="March",*m4="April",*m5="May",*m6="June",*m7="July",*m8="August",*m9="September",*m10="October",*m11="November",*m12="December";
            int value=strcmp(monthName,m1);

            //condition checking
            if(value==0){
                january();
            }else if((value=strcmp(monthName,m2))==0){
                february();
            }else if((value=strcmp(monthName,m3))==0){
                march();
            }else if((value=strcmp(monthName,m4))==0){
                april();
            }else if((value=strcmp(monthName,m5))==0){
                may();
            }else if((value=strcmp(monthName,m6))==0){
                june();
            }else if((value=strcmp(monthName,m7))==0){
                july();
            }else if((value=strcmp(monthName,m8))==0){
                august();
            }else if((value=strcmp(monthName,m9))==0){
                september();
            }else if((value=strcmp(monthName,m10))==0){
                october();
            }else if((value=strcmp(monthName,m11))==0){
                november();
            }else if((value=strcmp(monthName,m12))==0){
                december();
            }
            break;
    }

return 0;
}
