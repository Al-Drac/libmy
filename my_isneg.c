/*
** my_isneg.c for exo10 in /home/remimarchal/CJour01/marcha_r/my_isneg
** 
** Made by MARCHAL Rémi
** Login   <marcha_r@etna-alternance.net>
** 
** Started on  Mon Mar 21 17:56:21 2016 MARCHAL Rémi
** Last update Mon Mar 21 18:26:34 2016 MARCHAL Rémi
*/
#include <unistd.h>
int	my_isneg(int n)
{
  if (n >= 0)
    {
      n = 1;
    }
  else
    {
      n = 0;
    }
  return (n);
}
