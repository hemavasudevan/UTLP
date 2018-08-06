#include "macros.h"
#include <ulk.h>
int main(void) PROGRAM_ENTRY;

int main()
{

		   int i,fd,sd,td,frd,dd;
		   i=1234;
	           ulk_fpga_7seg_led_enable();
	   	   fd = i%10;
		   sd = ((i/10)%10)*16;
         	   td = ((i/100)%10)*16*16;
		   frd= (i/1000)*16*16*16;
		   dd = fd+sd+td+frd;
	   	   ulk_fpga_7seg_led_write(1234);
	   	   ulk_proc_delay(ULK_SEC(5));
	   	   ulk_fpga_7seg_led_write(dd);
	   	   ulk_proc_delay(ULK_SEC(5));
	   	   ulk_fpga_7seg_led_write(i);
	   	   ulk_proc_delay(ULK_SEC(5));
	   	   ulk_fpga_7seg_led_disable();

   return 0;
}
