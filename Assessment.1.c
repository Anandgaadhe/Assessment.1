#include<stdio.h>
int main()
 
{
  	int Pizza,Burger,Dosa,Idli,Quality,Amount=0,Chose,Totalamount=0;
 	char ans,y,n;
 	start :
 
 	printf("\n1.Pizza");
	printf("\t\tprice = 180rs/pcs");
 	printf("\n2.Burger");
 	printf("\tprice = 100rs/pcs");
 	printf("\n3.Dosa");
	printf("\t\tprice = 120rs/pcs");
 	printf("\n4.Idli");
 	printf("\t\tprice = 50rs/pcs");
 	printf("\nplese Enter your chose...: ");
 	scanf("%d",&Chose);
 	
 
 switch(Chose)
 {
	case 1: 
		Pizza = 180;
		printf("\nYou have selected Pizza");
		printf("\nplease Enter the Quality = ");
 		scanf("%d",&Quality);
 		Amount=Pizza*Quality;
 		printf("Amount=%d",Amount);
 		Totalamount=Totalamount+Amount;
 		printf("\nTotalamount=%d",Totalamount);
	break;

	case 2: 
		Burger = 100;
		printf("\nYou have selected Burger");
		printf("\nplease Enter the Quality = ");
 		scanf("%d",&Quality);
 		Amount=Burger*Quality;
 		printf("Amount=%d",Amount);
 		Totalamount=Totalamount+Amount;
 		printf("\nTotalamount=%d",Totalamount);
	break;
	case 3: 
		Dosa = 120;
		printf("\nYou have selected Dosa");
		printf("\nplease Enter the Quality = ");
 		scanf("%d",&Quality);
 		Amount=Dosa*Quality;
 		printf("Amount=%d",Amount);
 		Totalamount=Totalamount+Amount;
 		printf("\nTotalamount=%d",Totalamount);
	break;
	case 4: 
		Idli = 50;
		printf("\nYou have selected Idli");
		printf("\nplease Enter the Quality = ");
 		scanf("%d",&Quality);
 		Amount=Idli*Quality;
 		printf("Amount=%d",Amount);
 		Totalamount=Totalamount+Amount;
 		printf("\nTotalamount=%d",Totalamount);
	break;
	default : printf("\nInvalid Input"); 		
}
 
 	printf("\nDo you want place more order? y & n :");
 	scanf(" %c", &ans);

 	if(ans=='y')
 	{ 
 		printf("-----------------MENU-----------------");
 		goto start;
 	}
 	else 
 	{
		if(ans=='n')
 		{
	 		goto end;
 		}
 
 	}
 	end:
 	return 0;
}
