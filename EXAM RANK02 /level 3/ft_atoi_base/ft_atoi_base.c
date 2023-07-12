char to_lower(char str)
{
	if(str >= 'A' && str <= 'Z')
		return(str + 32);
		return(str);
}
int getdigit(char c, int base)
{
	int max;
	if(base <= 10)
	{
		max += base + '0';
	}
	else 
		max += base - 10 + 'a';
	if(c >= '0' && c <= '9' && c <= max)
		return(c - '0');
	else if(c >= 'a' && c <= 'f' && c <= max)
		return(10 + c - 'a');
	else 
	return(-1);
}
int ft_atoi_base(const char *str, int str_base)
{
	int res = 0;
	int digit;
	int sign = 1;
	if(*str == '-')
	{
		sign = -1;
		str++;
	}
	while((digit = getdigit(to_lower(*str), str_base)) >= 0)
	{
		res *= str_base;
		res += digit * sign;
		str++;
	}
	return(res);
}
int main()
{
	printf("%d\n", ft_atoi_base("f", 15));
}