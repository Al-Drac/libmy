/*
** my_put_nbr.c for Exo1j5 in /home/remimarchal/CJour05/marcha_r/my_put_nbr
** 
** Made by MARCHAL Rémi
** Login   <marcha_r@etna-alternance.net>
** 
** Started on  Fri Mar 25 13:22:25 2016 MARCHAL Rémi
** Last update Thu Apr 21 13:48:44 2016 MARCHAL Rémi
*/
#include <unistd.h>

void     my_putchar(char c);
void    my_putstr(char *str);

void	my_put_nbr(int n)
{
  int	limit;
  int	limitmin;

  limit = 2147483647;
  limitmin = -2147483648;
  if (n == -2147483648)
    {
      my_putstr("-2147483648");
    }
  else
    {
      if ((n > limit) || (n < limitmin))
	{
	  my_putchar('\0');
	}
      else if (n > 9)
	{
	  my_put_nbr(n / 10);
	  my_putchar((n % 10) + 48);
	}
      else if (n >= 0 && n <= 9)
	{
	  my_putchar(n + 48);
	}
      if (n < 0)
	{
	  my_putchar('-');
	  n = n * -1;
	  if (n > 9)
	    {
	      my_put_nbr(n / 10);
	    }
	  else
	    {
	      my_put_nbr(n);
	    }
	}
    }
}
