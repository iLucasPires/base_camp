norminette -RCheckForbiddenSourceHeader .

// c_02_00

#include <stdio.h>

int  main(void)
{
	char a[] = "asdaf";
	char b[] = "wo";

	ft_strcpy(b, a);
	printf("%s", b);
}

// c_02_01


#include <stdio.h>
#include <string.h>

int	main()
{
	char src[] = "Hello";
	char dest[] = "World?";
	char dest1[] = "World!";

	printf("%s\n", ft_strncpy(dest, src, 3));
	printf("%s\n", strncpy(dest, src, 3));
	printf("%s\n", ft_strncpy(dest, src, 5));
	printf("%s\n", ft_strncpy(dest, src, 7));
}

// c_02_02


#include <stdio.h>

int  main(void)
{
	char a[] = "asdaf";
	char b[] = "123";

	printf("%i\n", ft_str_is_alpha(a));
	printf("%i\n", ft_str_is_alpha(b));
}

// c_02_03

#include <stdio.h>

int  main(void)
{
	char a[] = "asdaf";
	char b[] = "123";

	printf("%i\n", ft_str_is_numeric(a));
	printf("%i\n", ft_str_is_numeric(b));
}

// c_02_04

#include <stdio.h>

int  main(void)
{
	char a[] = "asdaf";
	char b[] = "ASD";

	printf("%i\n", ft_str_is_lowercase(a));
	printf("%i\n", ft_str_is_lowercase(b));
}

// c_02_05

#include <stdio.h>

int  main(void)
{
	char a[] = "asdaf";
	char b[] = "ASD";

	printf("%i\n", ft_str_is_uppercase(a));
	printf("%i\n", ft_str_is_uppercase(b));
}


// c_02_06

#include <stdio.h>

int  main(void)
{
	char a[] = "asdaf";
	char b[] = "fsfsdf\n";

	printf("%i\n", ft_str_is_printable(a));
	printf("%i\n", ft_str_is_printable(b));
}



// c_02_07

#include <stdio.h>

int  main(void)
{
	char a[] = "asdaf";
	char b[] = "fsfsdfASD";

	printf("%s\n", ft_strupcase(a));
	printf("%s\n", ft_strupcase(b));
}


// c_02_08

#include <stdio.h>

int  main(void)
{
	char a[] = "ASDFG";
	char b[] = "fsfsdfASD";

	printf("%s\n", ft_strlowcase(a));
	printf("%s\n", ft_strlowcase(b));
}


// c_02_09

#include <stdio.h>

int  main(void)
{
	char a[] = "ASDFG asdd 4dfasdf";
	char b[] = "fsfsdfASD-sdff*fasdf";

	printf("%s\n", ft_strcapitalize(a));
	printf("%s\n", ft_strcapitalize(b));
}

// c_02_10

#include <stdio.h>

int	main(void)
{
	char	*src = "hello";
	char	dest[10];
	int	size;
	int	i = 0;
	int result;

	size = 4;
	printf("the len is: %i\n", ft_strlcpy(dest, src, size));
	while (dest[i] != '\0')
	{
		printf("%c", dest[i]);
		i++;
	}
	printf("\n");
	return (0);
}

// c_02_11

int	main(void)
{
	char *a = "hello world\n";
	
	ft_putstr_non_printable(a);
}

// c_02_12

int	main(void)
{
	char *a = "abacaxi maca banana ;/\nasdfgkdjsyhgdfhasdkljghabkljsdbvkjasbvukjsabdfuabnhwiehfhbhaskjhdbjksadjhfgsiadnfbskjdghlsdajgh43";
	int size = 128;

	ft_print_memory(a, size);
}

// c_03_00

#include <stdio.h>

int	main(void)
{
	char	*a = "abcde";
	char	*b = "abcd";
	
	printf("%i\n", ft_strcmp(a, b));
}


// c_03_01

#include <stdio.h>

int	main(void)
{
	char	*a = "abcde";
	char	*b = "abcdfas";
	int		size = 5;
	
	printf("%i\n", ft_strncmp(a, b, size));
}

// c_03_02

#include <stdio.h>

int	main(void)
{
	char	a[] = "abcde";
	char	b[] = "abcdfas";
	
	ft_strcat(a, b);
	printf("%s\n", a);
}

// c_03_03

#include <stdio.h>

