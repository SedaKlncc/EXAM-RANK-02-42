void ft_putnbr(int nb)
{
	if(nb > 9)
		ft_putnbr(nb / 10);
	write(1, &"0123456789"[nb % 10], 1);
}
int ft_atoi(char *str)
{
	int i = 0;
	int res = 0;
	while(str[i] >= '0' && str[i] <= '9')
	{
		res *= 10;
		res += str[i] - '0'; 
		i++;
	}
	return(res);
}
int isprime(int nbr)
{
	int i = 2;
	if(nbr <= 1)
	return(0);
	while(i < nbr)
	{
		if(nbr % i == 0)
		return(0);
		i++;
	}
	return(1);

} 
int main(int ac, char **av)
{
	
	if(ac == 2)
	{
		int sum = 0;
		int num = ft_atoi(av[1]);
		while(num > 0)
		{
			if(isprime(num--))
			sum += num + 1;
		}
		ft_putnbr(sum);
	}
	else
		write(1, "0", 1);
	write(1, "\n", 1);
}
