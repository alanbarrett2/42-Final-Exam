#include <stdlib.h>
#include <stdio.h>

int        *ft_range(int start, int end)
{
    int *ret;
    int len;
    int i;

    len = (end - start);
    if (start < 0 && end < 0)
        len = ((start * -1) - (end * -1));
    ret = (int *)malloc(sizeof(int) * len + 1);
    if (!ret)
        return (NULL);
    i = 0;
    while (start <= end)
    {
        ret[i] = start;
        start++;
        i++;
    }
    return (ret);
}

int        main(void)
{
    int *nums;
    int i;

    nums = ft_range(-6, -3);
    i = 0;
    while (i < 4)
    {
        printf("%d\n", nums[i]);
        i++;
    }
    return (0);
}
