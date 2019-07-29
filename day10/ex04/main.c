#include <stdio.h>
#include <stdlib.h>

int	ft_count_if(char **tab, int (*f)(char*));

int has_uppercase(char *str)
{
	int i;

	i = -1;
	while (str[++i] != '\0')
		if (str[i] >= 'A' && str[i] <= 'Z')
			return (1);
	return (0);
}

int main(void)
{
  char **strs = (char **)malloc(sizeof(char *) * 4);
	strs[0] = "asda";
	strs[1] = "zxc";
	strs[2] = "qwerty";
	strs[3] = (void *)0;

	printf("%d\n", ft_count_if(strs, &has_uppercase));
  return (0);
}
