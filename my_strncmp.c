/*
** my_strncmp.c for Exo5J4 in /home/remimarchal/CJour04/marcha_r
** 
** Made by MARCHAL Rémi
** Login   <marcha_r@etna-alternance.net>
** 
** Started on  Thu Mar 24 18:17:35 2016 MARCHAL Rémi
** Last update Thu Apr 21 12:24:32 2016 MARCHAL Rémi
*/
int     my_strncmp(char *s1, char *s2, int n)
{
  int   pos;

  pos = 0;
  while ((pos < n) && s1[pos] != 0 && s2[pos] != 0)
    {
      if (s1[pos] != s2[pos])
	{
	  if (s1[pos] > s2[pos])
	    {
	      return (1);
	    }
	  if (s1[pos] < s2[pos])
	    {
	      return (-1);
	    }
	  pos = pos + 1;
	}
    }
  return (0);
}
