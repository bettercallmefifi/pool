#include <unistd.h>
#include <stdio.h>

int	 ft_str_is_alpha(char *str)
{
	int i = 0;
	while(str[i] != '\0')
	{
		if(!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')))
			return (0);
		i++;
	}
	return (1);
}

int main()
{
	char str[] = "ferdaouselidrissi";
	int result = ft_str_is_alpha(str);
	printf("%d",result);
	return(0);
}
