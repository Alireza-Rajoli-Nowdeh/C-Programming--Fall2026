#include <stdio.h>
#define RENEW_LICENCE   1
#define RENEW_STICKER   2
#define PAY_TICKET      3

#define LICENCE_COUNTER 5
#define STICKER_COUNTER 8
#define TICKET_COUNTER  2
#define ADMIN_PASSWORD  12345
#define TERMINATE           0
#define RETURN_TO_CUSTOMER  1
#define RESET_AND_RETURN    2
int admin(int count)
{
    int choice;   /* the admin's choice */

    do
    {
        printf("_________|ADMIN MODE|_________\n");
        printf("Number of customers = %d customer(s)\n", count);
        printf("Enter:\n");
        printf("- %d to terminate the program.\n", TERMINATE);
        printf("- %d to return to customer mode\n", RETURN_TO_CUSTOMER);
        printf("- %d to reset customer counter and return to customer mode.\n",
               RESET_AND_RETURN);
        scanf("%d", &choice);
    } while (choice < TERMINATE || choice > RESET_AND_RETURN);

    return choice;
}

int main()
{
    int customercount = 0;
    int selection;   /* the customer's choice */
    do
       {
        printf("Enter:\n");
        printf("\t\t%d to Renew Licence\n", RENEW_LICENCE);
        printf("\t\t%d to Renew Sticker\n", RENEW_STICKER);
        printf("\t\t%d to Pay Parking Ticket\n", PAY_TICKET);
        scanf("%d", &selection);
        if (selection==RENEW_LICENCE)
           {
                printf("Go to Counter %d\n",LICENCE_COUNTER);
                customercount++;
           }
        else if (selection==RENEW_STICKER)
            {
                printf("Go to Counter %d\n",STICKER_COUNTER);
                customercount++;
            }
        else if (selection==PAY_TICKET)
            {
                printf("Go to Counter %d\n", TICKET_COUNTER);
                customercount++;
            }
        else if (selection==ADMIN_PASSWORD)
            {
                 admin(customercount);
            }
        else
        {
                printf("Wrong output");
        }
        }while(1);

    return 0;
}
