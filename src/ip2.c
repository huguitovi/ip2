#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

void main()
{
system("ip a | sed -n 's/inet \\([0-9][0-9][0-9].[0-9][0-9][0-9].[0-9].[0-9][0-9]*\\)\\\/24/\\1/p' | sed 's/brd.*\/\/g' | sed 's/ \/\/g'\n");
	return;
}
