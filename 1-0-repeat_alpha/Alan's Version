  1 /* ************************************************************************** */
  2 /*                                                                            */
  3 /*                                                        :::      ::::::::   */
  4 /*   repeat_alpha2.c                                    :+:      :+:    :+:   */
  5 /*                                                    +:+ +:+         +:+     */
  6 /*   By: abarrett <marvin@42.fr>                    +#+  +:+       +#+        */
  7 /*                                                +#+#+#+#+#+   +#+           */
  8 /*   Created: 2018/08/14 01:55:40 by abarrett          #+#    #+#             */
  9 /*   Updated: 2018/08/14 02:18:25 by abarrett         ###   ########.fr       */
 10 /*                                                                            */
 11 /* ************************************************************************** */
 12
 13 #include <unistd.h>
 14
 15 int     lcase(char c)
 16 {
 17     int index;
 18
 19     if (c >= 'a' && c <= 'z')
 20     {
 21         index = c - 'a' + 1;
 22         return (index);
 23     }
 24     if  (c >= 'A' && c <= 'Z')
 25     {
 26         index = c - 'A' + 1;
 27         return (index);
 28     }
 29     else
 30         c = 1;
 31         return (1);
 32 }
 33
 34 int     main(int argc, char **argv)
 35 {
 36     int i;
 37     int index;
 38
 39     i = 0;
 40     if (argc != 2)
 41     {
 42         write(1, "\n", 1);
 43     }
 44     while (argv[1][i])
 45     {
 46         index = lcase(argv[1][i]);
 47         while (index--)
 48
 49             write(1, &argv[1][i], 1);
 50             i++;
 51     }
 52     write(1, "\n", 1);
 53     return (0);
 54 }
