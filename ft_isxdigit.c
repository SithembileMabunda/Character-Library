int		ft_isxdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	if ((c >= 'A' && c <= 'F') || (c >= 'a' && c <= 'f'))
		return (1);
	else
		return (0);
}
