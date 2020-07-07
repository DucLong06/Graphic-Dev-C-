#include <stdio.h>
#include "windows.h"

#pragma comment (lib, "winmm.lib")

int main()
{
	bool isPlay = PlaySound(L"b.wav", NULL, SND_FILENAME);

	if (isPlay)
	{
		printf("This sound can be played");
	}
}



