/*
** my_putstr.c for exo1j3 in /home/remimarchal/CJour03/marcha_r/my_putstr
** 
** Made by MARCHAL Rémi
** Login   <marcha_r@etna-alternance.net>
** 
** Started on  Wed Mar 23 09:56:27 2016 MARCHAL Rémi
** Last update Wed Mar 23 09:56:37 2016 MARCHAL Rémi
*/
#include <unistd.h>

void    my_putchar(char c);
void    my_putstr(char *str)
{
  while (*str != '\0')
    {
      my_putchar(*str);
      str = str + 1;
    }
}
