#include <stdio.h>
#include <stdlib.h>


#define COLOR_BLACK         "\033[22;30m"
#define COLOR_RED           "\033[22;31m"
#define COLOR_GREEN         "\033[22;32m"
#define COLOR_BROWN         "\033[22;33m"
#define COLOR_BLUE          "\033[22;34m"
#define COLOR_MAGENTA       "\033[22;35m"
#define COLOR_CYAN          "\033[22;36m"
#define COLOR_GREY          "\033[22;37m"
#define COLOR_DARK_GREY     "\033[01;30m"
#define COLOR_LIGHT_RED     "\033[01;31m"
#define COLOR_LIGHT_GREEN   "\033[01;32m"
#define COLOR_YELLOW        "\033[01;33m"
#define COLOR_LIGHT_BLUE    "\033[01;34m"
#define COLOR_LIGHT_MAGENTA "\033[01;35m"
#define COLOR_LIGHT_CYAN    "\033[01;36m"
#define COLOR_WHITE         "\033[01;37m"
#define COLOR_RESET         "\x1b[0m"



int main() {

printf(COLOR_LIGHT_BLUE  "\xE2\x96\x88" COLOR_RESET "\n") ;
printf(COLOR_YELLOW  "\xE2\x96\x88" COLOR_RESET "\n") ;
printf(COLOR_DARK_GREY  "\xE2\x96\x88" COLOR_RESET "\n") ;
printf(COLOR_BLACK  "\xE2\x96\x88" COLOR_RESET "\n") ;
    return 0; }
