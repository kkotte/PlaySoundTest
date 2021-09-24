// PlaySoundTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main(int argc, char *argv[])
{
	printf("PlaySound returns 0x%08X", PlaySoundA(argv[1], NULL, SND_FILENAME));
	return 0;
}

