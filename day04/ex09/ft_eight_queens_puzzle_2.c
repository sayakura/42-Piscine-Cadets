/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle_2.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 01:35:52 by kpeng             #+#    #+#             */
/*   Updated: 2018/08/22 15:53:30 by kpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static unsigned int	g_counter = 0;

#define N 8

int		ft_putchar(char c);

int		check(int board[][N], int row, int col)
{
	int i;
	int j;

	i = 0;
	while (i < col)
		if (board[row][i++])
			return (0);
	i = row;
	j = col;
	while (j >= 0 && i >= 0)
		if (board[i--][j--])
			return (0);
	i = row;
	j = col;
	while (j >= 0 && i < N)
		if (board[i++][j--])
			return (0);
	return (1);
}

void	initialize(int board[][N])
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < N)
	{
		j = 0;
		while (j < N)
			board[i][j++] = 0;
		i++;
	}
}

void	print_board(int board[][N])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < N)
	{
		j = 0;
		while (j < N)
		{
			if (board[i][j] == 1)
				ft_putchar((j + 1) + 48);
			j++;
		}
		i++;
	}
	ft_putchar('\n');
}

int		solve(int board[N][N], int col)
{
	int i;

	i = 0;
	if (col >= N)
		return (1);
	while (i < N)
	{
		if (check(board, i, col))
		{
			board[i][col] = 1;
			if (solve(board, col + 1))
			{
				g_counter++;
				print_board(board);
			}
			board[i][col] = 0;
		}
		i++;
	}
	return (0);
}

void	ft_eight_queens_puzzle_2(void)
{
	int chess[N][N];

	initialize(chess);
	solve(chess, 0);
}