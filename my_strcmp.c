/*
** my_strcmp.c for exo4j4 in /home/remimarchal/CJour04/marcha_r/my_strcmp
** 
** Made by MARCHAL Rémi
** Login   <marcha_r@etna-alternance.net>
** 
** Started on  Thu Mar 24 15:22:22 2016 MARCHAL Rémi
** Last update Thu Apr 21 12:05:42 2016 MARCHAL Rémi
*/
int	my_strlen(char *str);

int     my_strcmp(char *s1, char *s2)
{
  int   count;
  int   length_s1;
  int   length_s2;

  count = 0;
  length_s1 = (my_strlen (s1));
  length_s2 = (my_strlen (s2));
  if (length_s1 < length_s2)
      return (-1);
  else if (length_s1 > length_s2)
      return (1);
  else
    {
      for (count = 0; count < length_s1 ; count = count + 1)
	{
	  if (s1[count] != s2[count])
	    {
	      if (s1[count] < s2[count])
		  return (-1);
	      if (s1[count] > s2[count])
		  return (1);
	    }
	}
    }
  return (0);
}
