#include <stdlib.h>
int ft_abs(int num)
{
    if(num < 0)
        return(-num);
    return(num);
}
int *ft_range(int start, int end)
{
	int *res;
	int i = 0;
	int len;

	len = ft_abs(end - start) + 1;
	res = malloc(sizeof(int) * len + 1);
	if(!res)
		return(NULL);
	if(start < end)
	{
		while(start <= end)
		{
			res[i] = start;
			start++;
			i++;
		}
	}
	else
	{
		while(end <= start)
		{
			res[i] = start;
			start--;
			i++;
		}
	}
	return(res);
}