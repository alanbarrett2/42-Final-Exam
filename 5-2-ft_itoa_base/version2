#include <stdio.h>
#include <stdlib.h>


int		get_length(int value, int base)
{
	int	ret;

	ret = 0;
	if (value == 0)
		return (1);
	if (value < 0 && base == 10)
		++ret;
	while (value != 0)
	{
		value = value / base;
		ret++;
	}
	return (ret);
}

char	*ft_itoa_base(int value, int base)
{
	int neg;
	char *num;
	int	len;
	long  value_cpy;
	char	buff[16] = "0123456789ABCDEF";
	
	neg = 0;
	len = get_length(value, base);
	num = (char *)malloc(sizeof(*num) * (len));
	if (!num)
		return (NULL);
	num[len] = '\0';
	value_cpy = value;
	if (value_cpy < 0)
	{
		if (base == 10)
			neg = 1;
		value_cpy = value_cpy * -1;
	}
	while (--len)
	{
		num[len] = buff[value_cpy % base];
		value_cpy = value_cpy / base;
	}
	if (neg == 1)
		num[0] = '-';
	else
		num[len] = buff[value_cpy % base];
	return (num);
}

int		main(void)
{
	printf("RESULT:\n%s", ft_itoa_base(557736892, 15));
	return(0);
}
