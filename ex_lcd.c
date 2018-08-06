#include "macros.h"
#include <ulk.h>
int main(void) PROGRAM_ENTRY;

int main()
{

    ulk_fpga_clcd_init();
	ulk_fpga_clcd_display_on();
	ulk_fpga_clcd_display_clear();
	ulk_fpga_clcd_cursor_home();	
	ulk_fpga_clcd_display_string("UTLP DAY 1");
	ulk_fpga_clcd_shift_right(6);
	ulk_fpga_clcd_shift_left(6);
	ulk_proc_delay(ULK_SEC(5));
	ulk_fpga_clcd_display_off();

	return 0;
}
