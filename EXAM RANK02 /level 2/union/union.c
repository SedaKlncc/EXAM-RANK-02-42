int main (int ac, char **av)
{
	if (ac == 3)
	{
		int i = 1;
		int j = 0;
		int kontrol[255] = {0};
		while (i < 3)
		{
			j = 0;
			while (av[i][j])
			{
				if(kontrol[(int)av[i][j]] != 1)
				{
					kontrol[(int)av[i][j]] = 1;
					write(1, &av[i][j], 1);
				}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
