DEST = ~/Informatique/S3/bin
INCLUDE= -I ~/Informatique/S3/include
OPTIONS= -Wall -ggdb3 -Werror -Wextra
TESTS=-DTESTS -DUSECOLORS
MODULES= nouvelle_fraction.o numdem.o fractioncmp.o eval_fraction.o print_fraction.o 
PROGRAMME= recherche.c
LFRAC= ~/Informatique/S3/lib/libfraction.a
%.o:%.c
	gcc $(INCLUDE) $(OPTIONS) -c $*.c -o $*.o 

$(DEST)/%: %.c $(MODULES) ~/Informatique/S3/lib/libfraction.a
	gcc $(INCLUDE) $(OPTIONS) -o $(DEST)/$* $(TESTS) $*.c $(LIB)
	
run/%: $(DEST)/%
	$(DEST)/$*
LIB= -L ~/Informatique/S3/lib -lm -lfraction
~/Informatique/S3/lib/libfraction.a:$(MODULES)
	ar rcs ~/Informatique/S3/lib/libfraction.a $(MODULES)
run/%: $(DEST)/%
	$(DEST)/$* -p 0.01 0.3 
$(PROGRAMME): $(PROGRAMME).c $(LFRAC)
	gcc $(OPTIONS) $(INCLUDE) -o $(PROGRAMME) $(PROGRAMME).c $(LIB)
