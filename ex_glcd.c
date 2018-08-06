#include "macros.h"
#include <ulk.h>

int main(void) PROGRAM_ENTRY;
int main()
{

	int row=0,column=0, *address = 0x80500000;
	for(row=0;row<240;row++)
	{
		for(column=0; column<320; column++)
		{
			*(address+(row*320)+column) = 0xFFFFFF;
		}
	}

	return 0;

}

