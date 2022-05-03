/**
 * @name find-pascal
 * @brief a tool to scan Coleco game cartridges for Pascal vector usage
 * @author Thomas Cherryhomes
 * @email thom dot cherryhomes at gmail dot com
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * @brief Pasca functoins detected?
 */
bool hasPascalFuncs = false;

/**
 * @brief Vector table with function names
 */
struct _vectorTable
{
  unsigned short addr;
  char name[32];
} vectorTable[] =
  {
    {0x1F64, "ACTIVATEP"},
    {0x1F67, "PUTOBJP"},
    {0x1F8B, "INIT_TABLEP"},
    {0x1F8E, "GET_VRAMP"},
    {0x1F91, "PUT_VRAMP"},
    {0x1F94, "INIT_SPR_ORDERP"},
    {0x1F97, "WR_SPR_NM_TBLP"},
    {0x1F9A, "INIT_TIMERP"},
    {0x1F9D, "FREE_SIGNALP"},
    {0x1FA0, "REQUEST_SIGNALP"},
    {0x1FA3, "TEST_SIGNALP"},
    {0x1FA6, "WRITE_REGISTERP"},
    {0x1FA9, "WRITE_VRAMP"},
    {0x1FAC, "READ_VRAMP"},
    {0x1FAF, "INIT_WRITERP"},
    {0x1FB2, "SOUND_INITP"},
    {0x1FB5, "PLAY_ITP"}
  };

bool hasPascalFuncs;

int main(int argc, char *argv[])
{
  if (argc < 2)
    {
      printf("%s <filename>\n",argv[0]);
      return 1;
    }

  FILE *fp = fopen(argv[1],"rb");

  if (!fp)
    {
      perror(argv[0]);
      return 1;
    }

  while (!feof(fp))
    {
      unsigned char b = fgetc(fp);

      if (b == 0xCD) // CALL
	{
	  unsigned short a;

	  fread(&a,sizeof(unsigned short),1,fp);
	  for (int i=0;i<17;i++)
	    {
	      if (a == vectorTable[i].addr)
		{
		  if (hasPascalFuncs == false)
		    {
		      printf("%s:\n",argv[1]);
		      hasPascalFuncs=true;
		    }
		  printf("\t%s\n",vectorTable[i].name);
		}
	    }
	}
    }

  if (hasPascalFuncs == true)
    printf("\n");
  
  fclose(fp);
  
  return 0;
}
