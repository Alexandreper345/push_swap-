int	ft_atoi(const char *nptr)
{
	int	i;
	int	signal;
	int	temp;

	i = 0;
	signal = 1;
	temp = 0;
	while ((nptr[i] >= '\t' && nptr[i] <= '\r') || nptr[i] == ' ')
		i++;
	while (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i + 1] == '-' || nptr[i + 1] == '+')
			return (0);
		if (nptr[i] == '-')
			signal *= -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		temp = temp * 10 + (nptr[i] - '0');
		i++;
	}
	return (signal * temp);
}
// #include <stdio.h>
// int main(void)
// {
// 	printf("%d\n", ft_atoi("1"));
// 	return (0);
// }