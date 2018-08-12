int		ft_atoi(const char *str)
{
	int	number;
	int sign;
	int i;

	i = 0;
	number = 0;
	sign = 1;
	while ((*str == '\n') || (*str == ' ') || (*str == '\t')
				|| (*str[i] == '\v') || (*str == '\f') || (*str == '\r'))
			str++;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		str++;
		sign = -1;
	}
	while (*str && *str >= '0' && *str <= '9')
	{
		number *= 10;
		number += *str - '0';
		str++;
	}
	number *= sign;
	return (number);
}
