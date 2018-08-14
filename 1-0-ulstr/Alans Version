 1 /* ************************************************************************** */
  2 /*                                                                            */
  3 /*                                                        :::      ::::::::   */
  4 /*   ulstr2.c                                           :+:      :+:    :+:   */
  5 /*                                                    +:+ +:+         +:+     */
  6 /*   By: abarrett <marvin@42.fr>                    +#+  +:+       +#+        */
  7 /*                                                +#+#+#+#+#+   +#+           */
  8 /*   Created: 2018/08/14 03:55:06 by abarrett          #+#    #+#             */
  9 /*   Updated: 2018/08/14 04:44:27 by abarrett         ###   ########.fr       */
 10 /*                                                                            */
 11 /* ************************************************************************** */
 12
 13 #include <unistd.h>
 14
 15 int     xxx(char c)
 16 {
 17     char index;
 18
 19     if (c >= 'A' && c <= 'Z')
 20     {
 21         index = c + 32;
 22         return (index);
 23     }
 24     if (c >= 'a' && c <= 'z')
 25     {
 26         index = c -32;
 27         return (index);
 28     }
 29     else
 30         index = c;
 31         return (index);
 32 }
 33
 34 int     main(int argc, char **argv)
 35 {
 36     char index;
 37     int i;
 38
 39     i = 0;
 40     if (argc != 2)
 41     {
 42         write(1, "\n", 1);
 43     }
 44     while (argv[1][i])
 45     {
 46         index = xxx(argv[1][i]);
 47         write(1, &index, 1);
 48         i++;
 49     }
 50     write(1, "\n", 1);
 51     return (0);
 52 }
~
