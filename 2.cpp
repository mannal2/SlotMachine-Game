﻿#include <stdio.h>
#include <Windows.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
int num[][8] = {
	1,1,1,1,1,1,1,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,1,1,1,1,1,1,1,
	0,0,0,0,0,0,0,0,
	0,0,0,0,1,0,0,0,
	0,0,0,1,1,0,0,0,
	0,0,1,0,1,0,0,0,
	0,1,0,0,1,0,0,0,
	1,0,0,0,1,0,0,0,
	0,0,0,0,1,0,0,0,
	0,0,0,0,1,0,0,0,
	0,0,0,0,1,0,0,0,
	0,0,0,0,1,0,0,0,
	0,0,0,0,1,0,0,0,
	0,0,0,0,1,0,0,0,
	0,0,0,0,1,0,0,0,
	0,0,0,0,1,0,0,0,
	0,0,0,0,1,0,0,0,
	0,0,0,0,1,0,0,0,
	1,1,1,1,1,1,1,1,
	0,0,0,0,0,0,0,0,
	1,1,1,1,1,1,1,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	1,1,1,1,1,1,1,1,
	1,0,0,0,0,0,0,0,
	1,0,0,0,0,0,0,0,
	1,0,0,0,0,0,0,0,
	1,0,0,0,0,0,0,0,
	1,0,0,0,0,0,0,0,
	1,0,0,0,0,0,0,0,
	1,0,0,0,0,0,0,0,
	1,1,1,1,1,1,1,1,
	0,0,0,0,0,0,0,0,
	1,1,1,1,1,1,1,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	1,1,1,1,1,1,1,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	1,1,1,1,1,1,1,1,
	0,0,0,0,0,0,0,0,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,1,1,1,1,1,1,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,0,
	1,1,1,1,1,1,1,1,
	1,0,0,0,0,0,0,0,
	1,0,0,0,0,0,0,0,
	1,0,0,0,0,0,0,0,
	1,0,0,0,0,0,0,0,
	1,0,0,0,0,0,0,0,
	1,0,0,0,0,0,0,0,
	1,1,1,1,1,1,1,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	1,1,1,1,1,1,1,1,
	0,0,0,0,0,0,0,0,
	1,1,1,1,1,1,1,1,
	1,0,0,0,0,0,0,0,
	1,0,0,0,0,0,0,0,
	1,0,0,0,0,0,0,0,
	1,0,0,0,0,0,0,0,
	1,0,0,0,0,0,0,0,
	1,0,0,0,0,0,0,0,
	1,1,1,1,1,1,1,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,1,1,1,1,1,1,1,
	0,0,0,0,0,0,0,0,
	1,1,1,1,1,1,1,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,0,
	1,1,1,1,1,1,1,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,1,1,1,1,1,1,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,1,1,1,1,1,1,1,
	0,0,0,0,0,0,0,0,
	1,1,1,1,1,1,1,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,1,1,1,1,1,1,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	1,1,1,1,1,1,1,1,
	0,0,0,0,0,0,0,0,
	1,1,1,1,1,1,1,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,1,1,1,1,1,1,1,
	0,0,0,0,0,0,0,0,
	0,0,0,0,1,0,0,0,
	0,0,0,1,1,0,0,0,
	0,0,1,0,1,0,0,0,
	0,1,0,0,1,0,0,0,
	1,0,0,0,1,0,0,0,
	0,0,0,0,1,0,0,0,
	0,0,0,0,1,0,0,0,
	0,0,0,0,1,0,0,0,
	0,0,0,0,1,0,0,0,
	0,0,0,0,1,0,0,0,
	0,0,0,0,1,0,0,0,
	0,0,0,0,1,0,0,0,
	0,0,0,0,1,0,0,0,
	0,0,0,0,1,0,0,0,
	0,0,0,0,1,0,0,0,
	1,1,1,1,1,1,1,1,
	0,0,0,0,0,0,0,0,
	1,1,1,1,1,1,1,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	1,1,1,1,1,1,1,1,
	1,0,0,0,0,0,0,0,
	1,0,0,0,0,0,0,0,
	1,0,0,0,0,0,0,0,
	1,0,0,0,0,0,0,0,
	1,0,0,0,0,0,0,0,
	1,0,0,0,0,0,0,0,
	1,0,0,0,0,0,0,0,
	1,1,1,1,1,1,1,1,
	0,0,0,0,0,0,0,0,
	1,1,1,1,1,1,1,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	1,1,1,1,1,1,1,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	1,1,1,1,1,1,1,1,
	0,0,0,0,0,0,0,0,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,1,1,1,1,1,1,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,0,
	1,1,1,1,1,1,1,1,
	1,0,0,0,0,0,0,0,
	1,0,0,0,0,0,0,0,
	1,0,0,0,0,0,0,0,
	1,0,0,0,0,0,0,0,
	1,0,0,0,0,0,0,0,
	1,0,0,0,0,0,0,0,
	1,1,1,1,1,1,1,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	1,1,1,1,1,1,1,1,
	0,0,0,0,0,0,0,0,
	1,1,1,1,1,1,1,1,
	1,0,0,0,0,0,0,0,
	1,0,0,0,0,0,0,0,
	1,0,0,0,0,0,0,0,
	1,0,0,0,0,0,0,0,
	1,0,0,0,0,0,0,0,
	1,0,0,0,0,0,0,0,
	1,1,1,1,1,1,1,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,1,1,1,1,1,1,1,
	0,0,0,0,0,0,0,0,
	1,1,1,1,1,1,1,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,0,
	1,1,1,1,1,1,1,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,1,1,1,1,1,1,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,1,1,1,1,1,1,1,
	0,0,0,0,0,0,0,0,
	1,1,1,1,1,1,1,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,1,1,1,1,1,1,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	1,1,1,1,1,1,1,1,
	0,0,0,0,0,0,0,0,
	1,1,1,1,1,1,1,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,1,1,1,1,1,1,1,
	0,0,0,0,0,0,0,0,
	0,0,0,0,1,0,0,0,
	0,0,0,1,1,0,0,0,
	0,0,1,0,1,0,0,0,
	0,1,0,0,1,0,0,0,
	1,0,0,0,1,0,0,0,
	0,0,0,0,1,0,0,0,
	0,0,0,0,1,0,0,0,
	0,0,0,0,1,0,0,0,
	0,0,0,0,1,0,0,0,
	0,0,0,0,1,0,0,0,
	0,0,0,0,1,0,0,0,
	0,0,0,0,1,0,0,0,
	0,0,0,0,1,0,0,0,
	0,0,0,0,1,0,0,0,
	0,0,0,0,1,0,0,0,
	1,1,1,1,1,1,1,1,
	0,0,0,0,0,0,0,0,
	1,1,1,1,1,1,1,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	1,1,1,1,1,1,1,1,
	1,0,0,0,0,0,0,0,
	1,0,0,0,0,0,0,0,
	1,0,0,0,0,0,0,0,
	1,0,0,0,0,0,0,0,
	1,0,0,0,0,0,0,0,
	1,0,0,0,0,0,0,0,
	1,0,0,0,0,0,0,0,
	1,1,1,1,1,1,1,1,
	0,0,0,0,0,0,0,0,
	1,1,1,1,1,1,1,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	1,1,1,1,1,1,1,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	1,1,1,1,1,1,1,1,
	0,0,0,0,0,0,0,0,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,1,1,1,1,1,1,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,0,
	1,1,1,1,1,1,1,1,
	1,0,0,0,0,0,0,0,
	1,0,0,0,0,0,0,0,
	1,0,0,0,0,0,0,0,
	1,0,0,0,0,0,0,0,
	1,0,0,0,0,0,0,0,
	1,0,0,0,0,0,0,0,
	1,1,1,1,1,1,1,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	1,1,1,1,1,1,1,1,
	0,0,0,0,0,0,0,0,
	1,1,1,1,1,1,1,1,
	1,0,0,0,0,0,0,0,
	1,0,0,0,0,0,0,0,
	1,0,0,0,0,0,0,0,
	1,0,0,0,0,0,0,0,
	1,0,0,0,0,0,0,0,
	1,0,0,0,0,0,0,0,
	1,1,1,1,1,1,1,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,1,1,1,1,1,1,1,
	0,0,0,0,0,0,0,0,
	1,1,1,1,1,1,1,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,0,
	1,1,1,1,1,1,1,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,1,1,1,1,1,1,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,1,1,1,1,1,1,1,
	0,0,0,0,0,0,0,0,
	1,1,1,1,1,1,1,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,1,
	1,1,1,1,1,1,1,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,1,
	1,1,1,1,1,1,1,1,
	0,0,0,0,0,0,0,0,
};
int money = 1000000, dobak = 0;
double arr[3];
enum {
	BLACK,
	DARK_BLUE,
	DARK_GREEN,
	DARK_SKYBLUE,
	DARK_RED,
	DARK_BIOLET,
	DARK_YELLOW,
	GRAY,
	DARK_GRAY,
	BLUE,
	GREEN,
	SKYBLUE,
	RED,
	VIOLET,
	YELLOW,
	WHITE,
};

