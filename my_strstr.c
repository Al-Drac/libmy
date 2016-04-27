/*
** my_strstr.c for my_strstrlib2 in /home/remimarchal/libmy/marcha_r/libmy_02
** 
** Made by MARCHAL Rémi
** Login   <marcha_r@etna-alternance.net>
** 
** Started on  Tue Mar 29 10:22:02 2016 MARCHAL Rémi
** Last update Thu Apr 21 11:38:10 2016 MARCHAL Rémi
*/

int	my_strlen(char *str);

char	*my_strstr(char *str, char *to_find)
{
  int	pos;
  int	start;
  char	*null;

  pos = 0;
  start = 0;
  null = "null";
  
  while (str[pos] != '\0')
    {
      if (str[pos] == to_find[start])
	{
	  while (str[pos] == to_find[start])
	    {
	      pos = pos + 1;
	      start = start + 1;
	    }
	  if (start == my_strlen(to_find))
	      return (&str[pos - start]);
	}
      else
	  pos = pos + 1;
    }
  return (null);
}
