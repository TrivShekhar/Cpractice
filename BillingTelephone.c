#include<stdio.h>
struct BillingTelephone
{
    int consumer_number;
    char mobileNumber[10];
    char name[20];
    int used_minutes;
    int paid_yet;
    int remaining;
};
struct BillingTelephone data[100];
int currentcount=0;
void EnterNewCustomer(){
    printf("Enter the consumer number: ");
    scanf("%d",&data[currentcount].consumer_number);
    printf("\nEnter the mobile number: ");
    scanf("%s",data[currentcount].mobileNumber);
    printf("\nEnter the name: ");
    scanf("%s",data[currentcount].name);
    printf("\nEnter the used minutes: ");
    scanf("%d",&data[currentcount].used_minutes);
    printf("\nEnter the paid yet: ");
    scanf("%d",&data[currentcount].paid_yet);
    printf("\nEnter the remaining amount: ");
    scanf("%d",&data[currentcount].remaining);
    currentcount++;
    printf("\nRecord added successfully! \n");
}
void DisplayAllCustomers(){
    int i;
    printf("consumer_number\tmobileNumber\tname\tused_minutes\tpaid_yet\tremaining amount\n");
    for(i=0;i<currentcount;i++){
        printf("%d\t%s\t%s\t%d\t%d\t%d\n",data[i].consumer_number,data[i].mobileNumber,data[i].name,data[i].used_minutes,data[i].paid_yet,data[i].remaining);
    }
}
void DetailsOfCustomer()
{   
    int i;
    int tempcom;
    printf("Enter the consumer number to be searched: ");
    scanf("%d",&tempcom);
    for(i=0;i<=currentcount;i++){
        if(data[i].consumer_number==tempcom){
            printf("\nDetails of the customer: \n");
            printf("\nConsumer number: %d\n",data[i].consumer_number);
            printf("Mobile number: %s\n",data[i].mobileNumber);
            printf("Name: %s\n",data[i].name);
            printf("Used minutes: %d\n",data[i].used_minutes);
            printf("Paid yet: %d\n",data[i].paid_yet);
            printf("Remaining amount: %d\n",data[i].remaining);
        }
    }
}
void main()
{
    int q;
    char ch;
    while(q){
        printf("Enter the action you want to perform\n");
        printf("N to Add a new customer\n");
        printf("D to Display the details of a customer\n");
        printf("A to Display the details of all customers\n");
        printf("Q to Exit\n");
        scanf("%c",&ch);
        switch (ch)
        {
        case 'N':
            EnterNewCustomer();
            break;
        case 'D':
            DetailsOfCustomer();
            break;
        case 'A':
            DisplayAllCustomers();
            break;
        case 'Q':   
            q=0;
            break;
        default:
            printf("Invalid Input\n");
            break;
        }

    }
}
