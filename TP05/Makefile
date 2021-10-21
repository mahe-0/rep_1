 DEST = ~/Informatique/S3/bin
INCLUDE=-I ~/Informatique/S3/include
OPTIONS= -Wall -ggdb3 -Werror -Wextra
TESTS=-DTESTS -DUSECOLORS
MODULES= nouvelle_fraction.o numdem.o fractioncmp.o eval_fraction.o
%.o:%.c
	gcc $(INCLUDE) $(OPTIONS) -c $*.c -o $*.o 

$(DEST)/%: %.c $(MODULES)
	gcc $(INCLUDE) $(OPTIONS) -o $(DEST)/$* $(TESTS) $*.c $(MODULES)
	
run/%: $(DEST)/%
	$(DEST)/$*
