#include"macros.h"
#include<ulk.h>
int main(void)program_entry;
int main()
{
char user_string[100];
unsigned long a=0;
while(1)
{
  ulk_cpanel_printf ("Enter the LED number to glow \n");
  ulk_scanf_hex (&a);
  ulk_cpanel_printf ("Value is %lx\n", a);
  int i=a-1;
  while(i<=8)
  {
  ulk_proc_led_config(i);
  ulk_proc_led_drive(i,1);
  clk_proc_delay(ULK_SEC(2));
  ulk_proc_led_drive(a-1,0);
  }
  ulk_cpanel_printf ("Do u want to test LED again? Press 'y' or else 'n' \n");
  ulk_scanf_string (&user_string[0]);
  ulk_cpanel_printf ("Entered String is %s \n", user_string);
  if (user_string[0] == 'n')
  break;
  }
  return 0;
  }

