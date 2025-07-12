/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gveneran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 16:31:47 by gveneran          #+#    #+#             */
/*   Updated: 2025/06/07 16:46:12 by gveneran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	src[] = "Test_Example_To_Test";
	char	dest[] = "00000000000";
	int	n = 5;

	char	*res_original = strncpy(dest, src, n);
	char	*res = ft_strncpy(dest, src, n);

	printf("Retorno original: %s\n", res_original);
	printf("Retorno ft: %s\n", res);

	return (0);
}
*/
