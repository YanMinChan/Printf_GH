# Printf_GH
A 42cursus project to recode the function printf

printf function, write as usual if no %
a function to check if % and what type
a function to check if type and return smtg to va_arg

stuff to do:
1. Libft Makefile add own function //
2. Printf Makefile
3. check for norm error
4. check printf and libft header files
5. include '+' in ft_write_num.c //

//'-' change everything to left-aligned, 
//but will not do anything if no width specified

//'0' replace empty space with 0 for numeric type,
// when width is specified

//'.' restrict precision according to int after .
//for floating num, restrict num after decimal point
//for str limit num of char to output

//'#' add 0x or 0X to type x and X when non 0

//' ' put nothing in front of positive numeric type
//negative still '-' sign
//will be overwritten by '+'

//'+' put '+' front of positive numeric type
//negative still '-' sign

//if width exist, default put space