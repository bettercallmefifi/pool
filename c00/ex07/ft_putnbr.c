#include <unistd.h>

void	ft_putnbr(int nb)
{
	long long int nbr = nb;
	char rest[200];
	int i = 0;

	if(nbr < 0)
	{
		write(1,"-",1);
		nbr *= -1;
	}
	while(nbr >= 10)
	{
		rest[i] = nbr % 10 + '0';
		nbr = nbr / 10 ;
		i++;
	}
	if(nbr <= 9)
	{
		rest[i] = nbr + '0';
	}
	while(i >= 0)
	{
		write(1,&rest[i],1);
		i--;
	}
}
int main()
{
	ft_putnbr(-42);
	write(1,"\n",1);
	ft_putnbr(1337);
	write(1,"\n",1);
	ft_putnbr(-2147483648);
   	write(1,"\n",1);
	return(0);
}

