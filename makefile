go: fonction.o trie.o Main.o
	gcc Main.o fonction.o trie.o -o go

fonction.o: fonction.c fonction.h
	gcc -c -Wall fonction.c -o fonction.o

trie.o: trie.c trie.h
	gcc -c -Wall trie.c -o trie.o

Main.o: Main.c 
	gcc -c -Wall Main.c -o Main.o

clear:
	rm -f *.o && rm go && clear
