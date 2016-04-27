/*
** my_getnbr.c for Exo2J5 in /home/remimarchal/CJour05/marcha_r/my_gtnbr
** 
** Made by MARCHAL Rémi
** Login   <marcha_r@etna-alternance.net>
** 
** Started on  Fri Mar 25 17:53:28 2016 MARCHAL Rémi
** Last update Sat Mar 26 15:51:09 2016 MARCHAL Rémi
*/
int	my_getneg(char *str, int *count)
{
  int	neg;
  int	temp;

  neg = 0;
  temp = 1;
  while ((str[*count] == '-') || (str[*count] == '+'))
    {
      if (str[*count] == '-')
	{
	  neg = neg + 1;
	  *count = *count + 1;
	}
      else if (str[*count] == '+')
	{
	  *count = *count + 1;
	}
    }
  if (neg % 2 != 0)
    {
      temp = -1;
    }
return (temp);
}
  
int	my_getnbr(char *str)
{
  int	result;
  int	stock;
  int	tempbis;
  int	count;
  
  result = 0;
  stock = 0;
  count = 0;
  tempbis = my_getneg(str,&count);
    
  while (str[count] != '\0')
    {
      if ((str[count] > 48) && (str[count] < 57))
	{
	  stock = str[count] - 48;
	  result = result * 10 + stock;
	  count = count + 1;
	}
      else
	{
	  return (result * tempbis);
	}
    }
  return (result * tempbis);
}

    
