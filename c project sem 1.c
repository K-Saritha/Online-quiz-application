#include <stdio.h>
#include <string.h>
#include <time.h>
#include <conio.h>

char name[20];
void instructions();
void score(int points);
int randqn();
int Q1(int points), Q2(int points), Q3(int points), Q4(int points), Q5(int points), Q6(int points), Q7(int points), Q8(int points), Q9(int points), Q10(int points);
int main()
{
    char option;
    int points = 0;
    {
        system("cls");
        printf("\t\t\t\t WELCOME TO ONLINE QUIZZ\n\n\n");
        printf("press S to start the quizz\n");
        printf("press Q to quit quizz\n");
        printf("press I for instructions\n\n");
        printf("Enter Your Option Here: ");
        option = toupper(getch());
        fflush(stdin);
    }
    switch (option)
    {
    case 'S':
    	start:
        system("cls");
        printf("Enter Your Name: ");
        gets(name);
    if (strlen(name)!=0)
        {
         system("cls");
         randqn();
       }
       else
       {
       	goto start;
	   }
		break;
    case 'Q':
        return 0;
        break;
    case 'I':
        instructions();
        main();
        break;
     default:
        	main();
    }
}

int randqn()
{
    int solved[10] = {0};
    int count = 0;
    int points = 0;
    while (count != 10)
    {
        int x;
        srand(time(0));
        x = rand() % 10;
        if (solved[x] != 1 && x <= 9)
        {
            switch (x)
            {
            case 0:
                points = Q1(points);
                fflush(stdin);
                system("cls");
                break;
            case 1:
                points = Q2(points);
                fflush(stdin);
                system("cls");
                break;
            case 2:
                
                points = Q3(points);
                fflush(stdin);
                system("cls");
                break;
            case 3:
			     points = Q4(points);
                fflush(stdin);
                system("cls");
                break;
            case 4:
                points = Q5(points);
                fflush(stdin);
                system("cls");
                break;
            case 5:
                 points = Q6(points);
                fflush(stdin);
                system("cls");
                break;
            case 6:
                points = Q7(points);
                fflush(stdin);
                system("cls");
                break;
            case 7:
                points = Q8(points);
                fflush(stdin);
                system("cls");
                break;
            case 8:
               points = Q9(points);
                fflush(stdin);
                system("cls");
                break;
            case 9:
                 points = Q10(points);
                fflush(stdin);
                system("cls");
                break;

            default:
                printf("Please Enter A Valid Option !!!");
            }
            solved[x] = 1;
            count++;
        }
    }
    if (count == 10)
    {
        score(points);
        return points;
    }
}

void instructions()
{
    system("cls");
    printf("\n\n\n");
    printf("HERE ARE THE INSTRUCTIONS ");
    printf("\nTHERE WILL BE A TOTAL OF 10 QUESTIONS\n");
    printf("YOU WILL BE GIVEN 4 OPTIONS FOR EACH QUESTION\n");
    printf("YOU HAVE TO ENTER 1,2,3 OR 4\n");
    printf("EACH points ANSWER CARRIES 5 MARKS\n");
    printf("ALL THE BEST\n\n\n");
    printf("Tap any key To Continue");
    getch();
}

void score(int points)
{
    printf("Great Job %s!! You've Successfully Completed The Quiz !!!\n\n", name);
    printf("Your Score Is : %d \n", points * 5);
    printf("Your Accuracy is : %d %\n", points * 10);
    printf("\n\n\nPress Any Key To Exit The Quiz!!!");
    getch();
}
int Q1(int points)
{
    int inp, ans = 2;

    printf("     |  5  |    \n");
    printf("_____|_____|_____\n");
    printf("     |     |    \n");
    printf("  3  |  28 |  2 \n");
    printf("_____|_____|_____\n");
    printf("     |     |    \n");
    printf("     |  4  |    \n\n\n\n");
    printf("     |  8  |    \n");
    printf("_____|_____|_____\n");
    printf("     |     |    \n");
    printf("  8  |  12 |  _ \n");
    printf("_____|_____|_____\n");
    printf("     |     |    \n");
    printf("     |  4  |    \n");
    printf("\nFind the number in missing Blank : ");
    printf("\n1) 12  2) 2  3)15  4) 4\n");
    printf("Enter the correct option number : ");

    scanf("%d", &inp);
    if(inp ==1||inp==2||inp==3||inp==4)
{
    
    if (inp == ans)
    {
        points++;
    return points;
	}
}
    else
    {
      printf("please enter a valid option\n");
      printf("tap any key to continue\n");
      getch();
      system("cls");
      fflush(stdin);
      Q1(points);
	}

}
int Q2(int points)
{
    int inp, ans = 3;
    printf("\nDECORATE  ==>  EDOCARET\n");
    printf("HYGROMETER  ==>  ?\n\n");
    printf("1) YHRMGOTERE\n2) YHRGMTOERE\n3) YHRGMOTERE\n4) YHRGMOTREE\n\n\n");
    printf("Enter the correct option number : ");

    scanf("%d", &inp);
     if(inp ==1||inp==2||inp==3||inp==4)
{
    if (inp == ans)
    {
        points++;
         return points;
    }
}
     else
    {
      printf("please enter a valid option\n");
      printf("tap any key to continue\n");
      getch();
      system("cls");
      fflush(stdin);
      Q2(points);
	}
    
}
int Q3(int points)
{
    int inp, ans = 3;
    printf("Father of A's father is brother of B's mother. What is the relation between A and B??\n\n");
    printf("1) Brothers\n2) Son And Father\n3) Uncle And Nephew\n4) Son in law And Father in law\n\n\n");

    printf("Enter the correct option number : ");

    scanf("%d", &inp);
     if(inp ==1||inp==2||inp==3||inp==4)
{
    if (inp == ans)
    {
        points++;
    return points;
    }
}
 else
    {
      printf("please enter a valid option\n");
      printf("tap any key to continue\n");
      getch();
      system("cls");
      fflush(stdin);
      Q3(points);
	}
    
}
int Q4(int points)
{
    int inp, ans = 1;
    printf("How long is a fortnight\n\n");
    printf("1) 14 Days\n2) 6 Days\n3) 12 Days\n4) 21 Days\n\n");
    printf("Enter the correct option number : ");

    scanf("%d", &inp);
     if(inp ==1||inp==2||inp==3||inp==4)
{
    if (inp == ans)
     {
		points++;
         return points;
     }
}
else
    {
      printf("please enter a valid option\n");
      printf("tap any key to continue\n");
      getch();
      system("cls");
      fflush(stdin);
      Q4(points);
	}
    
}

