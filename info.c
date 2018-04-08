#include <stdio.h>
#include <unistd.h>

void get_page_info(unsigned int *page_size)
{
    *page_size = sysconf(_SC_PAGE_SIZE);
}
