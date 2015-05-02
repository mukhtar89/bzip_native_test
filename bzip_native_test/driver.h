/*
minibz2
libbz2.dll test program.
by Yoshioka Tsuneo (tsuneo@rr.iij4u.or.jp)
This file is Public Domain.  Welcome any email to me.

usage: minibz2 [-d] [-{1,2,..9}] [[srcfilename] destfilename]
*/

#include <stdio.h>
#include <stdlib.h>
#include <tchar.h>
#include <stdbool.h>
#include "bzlib.h"
#ifdef _WIN32
#include <io.h>
#endif

bool decompress(char *fn_r, char *fn_w, int level);

bool compress(char *fn_r, char *fn_w, int level);
