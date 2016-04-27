/*
** my_strlen.c for exo2j3 in /home/remimarchal/CJour03/marcha_r/my_strlen
** 
** Made by MARCHAL Rémi
** Login   <marcha_r@etna-alternance.net>
** 
** Started on  Wed Mar 23 09:58:16 2016 MARCHAL Rémi
** Last update Wed Mar 23 18:20:35 2016 MARCHAL Rémi
*/
int	my_strlen(char *str)
{
  int	count;
  count = 0;
  while (*str != '\0')
    {
      str = str + 1;
      count = count + 1;
    }
  return (count);
}
