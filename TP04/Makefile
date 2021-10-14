
CreerMatrice.o : CreerMatrice.c 
	gcc -I ~/Informatique/S3/include -ggdb3 -Wall -Werror -Wextra CreerMatrice.c -c 

run/CreerMatrice.c: ~/Informatique/S3/bin/CreerMatrice
	~/Informatique/S3/bin/CreerMatrice

~/Informatique/S3/bin/CreerMatrice: CreerMatrice.c AfficheMatrice.o
	gcc -I ~/Informatique/S3/include -ggdb3 -Wall -DTESTS -Werror -Wextra CreerMatrice.c AfficheMatrice.o -o ~/Informatique/S3/bin/CreerMatrice
	
run/AfficheMatrice.c: ~/Informatique/S3/bin/AfficheMatrice
	~/Informatique/S3/bin/AfficheMatrice
	
~/Informatique/S3/bin/AfficheMatrice: AfficheMatrice.c CreerMatrice.o
	gcc -I ~/Informatique/S3/include -ggdb3 -Wall -DTESTS -Werror -Wextra AfficheMatrice.c CreerMatrice.o -o ~/Informatique/S3/bin/AfficheMatrice

AfficheMatrice.o : AfficheMatrice.c
	gcc -I ~/Informatique/S3/include -ggdb3 -Wall -Werror -Wextra AfficheMatrice.c -c 
~/Informatique/S3/bin/SommeMatrice: CreerMatrice.c SommeMatrice.c
	gcc -I ~/Informatique/S3/include -ggdb3 -Wall  -Werror -Wextra CreerMatrice.c SommeMatrice.c -o ~/Informatique/S3/bin/SommeMatrice
run/SommeMatrice.c: ~/Informatique/S3/bin/SommeMatrice
	~/Informatique/S3/bin/SommeMatrice
SommeMatrice.o : SommeMatrice.c 
	gcc -I ~/Informatique/S3/include -ggdb3 -Wall -Werror -Wextra SommeMatrice.c -c 
