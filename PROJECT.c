#include <stdio.h>
#include <stdlib.h>                       // random
#include <string.h>                     //strcpy
#include <math.h>
struct abc{
char a[20];                           //array of character of size 20 storing correct words
char b[20];                          // array of character of size 20 storing incorrect words
} x[40];                                 //structure variable x having 40 entries

void DataBase()
{
    strcpy(x[0].a,"INDIA");
    strcpy(x[0].b,"I--IA");
    strcpy(x[1].a,"PAKISTAN");
    strcpy(x[1].b,"-A-I--A-");
    strcpy(x[2].a,"EL SALVADOR");
    strcpy(x[2].b,"E- -A--A-O-");
    strcpy(x[3].a,"GEORGIA");
    strcpy(x[3].b,"-EO--IA");
    strcpy(x[4].a,"PAPUA NEW GUINEA");
    strcpy(x[4].b,"-A-UA -E- -UI-EA");
    strcpy(x[5].a,"PHILIPPINES");
    strcpy(x[5].b,"--I-I--I-E-");
    strcpy(x[6].a,"UNITED ARAB EMIRATES");
    strcpy(x[6].b,"U-I-E- A-A- E-I-A-E-");
    strcpy(x[7].a,"ZIMBABWE");
    strcpy(x[7].b,"-I--A--E");
    strcpy(x[8].a,"UZBEKISTAN");
    strcpy(x[8].b,"U--E-I--A-");
    strcpy(x[9].a,"SEYCHELLES");
    strcpy(x[9].b,"-E---E--E-");
    strcpy(x[10].a,"SAN MARINO");
    strcpy(x[10].b,"-A- -A-I-O");
    strcpy(x[11].a,"ROMANIA");
    strcpy(x[11].b,"-O-A-IA");
    strcpy(x[12].a,"PORTUGAL");
    strcpy(x[12].b,"-O--U-A-");
    strcpy(x[13].a,"ANTIGUA AND BARBUDA");
    strcpy(x[13].b,"A--I-UA A-- -A--U-A");
    strcpy(x[14].a,"AZERBAIJAN");
    strcpy(x[14].b,"A-E--AI-A-");
    strcpy(x[15].a,"AUSTRALIA");
    strcpy(x[15].b,"AU---A-IA");
    strcpy(x[16].a,"BAHRAIN");
    strcpy(x[16].b,"-A--AI-");
    strcpy(x[17].a,"BOSNIA AND HERZEGOVINA");
    strcpy(x[17].b,"-O--IA A-- -E--E-O-I-A");
    strcpy(x[18].a,"BRUNEI");
    strcpy(x[18].b,"--U-EI");
    strcpy(x[19].a,"CZECH REPUBLIC");
    strcpy(x[19].b,"--E-- -E-U--I-");
    strcpy(x[20].a,"CAMEROON");
    strcpy(x[20].b,"-A-E-OO-");
    strcpy(x[21].a,"DENMARK");
    strcpy(x[21].b,"-E--A--");
    strcpy(x[22].a,"ETHIOPIA");
    strcpy(x[22].b,"E--IO-IA");
    strcpy(x[23].a,"GUATEMALA");
    strcpy(x[23].b,"-UA-E-A-A");
    strcpy(x[24].a,"HUNGARY");
    strcpy(x[24].b,"-U--A--");
    strcpy(x[25].a,"KUWAIT");
    strcpy(x[25].b,"-U-AI-");
    strcpy(x[26].a,"LIECHTENSTEIN");
    strcpy(x[26].b,"-IE---E---EI-");
    strcpy(x[27].a,"MONTENEGRO");
    strcpy(x[27].b,"-O--E-E--O");
    strcpy(x[28].a,"NETHERLANDS");
    strcpy(x[28].b,"-E--E--A---");
    strcpy(x[29].a,"NORWAY");
    strcpy(x[29].b,"-O--A-");
    strcpy(x[30].a,"SENEGAL");
    strcpy(x[30].b,"-E-E-A-");
    strcpy(x[31].a,"SPAIN");
    strcpy(x[31].b,"--AI-");
    strcpy(x[32].a,"VATICAN CITY");
    strcpy(x[32].b,"-A-I-A- -I-Y");
    strcpy(x[33].a,"UNITED KINGDOM");
    strcpy(x[33].b,"U-I-E- -I---O-");
    strcpy(x[34].a,"YEMEN");
    strcpy(x[34].b,"-E-E-");
    strcpy(x[35].a,"FIJI");
    strcpy(x[35].b,"-I-I");
    strcpy(x[36].a,"MADAGASCAR");
    strcpy(x[36].b,"-A-A-A--A-");
    strcpy(x[37].a,"GREECE");
    strcpy(x[37].b,"--EE-E");
    strcpy(x[38].a,"BURKINA FASO");
    strcpy(x[38].b,"-U--I-A -A-O");
    strcpy(x[39].a,"NICARAGUA");
    strcpy(x[39].b,"-I-A-A-UA");
 }

