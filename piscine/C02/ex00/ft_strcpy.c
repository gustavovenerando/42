/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gveneran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 16:13:31 by gveneran          #+#    #+#             */
/*   Updated: 2025/06/07 16:14:32 by gveneran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char src[] = "Aloha";
	char dest[] = "00000000";

	char *res_original = strcpy(dest, src);
	char *res = ft_strcpy(dest, src);

	printf("Retorno funcao original: %s\n", res_original);
	printf("Retorno funcao ft: %s\n", res);
	return (0);
}
*/
