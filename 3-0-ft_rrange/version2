#include <stdlib.h>
#include <stdio.h>

int		*ft_rrange(int start, int end)
{
	int *ret;
	int len;
	int i;

	len = (end - start);
	if (start < 0 && end < 0)
		len = ((start * -1) - (end * -1));
	ret = (int *)malloc(sizeof(int) * (len + 1));
	if (!ret)
		return (NULL);
	i = 0;
	while (start <= end)
	{
		ret[i] = end;
		end--;
		i++;
	}
	return (ret);
}

int		main(void)
{
	int *nums;
	int i;
	int len;
	int start;
	int end;

	i = 0;
	start = -10;
	end = -5;
	len = (end - start);
	if (start < 0 && end < 0)
		len = ((start * -1) - (end * -1));
	nums = ft_rrange(start, end);
	while (i <= len)
	{
		printf("%d\n", nums[i]);
		i++;
	}
	return (0);
}
