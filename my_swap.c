/*
** my_swap.c for Exo4j3 in /home/remimarchal/CJour03/marcha_r/my_swap
** 
** Made by MARCHAL Rémi
** Login   <marcha_r@etna-alternance.net>
** 
** Started on  Wed Mar 23 11:37:05 2016 MARCHAL Rémi
** Last update Wed Mar 23 11:47:14 2016 MARCHAL Rémi
*/
void my_swap(int *a, int *b)
{
  int stock;
  stock = *a;
  *a = *b;
  *b = stock;
}
