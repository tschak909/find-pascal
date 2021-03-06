# find-pascal

A simple forensic tool to scan a ColecoVision ROM for Pascal entry points.

## Usage

```sh
find-pascal <filename>
```

Where filename is a ColecoVision ROM.

Output only happens if Pascal entry points are found. If Pascal entry points are found, the name of the filename is diplayed, along with the used entry points.

```sh
/home/thomc/Downloads/Donkey Kong (1982) (Coleco) [24K].rom:
	WRITE_REGISTERP
	REQUEST_SIGNALP
	TEST_SIGNALP
	WRITE_REGISTERP
	PLAY_ITP
	PLAY_ITP
	REQUEST_SIGNALP
	TEST_SIGNALP
	PLAY_ITP
	PLAY_ITP
	PLAY_ITP
	PLAY_ITP
	REQUEST_SIGNALP
	TEST_SIGNALP
	SOUND_INITP
	REQUEST_SIGNALP
	TEST_SIGNALP
	SOUND_INITP
	SOUND_INITP
	PUT_VRAMP
	INIT_WRITERP
	INIT_SPR_ORDERP
	WRITE_REGISTERP
	WRITE_REGISTERP
	INIT_TABLEP
	INIT_TABLEP
	INIT_TABLEP
	INIT_TABLEP
	INIT_TABLEP
	WRITE_REGISTERP
	WRITE_REGISTERP
	INIT_TIMERP
	WRITE_REGISTERP
	TEST_SIGNALP
	TEST_SIGNALP
	PUTOBJP
	TEST_SIGNALP
	REQUEST_SIGNALP
	PUTOBJP
	TEST_SIGNALP
	ACTIVATEP
	SOUND_INITP
	PLAY_ITP
	REQUEST_SIGNALP
	REQUEST_SIGNALP
	REQUEST_SIGNALP
	TEST_SIGNALP
	TEST_SIGNALP
	TEST_SIGNALP
	PUTOBJP
	PUTOBJP
	FREE_SIGNALP
	FREE_SIGNALP
	SOUND_INITP
	PLAY_ITP
	TEST_SIGNALP
	PLAY_ITP
	TEST_SIGNALP
	PUTOBJP
	ACTIVATEP
	REQUEST_SIGNALP
	REQUEST_SIGNALP
	REQUEST_SIGNALP
	REQUEST_SIGNALP
	REQUEST_SIGNALP
	PUTOBJP
	PLAY_ITP
	PUTOBJP
	PUTOBJP
	PLAY_ITP
	PUTOBJP
	REQUEST_SIGNALP
	REQUEST_SIGNALP
	PLAY_ITP
	PLAY_ITP
	PUTOBJP
	PUTOBJP
	PLAY_ITP
	PLAY_ITP
	PLAY_ITP

```
