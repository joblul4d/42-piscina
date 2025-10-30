
char	lower_alpha(char c)
{
	return (c >= 'a' && c <= 'z');

}

char    upper_alpha(char c)
{
        return (c >= 'A' && c <= 'Z');

}




int	ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i] != '/0')
	{
		if(lower_alpha(str[i]) || upper_alpha([str[i])) 
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
