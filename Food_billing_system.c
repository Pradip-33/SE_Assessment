#include<stdio.h>
int
main ()
{
  int a, n, p, b, d, i, choose, total;
  char c;
  p = 180;
  b = 100;
  d = 120;
  i = 50;
  total = 0;
  do
	{
	  printf ("\n---------------Menu---------------");
	  printf ("\n1.Pizza            Price: = 180rs/pcs");
	  printf ("\n2.Burger           Price: = 100rs/pcs");
	  printf ("\n3.Dosa             Price: = 120rs/pcs");
	  printf ("\n4.Idli             Price: = 50rs/pcs ");
	  printf ("\nPlease Enter your choose...... :");
	  scanf ("%d", &choose);
	  switch (choose)
		{
		case 1:
		  printf ("\nYou have selected pizza.");
		  break;
		case 2:
		  printf ("\nYou have selected burger.");
		  break;
		case 3:
		  printf ("\nYou have selected dosa.");
		  break;
		case 4:
		  printf ("\nYou have selected idli.");
		  break;
		default:
		  printf ("\n\n\n\t Invalid choice !!!!");
		  break;
		}
	  printf ("\nEnter the quantity : ");
	  scanf ("%d", &n);
	  if (choose == 1)
		{
		  a = p * n;
		}
	  else if (choose == 2)
		{
		  a = b * n;
		}
	  else if (choose == 3)
		{
		  a = d * n;
		}
	  else if (choose == 4)
		{
		  a = i * n;
		}
	  printf ("\nAmount:%d", a);
	  total = total + a;
	  a = 0;
	  printf ("\nTotal Amount is : %d", total);
	  printf ("\n\n\n\t Do you want to conitnue ? (y/n) : ");
	  scanf ("%s", &c);
	}
  while (c == 'y');
  return(0);
}