void main()
{
    r:
    DataBase();
    int wrd_ctr=1; char m[20];char d; int score=0;int flag=0;int life=5; int pg; int rstore[10];

    printf("\t\t\t\t\t\t\t\tATLAS-THE GAME FOR GEO-GEEKS.\n\n\n\n");
    printf("Hello gamer ! Let me give a quick list of rules to you.\n\n");
    printf("1.There will be a name of country on your screen with only vowels and rest letters will be blank.\n");
    printf("2.You have to guess any letter that should be a part of the country's name.\n");
    printf("3.If your guess is correct,all the blanks with that particular letter will be filled and now you have to guess for remaining blanks.\n");
    printf("4.You'll get five lives. For incorrect guess one life out of 5 will be deducted.\n");
    printf("5.After guessing a word completely , your score will increase and you'll be moved to next word.\n");
    printf("6.Guess all the 10 words completely and you are the new conquerer of the world.\n\n");
    printf("So are you ready take the challenge ?\n");
    scanf("%d");
       z :
    if(wrd_ctr<=10)
        {
        printf("\nWord number %d is :\n", wrd_ctr++);
        t :;
        int g=rand()%(40);
        for(int j=0;j<wrd_ctr;j++)
        {
            if(g==rstore[j])                                               // checking if number exists
            goto t;
        }
        rstore[wrd_ctr-1]=g;
        strcpy(m,x[g].b);                                                //
        puts(m);
        y :
            printf("\n");
        scanf(" %c",&d);
        if(d>95)
        {
        d=d-32;                  // small capital
        }
        int l=strlen(m);
        for(int i=0;i<l;i++)
        {
            if(x[g].a[i]==d)
            {
                flag++;                  // guess is correct
             x[g].b[i]=d;
            }
        }
        if(flag>0)
        {
            if(strcmp(x[g].a,x[g].b)==0)          //word formation is correct
            {
                printf("Kudos !! You solved the word. The word is %s \n",x[g].a);score++; flag=0; goto z;
            }
            else{
            printf("\nYour guess was correct.  Updated name is : \n");
            puts(x[g].b);
            printf("\nEnter next guess."); flag=0;
            goto y;
            }
        }
        else{
            life--;
            printf("\nSorry your guess is wrong.\n Remaining number of life is %d ",life);
            if(life= =0)
            {
                printf("\nYou lost.   The word was : ");
                puts(x[g].a);
                       printf("\n Better luck next time. \n Your score is %d /10.\n\n ",score);
                goto q;
            }
                else
            goto y;
        }
        }
        else
        {
            printf("\n Congrats you won the game . Your score is 10/10\n\n"); goto q;
        }
        q:
         printf("\nDo you want to play again ?? \n Press 1 for YES \n Press any other number for NO.\n");
            scanf("%d",&pg);        //play again
            switch(pg)
            {
            case 1:
                goto r; break;
            default:
                printf("\n\nThank you for playing.   Come back soon.\n\n\nGame developer: SHAGUN SHARMA\n");
                scanf("%d");
            }}
















