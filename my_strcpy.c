/*
** my_strcpy.c for Exo2j4 in /home/remimarchal/CJour04/marcha_r/my_strcpy
** 
** Made by MARCHAL Rémi
** Login   <marcha_r@etna-alternance.net>
** 
** Started on  Thu Mar 24 10:03:56 2016 MARCHAL Rémi
** Last update Thu Mar 24 18:02:52 2016 MARCHAL Rémi
*/
char	*my_strcpy(char *dest, char *src)
{
  int	pos;
  char *stock;
    
  pos = 0;
  stock = dest;
  while(src[pos] != '\0')
    {
      dest[pos] = src[pos];
      pos = pos + 1;
    }
  dest[pos] = '\0';
  return (stock);
}
   

