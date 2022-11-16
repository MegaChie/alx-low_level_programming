int main(int argc, char *argv[])
{
	int a = 0, d = 0, val = 0;
	char s;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	s = argv[2][0];
	if (s != '+' && s != '-' && s != '/' && s != '*' && s != '%')
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	d = atoi(argv[3]);
	val = (get_op_func(argv[2]))(a, d);
	printf("%d\n", val);
	return (0);
}
