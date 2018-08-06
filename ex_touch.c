#include "macros.h"
#include <ulk.h>
int main(void) PROGRAM_ENTRY;

struct PIXEL
{
	unsigned int x;
	unsigned int y;
};
extern struct PIXEL pixel;
extern struct PIXEL ulk_proc_touch_spi_enable(void);
extern struct PIXEL ulk_proc_touch_spi_poll(void);
extern void ulk_proc_touch_spi_disable(void);
int main()
{
	ulk_proc_touch_spi_enable();
while(1)
{
	pixel=ulk_proc_touch_spi_poll();
	if (pixel.x!=0 && pixel.y!=0)
	{
		ulk_cpanel_printf(" Xpos: %d\n YPos: %d\n", pixel.x,pixel.y);
		
	}
}
ulk_proc_touch_spi_disable();
return 0;
}
