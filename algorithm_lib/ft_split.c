#include "../push.h"

static int	strcount(const char *s, char c)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	j = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && j == 0)
		{
			count++;
			j = 1;
		}
		else if (s[i] == c && j == 1)
			j = 0;
		i++;
	}
	return (count);
}

static char	*ft_sbstr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*vec;

	i = 0;
	if (start >= ft_strlen(s))
		return (NULL);
	vec = (char *)malloc(sizeof(char) * len + 1);
	if (!vec)
		return (NULL);
	while (s[start] != '\0' && i < len)
	{
		vec[i] = s[start];
		start++;
		i++;
	}
	vec[i] = '\0';
	return (vec);
}

static char	**verification(char const *s, char c, char **vec)
{
	int	i;
	int	wlen;

	i = 0;
	while (*s)
	{
		wlen = 0;
		while (*s == c && *s)
			s++;
		while (*s != c && *s)
		{
			s++;
			wlen++;
		}
		vec[i++] = ft_sbstr(s - wlen, 0, wlen);
	}
	return (vec);
}

char	**ft_split(char const *s, char c)
{
	char	**vec;
	int		count;

	if (!s)
		return (NULL);
	count = strcount(s, c);
	vec = ((char **)malloc(sizeof(char *) * (count + 1)));
	if (!vec)
		return (NULL);
	else
		verification(s, c, vec);
	vec[count] = NULL;
	return (vec);
}