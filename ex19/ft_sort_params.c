/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 16:02:12 by cseguier          #+#    #+#             */
/*   Updated: 2018/11/07 15:43:55 by cseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i])
	{
		i++;
		if (!s1[i] && !s2[i])
			return (0);
	}
	return (s1[i] - s2[i]);
}

void	ft_sort(int nb, char **argv)
{
	int		i;
	int		j;
	char	*c;

	i = 0;
	while (++i < nb)
	{
		c = argv[i];
		j = i;
		while ((j > 0) && (ft_strcmp(argv[j - 1], c) > 0))
		{
			argv[j] = argv[j - 1];
			j--;
		}
		argv[j] = c;
	}
}

int		main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	ft_sort(argc, argv);
	while (argc > j)
	{
		while (argv[j][i])
		{
			ft_putchar(argv[j][i]);
			i++;
		}
		ft_putchar('\n');
		i = 0;
		j++;
	}
	return (0);
}
