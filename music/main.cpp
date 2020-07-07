#include <iostream>
using namespace std;
#include <winbgim.h>
#include <string.h>
#include <stdio.h>
#include <time.h>

#pragma comment (lib, "winmm.lib")

int main()
{
	bool isPlay = PlaySound(L"b.wav", NULL , SND_ASYNC);

	if (isPlay)
	{
		printf("This sound can be played");
	}
}