double RandomWell512()
{
	static unsigned long state[16] = { rand(),rand(),rand(),rand(),rand(),rand(),rand(),rand(),rand(),rand(),rand(),rand(),rand(),rand(),rand(),rand() };
	static unsigned int index = 0;
	unsigned long a, b, c, d;
	double val;
	a = state[index];
	c = state[(index + 13) & 15];
	b = a^c ^ (a << 16) ^ (c << 16);
	c = state[(index + 9) & 15];
	c ^= c >> 11;
	a = state[index] = b^c;
	d = a ^ ((a << 5) & 0xDA442D20UL);
	index = (index + 15) & 15;
	a = state[index];
	state[index] = a^b^d ^ (a << 2) ^ (b << 18) ^ (c << 28);
	val = (state[index] % 1000) / 1000.0;
	return val;
}

void gotoxy(int x, int y)
{
	COORD cursorPos = { x, 30 - y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cursorPos);
}

void SetScreenSize(int width, int height)
{
	char command[30];
	sprintf(command, "mode con: cols=%d lines=%d", width, height);
	system(command);
}

void SetColor(int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void HideCursor()
{
	CONSOLE_CURSOR_INFO cci;
	cci.bVisible = false;
	cci.dwSize = 1;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cci);
}

void DrawBack()
{
	gotoxy(12, 25);
	SetColor(YELLOW);
	for (int i = 0; i < 32; i++) {
		printf("◆");
	}
	for (int i = 0; i < 19; i++) {
		gotoxy(12, 25 - i);
		printf("◆");
	}
	gotoxy(12, 6);
	for (int i = 0; i < 32; i++) {
		printf("◆");
	}
	for (int i = 0; i < 19; i++) {
		gotoxy(74, 25 - i);
		printf("◆");
	}

	SetColor(WHITE);
	gotoxy(12, 28); printf("100만원으로 1억 만드는 게임이다.");
	gotoxy(80, 26); printf("사칙연산일 때 :   X10");
	gotoxy(80, 24); printf("첫 번째 + 두 번째 = 세 번째");
	gotoxy(80, 23); printf("첫 번째 - 두 번째 = 세 번째");
	gotoxy(80, 22); printf("첫 번째 * 두 번째 = 세 번째");
	gotoxy(80, 21); printf("첫 번째 / 두 번째 = 세 번째");
	gotoxy(80, 19); printf("순차적일 때 :     X15");
	gotoxy(80, 17); printf("1 2 3 , 9 8 7");
	gotoxy(80, 15); printf("같은 숫자일 때 :  X20");
	gotoxy(80, 13); printf("0 0 0 , 1 1 1 , 9 9 9");
	gotoxy(80, 11); printf("7 7 7 일 때");
	gotoxy(80, 9); printf("그 즉시 게임 종료(승리)");
	SetColor(GREEN);
	gotoxy(80, 20); printf("---------------------------");
	gotoxy(80, 16); printf("---------------------------");
	gotoxy(80, 12); printf("---------------------------");
	SetColor(GRAY);
}

