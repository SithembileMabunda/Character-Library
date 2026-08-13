int		ft_isprint(int c)
{
	if ((c >= 33 && c <= 47) || (c >= 58 && c <= 64) || (c >= 123 && c <= 126))
		return (1);
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	if (c >= '0' && c <= 9)
		return (1);
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	return (0);
}
