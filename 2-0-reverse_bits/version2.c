#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int i;
	char c;

	i = 128;
	while (i > 0)
	{
		if (i > octet)
		{
			c = '0';
			i = i / 2;
			write(1, &c, 1);
		}
		else
		{
			c = '1';
			write(1, &c, 1);
			octet = octet - i;
			i = i / 2;
		}
	}
}

unsigned char	reverse_bits(unsigned char octet)
{
	octet = ((octet & 0x55) << 1) | ((octet & 0xAA) >> 1);
	octet = ((octet & 0x33) << 2) | ((octet & 0xCC) >> 2);
	octet = (octet << 4) | (octet >> 4);
	print_bits(octet);
	return (0);
}

int		main(void)
{
	unsigned char i;

	i = 'a';
	write (1, "N:", 2);
	print_bits(i);
	write(1, "\nR:", 3);
	reverse_bits(i);
	return (0);
}
