char	*ft_strstr(char *str, char *to_find)
{
	char *i;
	char *n;

	n = to_find;

	if (*n == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *n)
		{
		 i = str;
		 while (*i == *n || *n == '\0')
		 {
		 	if (*n == '\0')
				return (str);
			i++;
			n++;
		 }
		 n = to_find;
		}
		str++;
	}
	return (0);
}
