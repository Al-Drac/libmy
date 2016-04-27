/*
** my_strcat.c for Exo6J4 in /home/remimarchal/CJour04/marcha_r/my_strcat
** 
** Made by MARCHAL Rémi
** Login   <marcha_r@etna-alternance.net>
** 
** Started on  Thu Mar 24 18:28:06 2016 MARCHAL Rémi
** Last update Thu Apr 21 12:45:07 2016 MARCHAL Rémi
*/
int     my_strlen(char *str);
char	*my_strcat(char *str1, char *str2)
{
  int	length;
  int	count;
  
  length = my_strlen(str2);
  count = 0;
  while (str2[count])
    {
      str1[length + count] = str2[count];
      count++;
    }
  str1[length + count] = '\0';
  return(0);
}


  
