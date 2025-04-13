
#include <unistd.h>

int				ft_strlen(char *str)
{
	int n;

	n = 0;
	while (str[n])
		n++;
	return (n);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (i < size && *dest)
	{
		dest++;
		i++;
	}
	if (i == size)
		return (i + (unsigned int)ft_strlen(src));
	j = 0;
	while (src[j])
	{
		if (j < size - i - 1)
			*dest++ = src[j];
		j++;
	}
	*dest = '\0';
	return (i + j);
}
