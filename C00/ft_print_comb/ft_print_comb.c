#include <unistd.h>

void	write_c(char c[])
{
	if (c[0] == '7' && c[1] == '8' && c[2] == '9')
	{
		write(1, c, 3);
		write(1, "\n", 1);
	}
	else
		write(1,c,5);
}

void	ft_print_comb(void)
{
	char	c[5];

	c[0] = '0';
	c[3] = ',';
	c[4] = ' ';
	while(c[0] <= '7')
	{
		c[1] = c[0] + 1;
		while(c[1] <= '8')
		{
			c[2] = c[1] + 1;
			while(c[2] <= '9')
			{
				write_c(c);
				c[2]++;
			}
			c[1]++;
		}
		c[0]++;
	}
}


int	main()
{
	ft_print_comb();
	return 0;
}
