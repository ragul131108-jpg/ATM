#include<stdio.h>

int main()
{
   int pin=1234;
   int enteredpin;
   int choice;
   float balance=5000;
   float amount;

   printf("=====WELCOME TO ATM=====");
   printf("Enter your PIN:");
   scanf("%d",&enteredpin);

   if (enteredpin !=pin)
   {
      printf("invalid PIN! \n");
      return 0;
   }
   printf("\nlogin successfully!\n");

   do
   {
      printf("\n=======ATM MENU =====\N");
      printf("1.check Balnce \n");
      printf("2.Deposit Money\n");
      printf("3.withdraw Money\n");
      printf("4.Exit\n");

      printf("Enter your choice");
      scanf("%d",&choice);

      switch(choice)
      {
	case 1:
	   printf("enter deposit amount:");
	   break;
	case 2:
	   printf("enter deposit amount");
	   scanf("%f",&amount);

	   if (amount>0)
	   {
	       balance=balance+amount;
	       printf("Money deposited successfully");
	       printf("New balance:Rs.%2f\n",balance);
	   }
	   else
	   {
	       printf("invalid amount!\n");
	   }
	   break;
	case 3:
	   printf("Enter withdraw amount:");
	   scanf("%f",&amount);

	   if(amount<=0)
	   {
	       printf("invalid amount\n");
	   }
	   else if(amount<=balance)
	   {
		balance=balance-amount;
		printf("please collect your cash.\n");
		printf("remaining balance:Rs.%.2f\n",balance);
	   }
	   else
	   {
	      printf("insufficient balance!\n");
	   }
	   break;
	case 4:
	    printf("thank you for using ATM!\n");
	    break;
	default:
	    printf("invalid choice!\n");

      }
   }while(choice!=4);
   return 0;
}