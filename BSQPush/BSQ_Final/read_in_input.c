int main(int ac, char **av)
{
	char	*buf;
	int		c;
	int		fd;
	int 	ret;
	char	**stdin;

	buf = 0;
	if (ac == 1)
	{
		buf = malloc(4096);
		ret = read(0, buf, 4096);
		buf[ret] = '\0';
		stdin = ft_split_whitespaces(buf);
		c = 0;
		free(buf);

		while (stdin[c])
		{
			if ((fd = open(stdin[c++], O_RDWR)) != -1)
				io_run(stdin[c-1], buf, &ret, fd);
			c++;
		}
	}
	else
	{
		c = 1;
		while (c < ac)
		{
			if ((fd = open(av[c], O_RDWR)) != -1)
				io_run(av[c], buf, &ret, fd);
			c++;
		}
	}
	return (0);
}
