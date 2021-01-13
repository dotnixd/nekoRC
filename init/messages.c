#include "../color.h"
#include <stdio.h>

void nk_error(char *str) {
    fputs("= ", text_red(stdout));
    fputs(str, text_white(stdout));
    fputs(" =\n", text_red(stdout));
}
