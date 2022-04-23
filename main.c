/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaguiler <aaguiler@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 18:49:32 by aaguiler          #+#    #+#             */
/*   Updated: 2022/04/23 11:38:13 by aaguiler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <strings.h>
#include <ctype.h>

int main(void)
{
	printf("ft_isalpha\n");
	printf("	Original: %d\n	Ft: %d\n", isalpha(5), ft_isalpha(5));
	printf("----------------\n");
	
	printf("ft_isdigit\n");
	printf("	Original: %d\n	Ft: %d\n", isdigit(5), ft_isdigit(5));
	printf("----------------\n");
	
	printf("ft_isalnum\n");
	printf("	Original: %d\n	Ft: %d\n", isalnum(5), ft_isalnum(5));
	printf("----------------\n");
	
	printf("ft_isascii\n");
	printf("	Original: %d\n	Ft: %d\n", isascii(5), ft_isascii(5));
	printf("----------------\n");
	
	printf("ft_isprint\n");
	printf("	Original: %d\n	Ft: %d\n", isprint(5), ft_isprint(5));
	printf("----------------\n");
	
	printf("ft_strlen\n");
	printf("	Original: %lu\n	Ft: %zu\n", strlen("hola"), ft_strlen("hola"));
	printf("----------------\n");

	char	str[50] = "This is an example";
	char	str2[50] = "This is an example";
	printf("ft_memset\n");
	printf("	Original: %s\n	Ft: %s\n", memset(str, '$', 5), ft_memset(str2, '$', 5));
	printf("----------------\n");

	printf("ft_bzero\n");
	bzero(str, 5);
	ft_bzero(str2, 5);

	printf("	Original: %s\n	Ft: %s\n", str, str2);
	printf("----------------\n");

	printf("ft_memcpy\n");
	char	strm[50] = "h";
	char	strm2[50] = "h";

	//char	strn[50] = "hola";
	//char	strn2[50] = "0;
	
	printf("	Orig: %s", memcpy (0, 0, 3));
	printf("	Ft: %s\n", ft_memcpy (0, 0, 3));

	printf("	Original: %s\n	Ft: %s\n", strm, strm2);
	printf("----------------\n");
	
	printf("ft_memmove\n");

	char	strnn[50] = "hola me llamo carlos";
	char	strnn2[50] = "hola me llamo carlos";
	
	printf("	Orig: %s", memmove (strnn + 3, strnn, 8));
	printf("	Ft: %s\n", ft_memmove (strnn2 + 3, strnn2, 8));

	printf("	Original: %s\n	Ft: %s\n", strnn, strnn2);
	printf("----------------\n");
	
	printf("ft_strlcpy\n");
	char str12[20] = "e";
 	char str22[20] = "hola";
	
	char str122[20] = "e";
 	char str222[20] = "hola";
	puts("	FT_");
  	ft_strlcpy(str12, str22,2);
  	printf("%s\n",str12);
	puts("	orig_");
  	strlcpy(str122, str222,2);
  	printf("%s\n",str122);
	puts("------------------");

	puts("ft_strlcat");
	char s1[30] = "hola";
	char s2[30] = " y adios";
	char ss1[30] = "hola";
	char ss2[30] = " y adios";
	
	int n11 = ft_strlcat(s1, s2, 3);
	int n22 = strlcat(ss1, ss2, 3);

	printf("	Orig: %s N: %d\n", s1, n11);	
	printf("	Ft: %s N: %d\n", ss1, n22);
	puts("------------------");

	puts("ft_toupper");
	
	printf("	FT_: %c\n", ft_toupper('c'));
	printf("	Orig: %c\n", toupper('c'));

	puts("------------------");
	
	puts("ft_tolower");
	
	printf("	FT_: %c\n", ft_tolower('C'));
	printf("	Orig: %c\n", tolower('C'));

	puts("------------------");
	
	puts("ft_strchr");
	
	printf("	FT_: %s\n", ft_strchr("Casa", 'b'));
	printf("	Orig: %s\n", strchr("Casa", 'b'));

	puts("------------------");
	
	puts("ft_strrchr");
	
	printf("	FT_: %s\n", ft_strrchr("Casa", 'a'));
	printf("	Orig: %s\n", strrchr("Casa", 'a'));

	puts("------------------");

	puts("ft_strncmp");
	
	printf("	FT_: %d\n", ft_strncmp("Casa", "Casa", 3));
	printf("	Orig: %d\n", strncmp("Casa", "Casa", 3));

	puts("------------------");

	puts("ft_memchr");
	
	printf("	FT_: %s\n", ft_memchr("Casa", 'a', 3));
	printf("	Orig: %s\n", memchr("Casa", 'a', 3));

	puts("------------------");

	puts("ft_memcmp");
	
	printf("	FT_: %d\n", ft_memcmp("Casa", "CaSa", 4));
	printf("	Orig: %d\n", memcmp("Casa", "CaSa", 4));

	puts("------------------");
	
	puts("ft_strnstr");
	
	printf("	FT_: %s\n", ft_strnstr("pepito", "pito", 8));
	printf("	Orig: %s\n", strnstr("pepito", "pito", 8));

	puts("------------------");
	
	puts("ft_atoi");
	
	printf("	FT_: %d\n", ft_atoi(" 	-123ds21"));
	printf("	Orig: %d\n", atoi(" 	-123asdf21"));

	puts("------------------");
	
	puts("ft_calloc");

	printf("	FT_: %s\n", ft_calloc(3, 1));
	printf("	Orig: %s\n", calloc(3, 1));
	
	puts("------------------");
	
	puts("ft_strdup");

	printf("	FT_: %s\n", ft_strdup("hola"));
	printf("	Orig: %s\n", strdup("hola"));

	
	puts("------------------");
	
	puts("ft_substr");

	printf("	FT_: %s\n", ft_substr("hola me llamo carlos", 55, 2));

	puts("------------------");
	
	puts("ft_strjoin");

	printf("	Ft: %s\n", ft_strjoin("hola ", "y adios"));

	puts("------------------");

	puts("ft_strtrim");

	printf("	Ft: %s\n", ft_strtrim(" abssacchola", "aab ssc"));

	puts("------------------");
	
	puts("ft_itoa");

	printf("	Ft: %s \n", ft_itoa(1234));
	
	puts("------------------");
}
