#include <stdlib.h>
int ft_abs(int num)
{
    if(num < 0)
        return(-num);
    return(num);
}
int *ft_rrange(int start, int end)
{
	int *res;
	int i = 0;
	int len;

	len = ft_abs(end - start) + 1;

	res = malloc(sizeof(int) * len);
	if(!res)
		return(NULL);
	while(start <= end)
	{
		res[i] = end;
		end--;
		i++;
	}
	return(res);
}