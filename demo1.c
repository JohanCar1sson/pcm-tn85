/* driver that demonstrates the most basic use of the pcm-tn85 library
 *
 * Copyright 2022 Johan Carlsson
 *
 */

/* this header file has all the PCM functionality, no need to link in a library */
#include "pcm-tn85.h"

/* provide your raudio data here */
#include "sine1kHz4b.h"

int main()
{
	nloop = 1;
	pcm_init();
	pcm_play_async(raudio_data, raudio_length, raudio_bitdepth);
	/* the timers and the interrupts are now handling the raudio playback, nothing further to do in main, so just loop idly */
	while (1);
}