int	main(void)
{
	char	a[] = "abcde";
	char	b[] = "abcdfas";
	int	n = 4;
	
	printf("%s\n", ft_strncat(a, b, n));
}

// c_03_04

#include <stdio.h>

int main(void)
{
	char	*a = "abacaxi maca banana";
	char	*b = "maca";

	printf("%p\n", ft_strstr(a, b));
	printf("%s\n", ft_strstr(a, b));
}

// c_03_05

#include <stdio.h>

int main (void)
{
	char	src[] = "maca banana";
    char	dest[1000] = "abacaxi ";
	
    printf("%i \n", ft_strlcat(dest, src, 20));
    printf("%s \n", dest);
}

// c_04_00


#include <stdio.h>

int	main(void)
{
	char	*a = "sadf";

	printf("%i\n", ft_strlen(a));
}

// c_04_01

int	main(void)
{
	char	*a = "sadf";

	ft_putstr(a);
}

// c_04_02

int	main(void)
{
	int	a = -2147483648;

	ft_putnbr(a);
}

// c_04_03

#include <stdio.h>

int	main(void)
{
	char	*a = "21445";

	printf("%i\n", ft_atoi(a));
}

// c_04_04

#include <stdio.h>

int		main(void)
{
	ft_putnbr_base(-12, "01");
	printf("\n");
	ft_putnbr_base(40, "poneyvif");
	printf("\n");
	ft_putnbr_base(894867, "0123456789");
	printf("\n");
	ft_putnbr_base(64, "0123456789abcdef");
}

// c_04_05

#include <stdio.h>

int		main(void)
{
	printf("%d\n", ft_atoi_base("	+++++--133742", "0123456789"));
	printf("%d\n", ft_atoi_base("	     101010", "01"));
	printf("%d\n", ft_atoi_base(" 	+0f", "0123456789abcdef"));
}

// c_05_00

#include <stdio.h>

int	main(void)
{
	printf("%i\n", ft_iterative_factorial(8));
}

// c_05_01

#include <stdio.h>

int	main(void)
{
	printf("%i\n", ft_recursive_factorial(3));
}

// c_05_02

#include <stdio.h>

int main(void)
{
	int	a = 2;
	int	b = 0;
	
	printf("%i\n", ft_iterative_power(a, b));
}

// c_05_03

#include <stdio.h>

int	main(void)
{
	int	a = 0;
	int	b = 0;

	printf("%i\n", ft_recursive_power(a, b));
}

// c_05_04

#include <stdio.h>

int	main(void)
{
	printf("%i\n", ft_fibonacci(8));
}

// c_05_05

#include <stdio.h>

int	main(void)
{
	int i = 0;
	
	printf("%i\n", ft_sqrt(i));
}

// c_05_06

#include <stdio.h>

int	main(void)
{	
	printf("%i\n", ft_is_prime(5));
}

// c_05_07

#include <stdio.h>

int	main(void)
{	
	printf("%i\n", ft_find_next_prime(15));
}

//c_07_00

#include <stdio.h>
#include <string.h>

int		main(void)
{
	char	*str;
	char	*allocated;

	str = "Hello World with malloc()";
	printf("original  : base  : $%s$ @ %p\n", str, str);
	allocated = strdup(str);
	printf("copied    : alloc : $%s$ @ %p\n", allocated, allocated);
	allocated = ft_strdup(str);
	printf("ft_copied : alloc : $%s$ @ %p\n", allocated, allocated);
}


//c_07_01

#include <stdio.h>

int		main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	i = 0;
	int	size;

	min = 5;
	max = 10;
	size = max - min;
	tab = ft_range(min, max);
	while(i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}

// c_07_03


#include <stdio.h>
int	main(void)
{
	char	**strs;
	char	*separator;
	char	*result;
	int	size;

	size = 3;
	strs = (char **)malloc(3 * sizeof(char *));
	strs[0] = (char *)malloc(sizeof(char) * 5 + 1);
	strs[1] = (char *)malloc(sizeof(char) * 7 + 1);
	strs[2] = (char *)malloc(sizeof(char) * 14 + 1);
	strs[0] = "Hello";
	strs[1] = "friend,";
	strs[2] = "you are awesome";
	separator = " gdfgsd";
	result = ft_strjoin(size, strs, separator);
	printf("%s$\n", result);
	free(result);
}