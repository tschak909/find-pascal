find-pascal: find-pascal.c
	$(CC) -ofind-pascal find-pascal.c

clean: find-pascal
	$(RM) find-pascal
