#include <stdio.h>

int	main(void)
{
	printf("%020.2f", 12.345678);
}

//'-' change everything to left-aligned, 
//but will not do anything if no width specified

//'0' replace empty space with 0 for numeric type,
// when width is specified

//'.' restrict precision according to int after .
//for floating num, restrict num after decimal point
//for str limit num of char to output

//'#' add 0x or 0X to type x and X when non 0

//' ' put nothing infront of positive numeric type
//negative still '-' sign
//will be overwritten by '+'

//'+' put '+' infront of positive numeric type
//negative still '-' sign

//if width exist, default put space