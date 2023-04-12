# C - Bit manipulation

Päblo Riveiro


## Some notes

# 1
### This move the bits to the right and compare with 00000001, printing only what is a 1 bit
`
if (n > 1)
 {
 	print_binary(n >> 1);
 }
_putchar((n & 1) + '0');
`
# 2
### this moves left index times and if find 0 returns 0, an else return 1... its like transcribe bits
`
if ((n & (1 << index)) == 0)
  return (0);
`
# 3
### Move the bits index times and swap the value in n[index] by toggling the value after ^=
`
	*n ^= (1 << index);
`
# 4
### this move the bits of 00000001 till index, make a NOT on it performing for example 11101111 for n = 5
#### by using & will copy wach equal bit in n and leaving a 0 at the index
`
	*n &= ~(1 << index);
`
# 5
### Here xor var save all the diference between n and m by putting in n the bits are not in m.
`
	unsigned long int xor = n ^ m, bits_n = 0;
`
### where xor is diferent to 1, is where to start to swap bits if you need to change it.
### so (xor & 1) will be 11 till var are equal and 0 when not, thats the point to start swaping
`
	while (xor > 0)
	{
		bits_n += (xor & 1);
		xor >>= 1;
	}
	return (bits_n);
`