void Drawfirst() {
	SetColor(WHITE);
	for (int i = 0; i < 16; i++) {
		gotoxy(16, 23 - i);
		for (int j = 0; j < 8; j++) {
			if (num[i][j] == 1)
				printf("■");
			else
				printf("  ");
		}
	}
	for (int i = 0; i < 16; i++) {
		gotoxy(36, 23 - i);
		for (int j = 0; j < 8; j++) {
			if (num[i][j] == 1)
				printf("■");
			else
				printf("  ");
		}
	}
	for (int i = 0; i < 16; i++) {
		gotoxy(56, 23 - i);
		for (int j = 0; j < 8; j++) {
			if (num[i][j] == 1)
				printf("■");
			else
				printf("  ");
		}
	}

}

void DrawNum(int x, int y, int n)
{
	SetColor(WHITE);
	int a = -1;
	while (a <= 170 * 2 + n * 16 + n) {
		for (int i = 0; i < 16; i++) {
			gotoxy(x, y - i);
			for (int j = 0; j < 8; j++) {
				if (num[a + i][j] == 1)
					printf("■");
				else
					printf("  ");
			}
		}
		a++;
		Sleep(1);
	}
}

double MyRandom()
{
	double random = RandomWell512();
	random = sqrt((random - 0.7)*(random - 0.7));
	if (random >= 0.14&&random <= 0.19)
		return 0.8888;
	else if (random >= 0.25&&random <= 0.29)
		return 0.9999;
	else if (random >= 0.06 && random <= 0.09)
		return 0.9999;
	else
		return random;
}

