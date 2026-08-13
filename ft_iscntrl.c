int		ft_iscntrl(int c)
{
	if ((c >= 000 && c <= 037) || c == 177)
		return (1);
	else
		return (0);
}
