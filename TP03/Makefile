run/somme.c: ~/Informatique/S3/bin/somme
	~/Informatique/S3/bin/somme

~/Informatique/S3/bin/somme: somme.c
	gcc -I ~/Informatique/S3/include -ggdb3 -Wall -Werror -Wextra somme.c -o ~/Informatique/S3/bin/somme

run/tri.c: ~/Informatique/S3/bin/tri
	~/Informatique/S3/bin/tri

~/Informatique/S3/bin/tri: tri.c
	gcc -I ~/Informatique/S3/include -ggdb3 -Wall -Werror -Wextra tri.c -o ~/Informatique/S3/bin/tri

debug/tri.c:~/Informatique/S3/bin/tri
	ddd ~/Informatique/S3/bin/tri&
