#pragma once
#include "includes.h"
#include "cat.h"
/*
one of my favorite quotes from jesus, 1337 BC.
"Every day. We stray further from god".

functions a shell should perform:
read    - read from stdin
parse   - parse commands with parameters and command line args
execute - execute, obviously

lifetime:
init:
read config and init aspects of shell

interpret:
begins to read from stdin

terminate:
after cmd are executed, it frees any memory and terminates childprocess
*/
void die(const char* errormsg) {
    perror(errormsg);
    printf("<insert anime girl here>");
    exit(0);
}



void nyash() {

















}
