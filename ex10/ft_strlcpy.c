unsigned int	ft_strlcpy(char *dest,	char *src, insigned int size)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0' && (i < size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
