/*
** my_strdup.c for Exo2J7 in /home/remimarchal/CJour07/marcha_r/my_strdup
** 
** Made by MARCHAL Rémi
** Login   <marcha_r@etna-alternance.net>
** 
** Started on  Mon Mar 28 12:02:22 2016 MARCHAL Rémi
** Last update Mon Mar 28 13:29:50 2016 MARCHAL Rémi
*/
#include<stdlib.h>
char	*my_strcpy(char *dest, char *src);
int	my_strlen(char *str);

char	*my_strdup(char *str)
{
  char	*str_dest;
  
  if ((str_dest = malloc(my_strlen(str))) == 0)
    {
      return (0);
    }
  my_strcpy(str_dest, str);
  return (str_dest);
}
