#include "../push.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*vec;
	int		i;
	int		j;

	i = 0;
	j = 0;
	vec = (char *)malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!s1 && !s2)
		return (NULL);
	while (s1[i])
	{
		vec[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		vec[i] = s2[j];
		j++;
		i++;
	}
	vec[i] = '\0';
	return (vec);
}