int Q5(int points)
{
    int inp, ans = 2;
    printf("Series : 2, 8, 18, 32, __, 72\n\n\n");
    printf("Find the missing number of the series\n");
    printf("1) 36\n2) 50\n3) 12\n4) 46\n");
    printf("Enter the correct option number : ");

    scanf("%d", &inp);
    if(inp ==1||inp==2||inp==3||inp==4)
{
    
    if (inp == ans)
    {
        points++;
    return points;
    }
}
else
    {
      printf("please enter a valid option\n");
      printf("tap any key to continue\n");
      getch();
      system("cls");
      fflush(stdin);
      Q5(points);
	}
    
}
int Q6(int points)
{
    int inp, ans = 1;
    printf("1.Pooja is older than Mukesh.\n");
    printf("2.Suresh is older than Pooja.\n");
    printf("3.Mukesh is older than Suresh.\n");
    printf("\nIf the first two statements are true,the third statement is\n");
    printf("\n\t1. False\n");
    printf("\t2. True\n");
    printf("\t3. Uncertain\n");
    printf("Enter the correct option number : ");

    scanf("%d", &inp);
     if(inp ==1||inp==2||inp==3||inp==4)
{
    
    if (inp == ans)
    {
		points++;
    return points;
   }
}
else
    {
      printf("please enter a valid option\n");
      printf("tap any key to continue\n");
      getch();
      system("cls");
      fflush(stdin);
      Q6(points);
	}
    
}
int Q7(int points)
{
    int inp, ans = 2;
    printf("A Month after colleges opened......\n\n");
    printf("A.35 percent seats reserved under OBC\n");
    printf("B.in private colleges\n");
    printf("C.for the next academic year\n");
    printf("D.remain vacant\n");
    printf(" 1. CBDA\n 2. CABD\n 3. ADBC\n 4. BADC\n");
    printf("Enter the correct option number : ");

    scanf("%d", &inp);
    if(inp ==1||inp==2||inp==3||inp==4)
{
        if (inp == ans)
    {
		 points++;
    return points;
    }
}
else
    {
      printf("please enter a valid option\n");
      printf("tap any key to continue\n");
      getch();
      system("cls");
      fflush(stdin);
      Q7(points);
	}
    
}

int Q8(int points)
{
    int inp, ans = 2;
    printf("The first republic day of India was celebrated on January 26,1950. What day of the week was it?\n\n");
    printf(" 1.Thursday\n 2.Wednesday\n 3.Friday\n 4.Sunday\n\n");
    printf("Enter the correct option number : ");

    scanf("%d", &inp);
    if(inp ==1||inp==2||inp==3||inp==4)
{
	    if (inp == ans)
    {
        points++;
    return points;
    }  
}
    else
    {
      printf("please enter a valid option\n");
       printf("tap any key to continue\n");
      getch();
      system("cls");
      fflush(stdin);
      Q8(points);
	}
}
int Q9(int points)
{
    int inp, ans = 2;
    printf("PETAL: FLOWER\n\n");
    printf("1. Pen: Paper\n2. Engine: Car\n3. Cat: Dog\n4. Ball: Game\n");
    printf("Enter the correct option number : ");

    scanf("%d", &inp);
     if(inp ==1||inp==2||inp==3||inp==4)
 {
    
    if (inp == ans)
    {
        points++;
    return points;
    }
}
 else
    {
      printf("please enter a valid option\n");
       printf("tap any key to continue\n");
      getch();
      system("cls");
      fflush(stdin);
      Q9(points);
	}
}

int Q10(int points)
{
    int inp, ans = 2;
    printf("If in a certain language, NOIDA is coded as OPJEB, how is DELHI coded in that language?\n\n");
    printf("1. CDKGH\n2. EFMIJ\n3. FGNJK\n4. IHLED\n");
    printf("Enter the correct option number : ");

    scanf("%d", &inp);
    if(inp ==1||inp==2||inp==3||inp==4)
 {
    if (inp == ans)
    {
        points++;
    return points;
    }
}
 else
    {
      printf("please enter a valid option\n");
       printf("tap any key to continue\n");
      getch();
      system("cls");
      fflush(stdin);
      Q10(points);
	}
}
