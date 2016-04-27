/*
** my_strncat.c for Exo7J4 in /home/remimarchal/CJour04/marcha_r/my_strncat
** 
** Made by MARCHAL Rémi
** Login   <marcha_r@etna-alternance.net>
** 
** Started on  Thu Mar 24 19:35:27 2016 MARCHAL Rémi
** Last update Thu Apr 21 12:44:10 2016 MARCHAL Rémi
*/
int	my_strlen(char *str);

char	*my_strncat(char *str1, char *str2, int n)
{
  int	length;
  int	count;

  length = my_strlen(str2);
  count = 0;
  while (str2[count] && count < n)
    {
      str1[length + count] = str2[count];
      count++;
    }
  str1[length + count] = '\0';
  return(0);
}
