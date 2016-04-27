/*
** my_strncpy.c for exo3J4 in /home/remimarchal/CJour04/marcha_r/my_strncpy
** 
** Made by MARCHAL Rémi
** Login   <marcha_r@etna-alternance.net>
** 
** Started on  Thu Mar 24 14:26:15 2016 MARCHAL Rémi
** Last update Thu Apr 21 11:33:20 2016 MARCHAL Rémi
*/
char	*my_strncpy(char *dest, char *src, int n)
{
  int	pos;
  int	count;

  pos = 0;
  count = 0;
  while(src[count] != '\0')
    {
      count = count + 1;
    }
  for (;pos < n; pos = pos + 1)
    {
      dest[pos] = src[pos];
      pos = pos + 1;
    }
  if (n > count)
    {
      while (pos == count)
	{
	  dest[pos] = '\0';
	  pos = pos + 1;
	}
    }
  return (dest);
}
