#include<stdio.h>

void printMenu();
void printWelcom();
void bookStore();
void printInvoice();

int number;
int x = 0;
int count;
int buckect = 0;
int np_buckect;
int ep_buckect;
int kp_buckect;
float tot;

void printWelcome()
{
    printf("__________WELCOME CL BOOK SHOP__________");
    printf("\n\n");
    printMenu();
}

void printMenu()
{
    printf("-- Our Menu --\n\n");
    printf("01 NOVEL\n");
    printf("02 KIDS\n");
    printf("03 EDUCATION\n");
    printf("04 pay\n\n");
    printf("select your choice( press number ) :- ");
    scanf("%d",&number);
    printf("\n\n");
    if(number != 4)
    {
        bookStore();
    }
    else
    {
        printInvoice();
    }
}

void bookStore()
{
    if(number == 1)
    {
        int c_num;
        printf("---NOVEL---\n\n");
        printf("01 Madolduwa (LKR 400)\n");
        printf("02 Ape Gama (LKR 700)\n");
        printf("03 Gamperaliya (LKR 600)\n\n");
        while(x!=1)
        {
            printf("select your choice :-");
            scanf("%d",&c_num);
            printf("\n");
            printf("enter the count :-");
            scanf("%d",&count);
            printf("\n");
            printf("are you continue (yes(0)/no(1) :- ");
            scanf("%d",&x);
            printf("\n");
            if(c_num == 1)
            {
                buckect = 400*count;
                np_buckect = np_buckect + buckect;
            }
            else if(c_num == 2)
            {
                buckect = 700*count;
                np_buckect = np_buckect + buckect;
            }
            else if(c_num == 3)
            {
                buckect = 600*count;
                np_buckect = np_buckect + buckect;
            }
            buckect = 0;
        }
        x = 0;
        number = 0;
        printMenu();

    }
    else if(number == 2)
    {
        int c_num;
        printf("---KIDS---\n\n");
        printf("01 BEN 10 (LKR 200)\n");
        printf("02 Scooby Doo (LKR 300)\n");
        printf("03 Arrow (LKR 400)\n\n");
        while(x!=1)
        {
            printf("select your choice :-");
            scanf("%d",&c_num);
            printf("\n");
            printf("enter the count :-");
            scanf("%d",&count);
            printf("\n");
            printf("are you continue (yes(0)/no(1) :- ");
            scanf("%d",&x);
            printf("\n");
            if(c_num == 1)
            {
                buckect = 200*count;
                kp_buckect = kp_buckect + buckect;
            }
            else if(c_num == 2)
            {
                buckect = 300*count;
                kp_buckect = kp_buckect + buckect;
            }
            else if(c_num == 3)
            {
                buckect = 400*count;
                kp_buckect = kp_buckect + buckect;
            }
            buckect = 0;
        }
        x = 0;
        number = 0;
        printMenu();
    }
    else if(number == 3)
    {
        int c_num;
        printf("---EDUCATION---\n\n");
        printf("01 English Speaking Book(LKR 500)\n");
        printf("02 World Map (LKR 800)\n");
        printf("03 History of Sri Lanka (LKR 600)\n\n");
        while(x!=1)
        {
            printf("select your choice :-");
            scanf("%d",&c_num);
            printf("\n");
            printf("enter the count :-");
            scanf("%d",&count);
            printf("\n");
            printf("are you continue (yes(0)/no(1) :- ");
            scanf("%d",&x);
            printf("\n");
            if(c_num == 1)
            {
                buckect = 500*count;
                ep_buckect = ep_buckect + buckect;
            }
            else if(c_num == 2)
            {
                buckect = 800*count;
                ep_buckect = ep_buckect + buckect;
            }
            else if(c_num == 3)
            {
                buckect = 600*count;
                ep_buckect = ep_buckect + buckect;
            }
            buckect = 0;
        }
        x = 0;
        number = 0;
        printMenu();

    }
    else
    {
        printf("wrong choose");
        printMenu();
    }
}

void printInvoice()
{
    tot = np_buckect+ kp_buckect + ep_buckect;
    printf("BILL LKR %f\n\n",tot);
    printf("------WELCOME------");
}

void main()
{
    printWelcome();
}
