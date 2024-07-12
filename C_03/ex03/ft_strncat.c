char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	while (*dest != '\0')
	{
		dest++;
	}
	while (nb != 0)
	{
		*dest = *src;
		dest++;
		src++;
		if (*src == '\0')
		{
			*dest = '\0';
                	return dest;
		}
	}
	dest++;
	*dest = '\0';
	return dest;
}
