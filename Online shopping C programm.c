/******************************************************************************
  Programmer:- G Krishna Sai
  Program :- A  C program on online shopping

*******************************************************************************/

#include<stdio.h>
#include<string.h>
main ()
{
  static int totalCost;
  int i, j, choice, c = 1, a[9], cost[9];
  for (i = 0; i < 9; i++)
    a[i] = 0;

  char str[100];
  char items[9][100] = { "Titan",
    "Fast track",
    "G Shock",
    "Lenova i3",
    "Asus i5",
    "Dell i7",
    "Cricket Set",
    "Golf Set",
    "Badmanton Racquet"
  };
  printf ("Please Enter Your Name\n");
  gets (str);
  printf ("Hello %s, Welcome to our Online Shopping.\n", str);
  do
    {
      //C is 1 by default
      if (c == 1)
	{
	  printf
	    ("Enter\n1 - Watchs\n2 - Laptops\n3 - Sports\nAny other number to exit\n");
	  scanf ("%d", &choice);
	  switch (choice)
	    {
	    case 1:
	      {
		int WatchsChoice;
		printf
		  ("Enter\n1 - Titan - Rs.2338\n2 - Fast track- Rs.655\n3 - G Shock - Rs.1678\nAny other number to exit\n");
		scanf ("%d", &WatchsChoice);
		cost[0] = 2388;
		cost[1] = 655;
		cost[2] = 1678;
		switch (WatchsChoice)
		  {
		  case 1:
		    {
		      int num;
		      printf
			("You choose Titan with Rs.2338.\nAre you sure to buy.\nIf 'Yes' Enter 1 else any number\n");
		      scanf ("%d", &num);
		      if (num == 1)
			{
			  a[0]++;
			  totalCost += 2338;
			}
		      printf ("Your Cost in Cart is %d\n", totalCost);
		      break;
		    }
		  case 2:
		    {
		      int num;
		      printf
			("You choose Fast track with Rs.655.\nAre you sure to buy.\nIf 'Yes' Enter 1 else any number\n");
		      scanf ("%d", &num);
		      if (num == 1)
			{
			  a[1]++;
			  totalCost += 655;
			}
		      printf ("Your Cost in Cart is %d\n", totalCost);
		      break;
		    }
		  case 3:
		    {
		      int num;
		      printf
			("You choose G Shock with Rs.1678.\nAre you sure to buy.\nIf 'Yes' Enter 1 else any number\n");
		      scanf ("%d", &num);
		      if (num == 1)
			{
			  a[2]++;
			  totalCost += 1678;
			}
		      printf ("Your Cost in Cart is %d\n", totalCost);
		      break;
		    }
		  default:
		    {
		      printf ("Exit from Watchs\n");
		      break;
		    }
		  }
		break;
	      }
	    case 2:
	      {
		int LaptopsChoice;
		printf
		  ("Enter\n1 - Lenova i3 - Rs.40186\n2 - Asus i5 - Rs.51284\n3 - Dell i7 - Rs.76256\nAny other number to exit\n");
		scanf ("%d", &LaptopsChoice);
		cost[3] = 40186;
		cost[4] = 51284;
		cost[5] = 76256;
		switch (LaptopsChoice)
		  {
		  case 1:
		    {
		      int num;
		      printf
			("You choose Lenova i3 for Rs.40186.\nAre you sure to buy.\nIf 'Yes' Enter 1 else any number\n");
		      scanf ("%d", &num);
		      if (num == 1)
			{
			  a[3]++;
			  totalCost += 40186;
			}
		      printf ("Your Cost in Cart is %d\n", totalCost);
		      break;
		    }
		  case 2:
		    {
		      int num;
		      printf
			("You choose Asus i5 for Rs.51284.\nAre you sure to buy.\nIf 'Yes' Enter 1 else any number\n");
		      scanf ("%d", &num);
		      if (num == 1)
			{
			  a[4]++;
			  totalCost += 51284;
			}
		      printf ("Your Cost in Cart is %d\n", totalCost);
		      break;
		    }
		  case 3:
		    {
		      int num;
		      printf
			("You choose Dell i7 for Rs.76256.\nAre you sure to buy.\nIf 'Yes' Enter 1 else any number\n");
		      scanf ("%d", &num);
		      if (num == 1)
			{
			  a[5]++;
			  totalCost += 76256;
			}
		      printf ("Your Cost in Cart is %d\n", totalCost);
		      break;
		    }
		  default:
		    {
		      printf ("Exit from Laptops Category\n");
		      break;
		    }
		  }
		break;
	      }
	    case 3:
	      {
		int SportsChoice;
		printf
		  ("Enter\n1 - Cricket Set - Rs.3149\n2 - Golf Set - Rs.21806\n3 - Badmanton Racquet - Rs.1389\nAny other number to exit\n");
		scanf ("%d", &SportsChoice);
		cost[6] = 3149;
		cost[7] = 21806;
		cost[8] = 1389;
		switch (SportsChoice)
		  {
		  case 1:
		    {
		      int num;
		      printf
			("You choose to buy Cricket Set for Rs.3149.\nAre you sure to buy.\nIf 'Yes' Enter 1 else any number\n");
		      scanf ("%d", &num);
		      if (num == 1)
			{
			  a[6]++;
			  totalCost += 3149;
			}
		      printf ("Your Cost in Cart is %d\n", totalCost);
		      break;
		    }
		  case 2:
		    {
		      int num;
		      printf
			("You choose to buy Golf Set for Rs.21806.\nAre you sure to buy.\nIf 'Yes' Enter 1 else any number\n");
		      scanf ("%d", &num);
		      if (num == 1)
			{
			  a[7]++;
			  totalCost += 21806;
			}
		      printf ("Your Cost in Cart is %d\n", totalCost);
		      break;
		    }
		  case 3:
		    {
		      int num;
		      printf
			("You choose to buy Badminton Racket for Rs.1389.\nAre you sure to buy.\nIf 'Yes' Enter 1 else any number\n");
		      scanf ("%d", &num);
		      if (num == 1)
			{
			  a[8]++;
			  totalCost += 1389;
			}
		      printf ("Your Cost in Cart is %d\n", totalCost);
		      break;
		    }
		  default:
		    {
		      printf ("Exit from Sports Category\n");
		      break;
		    }
		  }
		break;
	      }
	    default:
	      {
		printf ("Enter Valid Categories Choice\n");
		break;
	      }
	    }
	  printf ("%s's cart\n", str);
	  printf ("Id\tItems\t\tQuantity\t\t\tCost\n");
	  for (i = 0; i < 9; i++)
	    {
	      if (a[i] != 0)
		{
		  printf ("%d\t%s\t\t%d\t\t\t%d\n", i, items[i], a[i],
			  (cost[i] * a[i]));
		}
	    }
	  printf ("Total Cost\t\t\t\t\t%d\n", totalCost);
	  printf
	    ("If you wish to buy anything more Enter\n1 to Add Item\n2 to Delete Items\n3 to Change Quantity \nAny other number to Exit\n");
	  scanf ("%d", &c);
	}
      if (c == 2)
	{
	  int id;
	  printf ("Enter id to delete item\n");
	  scanf ("%d", &id);
	  if (id < 9 && id > 0)
	    {
	      totalCost = totalCost - (cost[id] * a[id]);
	      a[id] = 0;
	    }
	  else
	    {
	      printf ("Enter Valid id\n");
	    }
	  printf ("Revised Items \n");
	  printf ("Id\tItems\t\tQuantity\t\t\tCost\n");
	  for (i = 0; i < 9; i++)
	    {
	      if (a[i] != 0)
		{
		  printf ("%d\t%s\t\t%d\t\t\t%d\n", i, items[i], a[i],
			  (cost[i] * a[i]));
		}
	    }
	  printf ("Total Cost\t\t\t\t\t%d\n", totalCost);
	  printf
	    ("If you wish to buy anything more Enter\n1 to Add Item\n2 to Delete Items\n3 to Change Quantity \nAny other number to Exit\n");
	  scanf ("%d", &c);
	}
      if (c == 3)
	{
	  int id, quantity;
	  printf ("Enter id to Change quantity of an item\n");
	  scanf ("%d", &id);
	  printf ("Enter quantity to be changed of an item\n");
	  scanf ("%d", &quantity);
	  if (id < 9 && id > 0)
	    {
	      if (quantity > 0 && a[id] > 0)
		{
		  if (quantity < a[id])
		    {
		      int dec = a[id] - quantity;
		      a[id] = quantity;
		      totalCost = totalCost - (cost[id] * dec);
		    }
		  if (quantity > a[id])
		    {
		      int inc = quantity - a[id];
		      a[id] = quantity;
		      totalCost = totalCost + (cost[id] * inc);
		    }
		  if (quantity == a[id])
		    {
		      a[id] = quantity;
		      totalCost = totalCost + 0;
		    }

		}
	      else
		{
		  printf ("Item has no Quantity.Please Try again\n");
		}
	    }
	  else
	    {
	      printf ("Enter Valid id\n");
	    }
	  printf ("Revised Items \n");
	  printf ("Id\tItems\t\tQuantity\t\t\tCost\n");
	  for (i = 0; i < 9; i++)
	    {
	      if (a[i] != 0)
		{
		  printf ("%d\t%s\t\t%d\t\t\t%d\n", i, items[i], a[i],
			  (cost[i] * a[i]));
		}
	    }
	  printf ("Total Cost\t\t\t\t\t%d\n", totalCost);
	  printf
	    ("If you wish to buy anything more Enter\n1 to Add Item\n2 to Delete Items\n3 to Change Quantity \nAny other number to Exit\n");
	  scanf ("%d", &c);
	}
    }
  while (c == 1 || c == 2 || c == 3);
  printf ("Your Final Cost is %d\n", totalCost);
  int z;
  printf
    ("Which payment u want to choose\nEnter\n 1- Cash\n 2- Cheque\n 3- Card\n");
  scanf ("%d", &z);
  if (z == 1 || z == 2 || z == 3)
    {
      printf ("Your payment has been done\n");
    }
  printf ("Thanks %s for Choosing Us and Visit us again.\n", str);

}
