#include <stdio.h>
#include "windows.h"
#include "mmsystem.h"


int main()
{
	PlaySound(L"b.wav", NULL, SND_FILENAME);
	return 0;
}



