#include "print.h"

void kernel_main()
{
    print_clear();
    print_set_color(PRINT_COLOR_BLUE, PRINT_COLOR_LIGHT_GRAY);
    print_str("**********************\n");
    print_str("*  |\\  |      __ ___ *\n");
    print_str("*  | \\ | |  | |_  |  *\n");
    print_str("*  |  \\| |__| _|  |  *\n");
    print_str("**********************\n");
}