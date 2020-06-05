#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <unistd.h>
#include <signal.h>
int detuct(score)
{
    score=score-50;
    return (score);
    }
void code()
{
    char name1[90],name2[90],res1[]="m",res2[]="name",res3[]="breathe",res4[]="umbrella",res5[]="stamp",ans[100];
    int hint;
    int score1=0,score2=0;
    int hash1;


    //TAKING INPUT OF NAME OF THE TWO PLAYERS

    printf("#\tEnter name of player 1 :\t\t\t\t\t\t \t\t  # \n");
    printf("#\t ");
    scanf("%s",name1);
    for(hash1=0;hash1<=2;hash1++)
{
                        printf("#                                                                                                 #\n");
}
    printf("#\tEnter name of player 2 :\t\t\t\t\t\t \t\t  # \n");
    printf("#\t ");
    scanf("\t%s",name2);
    for(hash1=0;hash1<=2;hash1++)
                    {
                        printf("#                                                                                                 #\n");
                    }
    printf("#\tWelcome %s and %s to the Guessing Game      \t\t \t\t   \n",name1,name2);

     for(hash1=0;hash1<=4;hash1++)
                    {
                        printf("#                                                                                                 #\n");
                    }
    printf("###################################################################################################\n");
    printf("\n\n\tEnter any number to continue the game  :  ");
    int num;
    scanf("%d",&num);
    if(num>=0)
    {
        system("cls");
    }


    //RIDDLE 1 PROBLEM


printf("###################################################################################################\n");
printf("#\tHere is your riddle 1 : \t\t\t\t\t\t                  #\n");
     for(hash1=0;hash1<=2;hash1++)
                    {
                        printf("#                                                                                                 #\n");
                    }
    printf("#\tWhat comes once in a minute ,twice in moment but never in thousand years ?\t\t  #\n");

    //player 1 question 1 code
     for(hash1=0;hash1<=2;hash1++)
                    {
                        printf("#                                                                                                 #\n");
                    }
    printf("#\t%s's Turn to guess \t\t\t\t\t\t \t\t          \n",name1);
     for(hash1=0;hash1<1;hash1++)
                    {
                        printf("#                                                                                                 #\n");
                    }
    label:
            printf("#\tDo you want hint ? (Yes = 1 / No = 2) : ");

            scanf("%d",&hint);

    switch(hint)
    {
    case 1:
        //printf("###################################################################################################\n");
        printf("#                                                                                                 #\n");
        printf("#\twhat comes after l ?\t\t\t\t\t\t\t\t\t  #\n");
        printf("#                                                                                                 #\n");
        printf("#\tenter your answer:\t\t\t\t\t\t\t\t\t  #\n");
          printf("#\t ");
            scanf("%s",ans);
             printf("#                                                                                                 #\n");
            if(strcmp(ans,res1)==0)
            {
                 score1=score1+100;
                 score1=detuct(score1);
            }
            else
            {

                    score1=detuct(score1);
            }
        break;
    case 2:
          printf("#                                                                                                 #\n");
          printf("#\tenter your answer:\n");
           printf("#\t ");
            scanf("%s",ans);
             for(hash1=0;hash1<=2;hash1++)
                    {
                        printf("#                                                                                                 #\n");
                    }
            if(strcmp(ans,res1)==0)
            {
                 score1=score1+100;
            }
            break;
default:
        printf("#                                                                                                 #\n");
        printf("#\tYou choosed a wrong option! The previous option is displayed again to you !               #\n");
        printf("#                                                                                                 #\n");
        goto label;
    }


    //player 2 question 1 code

    //printf("\n###################################################################################################\n");
    for(hash1=0;hash1<=2;hash1++)
                    {
                        printf("#                                                                                                 #\n");
                    }
    printf("#\t%s's Turn to guess \t\t\t\t\t\t \t\t          \n",name2);
     for(hash1=0;hash1<1;hash1++)
                    {
                        printf("#                                                                                                 #\n");
                    }
    label1:
            printf("#\tDo you want hint ? (Yes = 1 / No = 2) : ");

            scanf("%d",&hint);

    switch(hint)
    {
    case 1:
        //printf("###################################################################################################\n");
        printf("#                                                                                                 #\n");
        printf("#\twhat comes after l ?\t\t\t\t\t\t\t\t\t  #\n");
        printf("#                                                                                                 #\n");
        printf("#\tenter your answer:\t\t\t\t\t\t\t\t\t  #\n");
          printf("#\t ");
            scanf("%s",ans);
             printf("#                                                                                                 #\n");
            if(strcmp(ans,res1)==0)
            {
                 score2=score2+100;
                 score2=detuct(score2);
            }
            else
            {

                    score2=detuct(score2);
            }
        break;
    case 2:
          printf("#                                                                                                 #\n");
          printf("#\tenter your answer:\n");
           printf("#\t ");
            scanf("%s",ans);
             for(hash1=0;hash1<=2;hash1++)
                    {
                        printf("#                                                                                                 #\n");
                    }
            if(strcmp(ans,res1)==0)
            {
                 score2=score2+100;
            }
            break;
default:
       printf("#\tYou choosed a wrong option! The previous option is displayed again to you !                       #\n");
        printf("#                                                                                                 #\n");
        goto label1;
    }

    printf("###################################################################################################\n");

    printf("\n\tEnter any number to continue : ");
    int aa;
    scanf("%d",&aa);
    if(aa>=0)
{
        system("cls");
}
    //status  after level 1


    printf("###################################################################################################\n");
    printf("#\tStatus after 1st level :\t\t\t\t\t                          #\n");
     for(hash1=0;hash1<=2;hash1++)
                    {
                        printf("#                                                                                                 #\n");
                    }
    printf("#\tScore of %s is %d                \n",name1,score1);
    printf("#                                                                                                 #\n");
    printf("#\tScore of %s is %d \n",name2,score2);
    printf("#                                                                                                 #\n");
    for(hash1=0;hash1<=2;hash1++)
                    {
                        printf("#                                                                                                 #\n");
                    }
    printf("#\tEnd of Level 1                             \t\t\t\t\t          #\n");
    printf("#                                                                                                 #\n");
    printf("#                                                                                                 #\n");
printf("###################################################################################################\n");
printf("\n\tEnter any number to continue : ");
    scanf("%d",&aa);
    if(aa>=0)
{
        system("cls");
}




//RIDDLE 2 PROBLEM


printf("###################################################################################################\n");
printf("#\tHere is your riddle 2 : \t\t\t\t\t\t                  #\n");
     for(hash1=0;hash1<=2;hash1++)
                    {
                        printf("#                                                                                                 #\n");
                    }
    printf("#\tWhat belongs to you,but other people use it more than you ?\t\t                  #\n");

    //player 1 question 2 code
     for(hash1=0;hash1<=2;hash1++)
                    {
                        printf("#                                                                                                 #\n");
                    }
    printf("#\t%s's Turn to guess \t\t\t\t\t\t \t\t          \n",name1);
     for(hash1=0;hash1<1;hash1++)
                    {
                        printf("#                                                                                                 #\n");
                    }
    label2:
            printf("#\tDo you want hint ? (Yes = 1 / No = 2) : ");

            scanf("%d",&hint);

    switch(hint)
    {
    case 1:
        //printf("###################################################################################################\n");
        printf("#                                                                                                 #\n");
        printf("#\twhat comes before your surname?\t\t\t\t\t\t\t          #\n");
        printf("#                                                                                                 #\n");
        printf("#\tenter your answer:\t\t\t\t\t\t\t\t\t  #\n");
          printf("#\t ");
            scanf("%s",ans);
             printf("#                                                                                                 #\n");
            if(strcmp(ans,res2)==0)
            {
                 score1=score1+100;
                 score1=detuct(score1);
            }
            else
            {

                    score1=detuct(score1);
            }
        break;
    case 2:
          printf("#                                                                                                 #\n");
          printf("#\tenter your answer:\n");
           printf("#\t ");
            scanf("%s",ans);
             for(hash1=0;hash1<=2;hash1++)
                    {
                        printf("#                                                                                                 #\n");
                    }
            if(strcmp(ans,res2)==0)
            {
                 score1=score1+100;
            }
            break;
default:
        printf("#                                                                                                 #\n");
        printf("#\tYou choosed a wrong option! The previous option is displayed again to you !               #\n");
        printf("#                                                                                                 #\n");
        goto label2;
    }


    //player 2 question 2 code

    //printf("\n###################################################################################################\n");
    for(hash1=0;hash1<=2;hash1++)
                    {
                        printf("#                                                                                                 #\n");
                    }
    printf("#\t%s's Turn to guess \t\t\t\t\t\t \t\t          \n",name2);
     for(hash1=0;hash1<1;hash1++)
                    {
                        printf("#                                                                                                 #\n");
                    }
    label21:
            printf("#\tDo you want hint ? (Yes = 1 / No = 2) : ");

            scanf("%d",&hint);

    switch(hint)
    {
    case 1:
        //printf("###################################################################################################\n");
        printf("#                                                                                                 #\n");
        printf("#\twhat comes before your surname?\t\t\t\t\t\t\t          #\n");
        printf("#                                                                                                 #\n");
        printf("#\tenter your answer:\t\t\t\t\t\t\t\t\t  #\n");
          printf("#\t ");
            scanf("%s",ans);
             printf("#                                                                                                 #\n");
            if(strcmp(ans,res2)==0)
            {
                 score2=score2+100;
                 score2=detuct(score2);
            }
            else
            {

                    score2=detuct(score2);
            }
        break;
    case 2:
          printf("#                                                                                                 #\n");
          printf("#\tenter your answer:\n");
           printf("#\t ");
            scanf("%s",ans);
             for(hash1=0;hash1<=2;hash1++)
                    {
                        printf("#                                                                                                 #\n");
                    }
            if(strcmp(ans,res2)==0)
            {
                 score2=score2+100;

            }
            break;
default:
       printf("#\tYou choosed a wrong option! The previous option is displayed again to you !                       #\n");
        printf("#                                                                                                 #\n");
        goto label21;
    }

    printf("###################################################################################################\n");

    printf("\n\tEnter any number to continue : ");

    scanf("%d",&aa);
    if(aa>=0)
{
        system("cls");
}
    //status  after level 2

    printf("###################################################################################################\n");
    printf("#\tStatus after 2nd level :\t\t\t\t\t                          #\n");
     for(hash1=0;hash1<=2;hash1++)
                    {
                        printf("#                                                                                                 #\n");
                    }
    printf("#\tScore of %s is %d                \t\t\t\t\t\t\t  \n",name1,score1);
    printf("#                                                                                                 #\n");
    printf("#\tScore of %s is %d                     \t\t\t\t\t\t\t  \n",name2,score2);
    printf("#                                                                                                 #\n");
    for(hash1=0;hash1<=2;hash1++)
                    {
                        printf("#                                                                                                 #\n");
                    }
    printf("#\tEnd of Level 2                             \t\t\t\t\t          #\n");
    printf("#                                                                                                 #\n");
    printf("#                                                                                                 #\n");
printf("###################################################################################################\n");
printf("\n\tEnter any number to continue : ");
    scanf("%d",&aa);
    if(aa>=0)
{
        system("cls");
}


//RIDDLE 3

printf("###################################################################################################\n");
printf("#\tHere is your riddle 3 : \t\t\t\t\t\t                  #\n");
     for(hash1=0;hash1<=2;hash1++)
                    {
                        printf("#                                                                                                 #\n");
                    }
    printf("#\tThis is as light as feather,yet no man can hold it for long.Who am I ?\t              \n");

    //player 1 question 3 code
     for(hash1=0;hash1<=2;hash1++)
                    {
                        printf("#                                                                                                 #\n");
                    }
    printf("#\t%s's Turn to guess \t\t\t\t\t\t \t\t          \n",name1);
     for(hash1=0;hash1<1;hash1++)
                    {
                        printf("#                                                                                                 #\n");
                    }
    label3:
            printf("#\tDo you want hint ? (Yes = 1 / No = 2) : ");

            scanf("%d",&hint);

    switch(hint)
    {
    case 1:
        //printf("###################################################################################################\n");
        printf("#                                                                                                 #\n");
        printf("#\twhat is the basic need for survival ?\t\t\t\t\t\t\t  #\n");
        printf("#                                                                                                 #\n");
        printf("#\tenter your answer:\t\t\t\t\t\t\t\t\t  #\n");
          printf("#\t ");
            scanf("%s",ans);
             printf("#                                                                                                 #\n");
            if(strcmp(ans,res3)==0)
            {
                 score1=score1+100;
                 score1=detuct(score1);
            }
            else
            {

                    score1=detuct(score1);
            }
        break;
    case 2:
          printf("#                                                                                                 #\n");
          printf("#\tenter your answer:\n");
           printf("#\t ");
            scanf("%s",ans);
             for(hash1=0;hash1<=2;hash1++)
                    {
                        printf("#                                                                                                 #\n");
                    }
            if(strcmp(ans,res3)==0)
            {
                 score1=score1+100;
            }
            break;
default:
        printf("#                                                                                                 #\n");
        printf("#\tYou choosed a wrong option! The previous option is displayed again to you !               #\n");
        printf("#                                                                                                 #\n");
        goto label3;
    }


    //player 2 question 3 code

    //printf("\n###################################################################################################\n");
    for(hash1=0;hash1<=2;hash1++)
                    {
                        printf("#                                                                                                 #\n");
                    }
    printf("#\t%s's Turn to guess \t\t\t\t\t\t \t\t          \n",name2);
     for(hash1=0;hash1<1;hash1++)
                    {
                        printf("#                                                                                                 #\n");
                    }
    label61:
            printf("#\tDo you want hint ? (Yes = 1 / No = 2) : ");

            scanf("%d",&hint);

    switch(hint)
    {
    case 1:
        //printf("###################################################################################################\n");
        printf("#                                                                                                 #\n");
        printf("#\twhat is the basic need for survival ?\t\t\t\t\t\t\t  #\n");
        printf("#                                                                                                 #\n");
        printf("#\tenter your answer:\t\t\t\t\t\t\t\t\t  #\n");
          printf("#\t ");
            scanf("%s",ans);
             printf("#                                                                                                 #\n");
            if(strcmp(ans,res3)==0)
            {
                 score2=score2+100;
                 score2=detuct(score2);
            }
            else
            {

                    score2=detuct(score2);
            }
        break;
    case 2:
          printf("#                                                                                                 #\n");
          printf("#\tenter your answer:\n");
           printf("#\t ");
            scanf("%s",ans);
             for(hash1=0;hash1<=2;hash1++)
                    {
                        printf("#                                                                                                 #\n");
                    }
            if(strcmp(ans,res3)==0)
            {
                 score2=score2+100;
            }
            break;
default:
       printf("#\tYou choosed a wrong option! The previous option is displayed again to you !                       #\n");
        printf("#                                                                                                 #\n");
        goto label61;
    }

    printf("###################################################################################################\n");

    printf("\n\tEnter any number to continue : ");

    scanf("%d",&aa);
    if(aa>=0)
{
        system("cls");
}
    //status  after level 3


    printf("###################################################################################################\n");
    printf("#\tStatus after 3rd level :\t\t\t\t\t                          #\n");
     for(hash1=0;hash1<=2;hash1++)
                    {
                        printf("#                                                                                                 #\n");
                    }
    printf("#\tScore of %s is %d                \t\t\t\t\t\t\t  \n",name1,score1);
    printf("#                                                                                                 #\n");
    printf("#\tScore of %s is %d                     \t\t\t\t\t\t\t  \n",name2,score2);
    printf("#                                                                                                 #\n");
    for(hash1=0;hash1<=2;hash1++)
                    {
                        printf("#                                                                                                 #\n");
                    }
    printf("#\tEnd of Level 3                             \t\t\t\t\t          #\n");
    printf("#                                                                                                 #\n");
    printf("#                                                                                                 #\n");
printf("###################################################################################################\n");
printf("\n\tEnter any number to continue : ");
    scanf("%d",&aa);
    if(aa>=0)
{
        system("cls");

}

    //RIDDLE 4 PROBLEM


printf("###################################################################################################\n");
printf("#\tHere is your riddle 4  : \t\t\t\t\t\t                  #\n");
     for(hash1=0;hash1<=2;hash1++)
                    {
                        printf("#                                                                                                 #\n");
                    }
    printf("#\tWhat goes up when rain comes down?\t\t\t\t\t\t\t  #\n");
     for(hash1=0;hash1<=2;hash1++)
                    {
                        printf("#                                                                                                 #\n");
                    }
    printf("#\t%s's Turn to guess \t\t\t\t\t\t \t\t          \n",name1);
     for(hash1=0;hash1<1;hash1++)
                    {
                        printf("#                                                                                                 #\n");
                    }
    label4:
            printf("#\tDo you want hint ? (Yes = 1 / No = 2) : ");

            scanf("%d",&hint);

    switch(hint)
    {
    case 1:
        //printf("###################################################################################################\n");
        printf("#                                                                                                 #\n");
        printf("#\tRhyming word for cindrella ;)\t\t\t\t\t\t\t\t  #\n");
        printf("#                                                                                                 #\n");
        printf("#\tenter your answer:\t\t\t\t\t\t\t\t\t  #\n");
          printf("#\t ");
            scanf("%s",ans);
             printf("#                                                                                                 #\n");
            if(strcmp(ans,res4)==0)
            {
                 score1=score1+100;
                 score1=detuct(score1);
            }
            else
            {

                    score1=detuct(score1);
            }
        break;
    case 2:
          printf("#                                                                                                 #\n");
          printf("#\tenter your answer:\n");
           printf("#\t ");
            scanf("%s",ans);
             for(hash1=0;hash1<=2;hash1++)
                    {
                        printf("#                                                                                                 #\n");
                    }
            if(strcmp(ans,res4)==0)
            {
                 score1=score1+100;
            }
            break;
default:
        printf("#                                                                                                 #\n");
        printf("#\tYou choosed a wrong option! The previous option is displayed again to you !               #\n");
        printf("#                                                                                                 #\n");
        goto label4;
    }


    //player 2 question 1 code

    //printf("\n###################################################################################################\n");
    for(hash1=0;hash1<=2;hash1++)
                    {
                        printf("#                                                                                                 #\n");
                    }
    printf("#\t%s's Turn to guess \t\t\t\t\t\t \t\t          \n",name2);
     for(hash1=0;hash1<1;hash1++)
                    {
                        printf("#                                                                                                 #\n");
                    }
    label41:
            printf("#\tDo you want hint ? (Yes = 1 / No = 2) : ");

            scanf("%d",&hint);

    switch(hint)
    {
    case 1:
        //printf("###################################################################################################\n");
        printf("#                                                                                                 #\n");
        printf("#\tRhyming word for cindrella ;)\t\t\t\t\t\t\t\t  #\n");
        printf("#                                                                                                 #\n");
        printf("#\tenter your answer:\t\t\t\t\t\t\t\t\t  #\n");
          printf("#\t ");
            scanf("%s",ans);
             printf("#                                                                                                 #\n");
            if(strcmp(ans,res4)==0)
            {
                 score2=score2+100;
                 score2=detuct(score2);
            }
            else
            {

                    score2=detuct(score2);
            }
        break;
    case 2:
          printf("#                                                                                                 #\n");
          printf("#\tenter your answer:\n");
           printf("#\t ");
            scanf("%s",ans);
             for(hash1=0;hash1<=2;hash1++)
                    {
                        printf("#                                                                                                 #\n");
                    }
            if(strcmp(ans,res1)==0)
            {
                 score2=score2+100;
            }
            break;
default:
       printf("#\tYou choosed a wrong option! The previous option is displayed again to you !                       #\n");
        printf("#                                                                                                 #\n");
        goto label41;
    }

    printf("###################################################################################################\n");

    printf("\n\tEnter any number to continue : ");
    scanf("%d",&aa);
    if(aa>=0)
{
        system("cls");
}
    //status  after level 1


    printf("###################################################################################################\n");
    printf("#\tStatus after 4th level :\t\t\t\t\t                          #\n");
     for(hash1=0;hash1<=2;hash1++)
                    {
                        printf("#                                                                                                 #\n");
                    }
    printf("#\tScore of %s is %d                \t\t\t\t\t\t\t  \n",name1,score1);
    printf("#                                                                                                 #\n");
    printf("#\tScore of %s is %d                     \t\t\t\t\t\t\t  \n",name2,score2);
    printf("#                                                                                                 #\n");
    for(hash1=0;hash1<=2;hash1++)
                    {
                        printf("#                                                                                                 #\n");
                    }
    printf("#\tEnd of Level 4                             \t\t\t\t\t          #\n");
    printf("#                                                                                                 #\n");
    printf("#                                                                                                 #\n");
printf("###################################################################################################\n");
printf("\n\tEnter any number to continue : ");
    scanf("%d",&aa);
    if(aa>=0)
{
        system("cls");
}


//LEVEL 5 CODING

printf("###################################################################################################\n");
printf("#\tHere is your riddle 5  : \t\t\t\t\t\t                  #\n");
     for(hash1=0;hash1<=2;hash1++)
                    {
                        printf("#                                                                                                 #\n");
                    }
    printf("#\tWhat travels around the world but stays in one spot?\t\t\t\t\t  #\n");
     for(hash1=0;hash1<=2;hash1++)
                    {
                        printf("#                                                                                                 #\n");
                    }
    printf("#\t%s's Turn to guess \t\t\t\t\t\t \t\t          \n",name1);
     for(hash1=0;hash1<1;hash1++)
                    {
                        printf("#                                                                                                 #\n");
                    }
    label5:
            printf("#\tDo you want hint ? (Yes = 1 / No = 2) : ");

            scanf("%d",&hint);

    switch(hint)
    {
    case 1:
        //printf("###################################################################################################\n");
        printf("#                                                                                                 #\n");
        printf("#\tS-A-P (Fill in the blanks)\t\t\t\t\t\t\t\t  #\n");
        printf("#                                                                                                 #\n");
        printf("#\tenter your answer:\t\t\t\t\t\t\t\t\t  #\n");
          printf("#\t ");
            scanf("%s",ans);
             printf("#                                                                                                 #\n");
            if(strcmp(ans,res5)==0)
            {
                 score1=score1+100;
                 score1=detuct(score1);
            }
            else
            {

                    score1=detuct(score1);
            }
        break;
    case 2:
          printf("#                                                                                                 #\n");
          printf("#\tenter your answer:\n");
           printf("#\t ");
            scanf("%s",ans);
             for(hash1=0;hash1<=2;hash1++)
                    {
                        printf("#                                                                                                 #\n");
                    }
            if(strcmp(ans,res5)==0)
            {
                 score1=score1+100;
            }
            break;
default:
        printf("#                                                                                                 #\n");
        printf("#\tYou choosed a wrong option! The previous option is displayed again to you !               #\n");
        printf("#                                                                                                 #\n");
        goto label5;
    }


    //player 2 question 1 code

    //printf("\n###################################################################################################\n");
    for(hash1=0;hash1<=2;hash1++)
                    {
                        printf("#                                                                                                 #\n");
                    }
    printf("#\t%s's Turn to guess \t\t\t\t\t\t \t\t          \n",name2);
     for(hash1=0;hash1<1;hash1++)
                    {
                        printf("#                                                                                                 #\n");
                    }
    label51:
            printf("#\tDo you want hint ? (Yes = 1 / No = 2) : ");

            scanf("%d",&hint);

    switch(hint)
    {
    case 1:
        //printf("###################################################################################################\n");
        printf("#                                                                                                 #\n");
        printf("#\tS-A-P (Fill in the blanks)\t\t\t\t\t\t\t\t  #\n");
        printf("#                                                                                                 #\n");
        printf("#\tenter your answer:\t\t\t\t\t\t\t\t\t  #\n");
          printf("#\t ");
            scanf("%s",ans);
             printf("#                                                                                                 #\n");
            if(strcmp(ans,res5)==0)
            {
                 score2=score2+100;
                 score2=detuct(score2);
            }
            else
            {

                    score2=detuct(score2);
            }
        break;
    case 2:
          printf("#                                                                                                 #\n");
          printf("#\tenter your answer:\n");
           printf("#\t ");
            scanf("%s",ans);
             for(hash1=0;hash1<=2;hash1++)
                    {
                        printf("#                                                                                                 #\n");
                    }
            if(strcmp(ans,res5)==0)
            {
                 score2=score2+100;
            }
            break;
default:
       printf("#\tYou choosed a wrong option! The previous option is displayed again to you !                       #\n");
        printf("#                                                                                                 #\n");
        goto label51;
    }

    printf("###################################################################################################\n");

    printf("\n\tEnter any number to continue : ");
    scanf("%d",&aa);
    if(aa>=0)
{
        system("cls");
}
    //status  after level 1


    printf("###################################################################################################\n");
    printf("#\tStatus after 5th level :\t\t\t\t\t                          #\n");
     for(hash1=0;hash1<=2;hash1++)
                    {
                        printf("#                                                                                                 #\n");
                    }
    printf("#\tScore of %s is %d                \t\t\t\t\t\t\t  \n",name1,score1);
    printf("#                                                                                                 #\n");
    printf("#\tScore of %s is %d                     \t\t\t\t\t\t\t  \n",name2,score2);
    printf("#                                                                                                 #\n");
    for(hash1=0;hash1<=2;hash1++)
                    {
                        printf("#                                                                                                 #\n");
                    }
    printf("#\tEnd of Level 5                             \t\t\t\t\t          #\n");
    printf("#                                                                                                 #\n");
    printf("#                                                                                                 #\n");
printf("###################################################################################################\n");
printf("\n\tEnter any number to continue : ");
    scanf("%d",&aa);
    if(aa>=0)
{
        system("cls");
}

//DISPLAYING THE WINNER
printf("###################################################################################################\n");
printf("#                                                                                                 #\n");
printf("#\t AS PER THE 5 ROUNDS SCORES OF THE PLAYERS ARE :-\t\t\t\t   \n");
printf("#                                                                                                 #\n");
printf("#\t[1] %s's SCORE  : %d                                                                     \n",name1,score1);
printf("#                                                                                                 #\n");
printf("#\t[2] %s's SCORE  : %d                                                                     \n",name2,score2);
if(score1>score2)
{
        printf("#                                                                                                 #\n");
        printf("#\t%s is the WINNER of the GAME !\t\n",name1);
}
else if(score1<score2)
{
        printf("#                                                                                                 #\n");
        printf("#\t%s is the WINNER of the GAME !\n",name2);
}
else if(score2=score1)
{
        printf("#                                                                                                 #\n");
        printf("#\t%s AND %s Are the WINNERS ...as both have equal scores !\n",name1,name2);
}


else{
        printf("error");
}
printf("#                                                                                                 #\n");
printf("#                                                                                                 #\n");
printf("###################################################################################################\n");
}
int main()
{
    int choice,n;
    int hash;
    //home page!!!
    system("color 80");
    label:
            system("cls");
            printf("\n###################################################################################################\n");
            printf("#                                                                                                 #\n");
            printf("#                                                                                                 #\n");
            printf("#                                                                                                 #\n");
            printf("#                                                                                                 #\n");
            printf("#\tWelcome to the HOME PAGE of GUESSING GAME\t\t\t\t\t\t  #\n");
            printf("#                                                                                                 #\n");
            printf("#                                                                                                 #\n");
            printf("#                                                                                                 #\n");
            printf("#                                                                                                 #\n");
            printf("#\tPress 1 [INFORMATION OF GAME]\t\t\t\t\t\t\t\t  #\n");
            printf("#                                                                                                 #\n");
            printf("#                                                                                                 #\n");
            printf("#                                                                                                 #\n");
            printf("#                                                                                                 #\n");
            printf("#\tPress 2 [START PLAYING]\t\t\t\t\t\t\t\t\t  #\n");
            printf("#                                                                                                 #\n");
            for(hash=0;hash<=2;hash++)
                            {
                                printf("#                                                                                                 #\n");
                            }
            printf("###################################################################################################\n");
            printf("\n\tEnter your choice(1-2):");
            scanf("%d",&choice);
             system("cls");

    switch(choice)
    {

        //introduction part of game

        case 1:
                printf("###################################################################################################\n");
                for(hash=0;hash<=0;hash++)
                    {
                        printf("#                                                                                                 #\n");
                    }
                printf("#                             INFORMATION  ABOUT THE  GUESSING  GAME   ");
                printf("                           #\n");
                printf("#                                                                                                 #\n");
                printf("#                                                                                                 #\n");
                printf("#\tThis is a Multiplayer game where it has five levels. Each player will have five riddles\t  #\n");
                printf("#                                                                                                 #\n");
                printf("#\tto solve and move forward in the game.To make game more intresting we have included hints #\n");
                printf("#                                                                                                 #\n");
                printf("#\tat each level. The game goes like the following sequence at each level :                  #\n");
                printf("#                                                                                                 #\n");
                printf("#\t[1] The riddle is displayed on the screen.                                                #\n");
                printf("#                                                                                                 #\n");
                printf("#\t[2] After this, each player gets an option of hint.                                       #\n");
                printf("#                                                                                                 #\n");
                printf("#\t[3] If player chooses to take the hint, than there arises 2 cases:                        #\n");
                printf("#                                                                                                 #\n");
                printf("#\t\t(A) If answer of player is correct after the hint, he gets 50 points.             #\n");
                printf("#                                                                                                 #\n");
                printf("#\t\t(B) If answer of player is incorrect after the hint, he gets -50 points.          #\n");
                printf("#                                                                                                 #\n");
                printf("#\t[4] If player doesn't chooses to take hint,than there arises 2 cases:                     #\n");
                printf("#                                                                                                 #\n");
                printf("#\t\t(A) If answer of player is correct, he gets 100 points.                           #\n");
                printf("#                                                                                                 #\n");
                printf("#\t\t(B) If answer of player is incorrect, he gets 0 points.                           #\n");
                printf("#                                                                                                 #\n");
                printf("#\t[5] At the last of each round score board is displayed with appropriate messages !        #\n");
                 printf("#                                                                                                 #\n");
                 printf("#                                                                                                 #\n");
                printf("###################################################################################################\n");
                printf("\nEnter 1 to go back to Main menu : ");
                int cc;
                scanf("%d",&cc);
                if(cc==1)
                {
                        goto label;
                }
                break;
        case 2: printf("\n##################################     Starting your game    ######################################\n");
                    for(hash=0;hash<=2;hash++)
                    {
                        printf("#                                                                                                 #\n");
                    }
                    code();
                   break;

    }
    return 0;
}
