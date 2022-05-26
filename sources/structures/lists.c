/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lists.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleblanc <fleblanc@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 11:46:17 by fleblanc          #+#    #+#             */
/*   Updated: 2022/05/26 11:13:57 by fleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_count_index(char **list)
{
	int	i;

	i = 0;
	while (list[i])
		i++;
	return (i);
}

char	**ft_create_list(int argc, char **argv)
{
	char	**result;
	int		i;
	size_t	len;

	i = 0;
	result = ft_calloc(argc - 1, sizeof(char *));
	if (!result)
		return (NULL);
	while (i < argc - 1)
	{
		len = ft_strlen(argv[i + 1]);
		result[i] = ft_calloc(len + 1, sizeof(char));
		if (!result[i])
		{
			ft_free_list(result);
			return (NULL);
		}
		result[i] = argv[i + 1];
		i++;
	}
	result[i] = NULL;
	return (result);
}

void	ft_free_list(char **list)
{
	int	i;

	i = 0;
	while (list[i])
	{
		free(list[i]);
		i++;
	}
	free(list);
}
