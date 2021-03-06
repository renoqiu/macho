/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  Main Function
 *
 *        Version:  1.0
 *        Created:  02/17/2013 19:00:22
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Reno Qiu
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
#include "macho.h"

extern struct data_of_interest doi;

int main(int argc, char *argv[]){
    printf("Start Reading Mach-O File Format\n");
    parse_macho("/Users/Reno/Quincy/local/QuincyDemo_1_0/QuincyDemo2.app/QuincyDemo");
    printf("vmaddr for text segment: 0x%x\n", doi.text_vmaddr);
}

