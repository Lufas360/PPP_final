#include "ListasLuis.h"

int numgen(char *ptr){
    int first, sec, result;
    first = strncmp(ptr, "",1);
    sec = first - strncmp(ptr, "", 2);
    result = (first * 100)+ sec;
    return result;
}