void firstImage() {
	gotoxy(12, 29); printf("■                            ■                           ■   ■            ■               ■");
	gotoxy(12, 28); printf("■          ■■■            ■                           ■   ■           ■■              ■");
	gotoxy(12, 27); printf("■        ■      ■          ■           ■■■          ■   ■          ■  ■             ■");
	gotoxy(12, 26); printf("■      ■          ■        ■         ■      ■        ■   ■         ■    ■            ■");
	gotoxy(12, 25); printf("■      ■          ■        ■       ■          ■      ■   ■        ■      ■       ■■■");
	gotoxy(12, 24); printf("■      ■          ■    ■■■       ■          ■  ■■■   ■       ■        ■          ■");
	gotoxy(12, 23); printf("■        ■      ■          ■       ■          ■      ■   ■      ■          ■         ■");
	gotoxy(12, 22); printf("■          ■■■            ■         ■      ■        ■   ■     ■            ■        ■");
	gotoxy(12, 21); printf("■                            ■           ■■■          ■   ■                             ■");
	gotoxy(12, 20); printf("■                                                         ■   ■                             ■");
	gotoxy(12, 19); printf("■          ■■■■■■■■■■                           ■   ■                             ■");
	gotoxy(12, 18); printf("■                            ■                           ■   ■                             ■");
	gotoxy(12, 17); printf("■                            ■                           ■   ■                             ■");
	gotoxy(0, 13); printf("            ■            ■■■                ■■■                           ■             ■■■       ■");
	gotoxy(0, 12); printf("            ■          ■      ■            ■      ■          ■■■■■■   ■           ■      ■     ■");
	gotoxy(0, 11); printf("            ■        ■          ■        ■          ■        ■        ■   ■■■      ■        ■    ■");
	gotoxy(0, 10); printf("            ■        ■          ■        ■          ■        ■        ■   ■           ■      ■     ■");
	gotoxy(0, 9); printf("            ■        ■          ■        ■          ■        ■        ■   ■             ■■■       ■");
	gotoxy(0, 8); printf("            ■        ■          ■        ■          ■        ■■■■■■   ■                          ■");
	gotoxy(0, 7); printf("            ■        ■          ■        ■          ■                       ■      ■■■■■■■■■  ■");
	gotoxy(0, 6); printf("            ■        ■          ■        ■          ■           ■          ■               ■         ■");
	gotoxy(0, 5); printf("            ■        ■          ■        ■          ■           ■                     ■    ■   ■■■■");
	gotoxy(0, 4); printf("            ■          ■      ■            ■      ■             ■                     ■");
	gotoxy(0, 3); printf("            ■            ■■■                ■■■               ■■■■■■■■■     ■■■■■■■■■■");
}

void printmoney() {
	gotoxy(80, 5); printf("                                     ");
	gotoxy(80, 5);
	printf("현재 돈 : %d원  판돈 : %d원", money, dobak);
	while (1) {
		gotoxy(80, 3); printf("                             ");
		gotoxy(80, 3); 
		printf("돈을 입력해주세요 : ");
		gotoxy(0, 0);
		scanf("%d", &dobak);
		if (dobak<=money)
			break;
	}
	gotoxy(0, 2); printf("                      ");
	gotoxy(80, 5);
	printf("                                                 ");
	gotoxy(80, 5);
	printf("현재 돈 : %d원  판돈 : %d원", money, dobak);
	gotoxy(80, 3);
	printf("                                          ");
}

void seven() {
	gotoxy(50, 17);
	SetColor(YELLOW);
	printf("로또하셈");
	gotoxy(53, 16);
	printf("끝!             ");
	SetColor(GRAY);
	system("pause");
}

void pasan() {
	system("cls");
	gotoxy(0, 26); printf("                                                                                                     ■");
	gotoxy(0, 25); printf("                                                  ■                                                 ■");
	gotoxy(0, 24); printf("                                                  ■                          ■                     ■");
	gotoxy(0, 23); printf("                                                  ■                         ■■                    ■");
	gotoxy(0, 22); printf("                                                  ■                        ■  ■                   ■");
	gotoxy(0, 21); printf("             ■■■■■■■■■■■■■■■       ■                       ■    ■                  ■");
	gotoxy(0, 20); printf("                   ■              ■             ■                      ■      ■                 ■");
	gotoxy(0, 19); printf("                   ■              ■             ■■■■■             ■        ■                ■■■■■");
	gotoxy(0, 18); printf("                   ■              ■             ■                    ■          ■               ■");
	gotoxy(0, 17); printf("                   ■              ■             ■                   ■            ■              ■");
	gotoxy(0, 16); printf("                   ■              ■             ■                  ■              ■             ■");
	gotoxy(0, 15); printf("             ■■■■■■■■■■■■■■■       ■                 ■                ■            ■");
	gotoxy(0, 14); printf("                                                  ■                ■                  ■           ■");
	gotoxy(0, 13); printf("                                                  ■                                                 ■");
	gotoxy(0, 12); printf("                                                  ■                                                 ■");
	gotoxy(0, 11); printf("                                                  ■                       ■                        ■");
	gotoxy(0, 10); printf("                                                  ■                       ■");
	gotoxy(0, 9); printf("                                                                           ■");
	gotoxy(0, 8); printf("                                                                           ■");
	gotoxy(0, 7); printf("                                                                           ■■■■■■■■■■■■■■■■■");
	SetColor(YELLOW);
	gotoxy(70, 1); printf("한국 도박문제 관리센터 : 국번없이 1336           ");
	system("pause");
}

void buza() {
	system("cls");
	gotoxy(1, 29);
	printf("제작자를");
	gotoxy(0, 25); printf("                                   ■                                                                   ■");
	gotoxy(0, 24); printf("                                 ■  ■                                                                 ■");
	gotoxy(0, 23); printf("                               ■      ■                                                               ■");
	gotoxy(0, 22); printf("                             ■          ■                         ■■■■■■■■■■■■■          ■");
	gotoxy(0, 21); printf("                           ■              ■                                               ■          ■");
	gotoxy(0, 20); printf("                         ■                  ■                                             ■          ■");
	gotoxy(0, 19); printf("                       ■                      ■                                           ■          ■");
	gotoxy(0, 18); printf("                     ■                          ■                                         ■          ■");
	gotoxy(0, 17); printf("                                                                    ■■■■■■■■■■■■■          ■");
	gotoxy(0, 16); printf("                                                                    ■                                  ■");
	gotoxy(0, 15); printf("                 ■■■■■■■■■■■■■■■■■■■             ■                                  ■");
	gotoxy(0, 14); printf("                                                                    ■                                  ■");
	gotoxy(0, 13); printf("                               ■■■■■                           ■                                  ■");
	gotoxy(0, 12); printf("                             ■          ■                         ■■■■■■■■■■■■■          ■");
	gotoxy(0, 11); printf("                           ■              ■                                                           ■");
	gotoxy(0, 10); printf("                         ■                 ■                                                          ■");
	gotoxy(0, 9);  printf("                         ■                  ■                                                         ■");
	gotoxy(0, 8);  printf("                         ■                  ■                                                         ■");
	gotoxy(0, 7);  printf("                         ■                  ■                                                         ■");
	gotoxy(0, 6);  printf("                           ■              ■");
	gotoxy(0, 5);  printf("                             ■          ■");
	gotoxy(0, 4);  printf("                               ■■■■■");
	system("pause");
}

void checkmoney() {
	if (arr[0] + arr[1] == arr[2] || arr[0] - arr[1] == arr[2] || arr[0] * arr[1] == arr[2] || arr[0] / arr[1] == arr[2])
		money += dobak * 10;
	else if (arr[0] == arr[1] && arr[1] == arr[2])
		money += dobak * 20;
	else if (arr[0] + 1 == arr[1] && arr[1] + 1 == arr[2])
		money += dobak * 15;
	else if (arr[0] - 1 == arr[1] && arr[1] - 1 == arr[2])
		money += dobak * 15;
	else
		money -= dobak;
}

void main() {
	srand(time(0));
	HideCursor();
	SetScreenSize(120, 30);
	firstImage();

	while (1) {
		gotoxy(54, 15); printf("press enter");
		Sleep(900);
		gotoxy(54, 15); printf("           ");
		Sleep(300);
		if (GetAsyncKeyState(VK_RETURN) & 0x0001)
			break;
	}
	system("cls");
	DrawBack();
	Drawfirst();

	while (1) {
		if (money >= 100000000) {
			Sleep(1500);
			buza();
			return;
		}
		if (money <= 0) {
			Sleep(1500);
			pasan();
			return;
		}
		printmoney();
		for (int i = 0; i < 3; i++) {
			arr[i] = MyRandom();
			arr[i] = (int)(arr[i] * 10);
		}
		if (GetAsyncKeyState(VK_RETURN) & 0x0001) {
			DrawNum(16, 23, arr[0]);
			DrawNum(36, 23, arr[1]);
			DrawNum(56, 23, arr[2]);
		}
		if (GetAsyncKeyState(VK_ESCAPE) & 0x0001)
			break;
		if (arr[0] == 7 && arr[1] == 7 && arr[2] == 7) {
			Sleep(1500);
			seven();
			return;
		}
		checkmoney();
		Sleep(1);
	}
}

