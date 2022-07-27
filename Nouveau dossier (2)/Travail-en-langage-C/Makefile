#Syntaxe
#cible : dependences
# commande #! utiliser obligatoirement la touche tabulation pour indenter


CC=gcc
EXEC =program.exe
OBJ = main.o game.o utils.o


$(EXEC) : $(OBJ)
	$(CC) $(OBJ) -o $(EXEC)


main.o: main.c
	$(CC) -c main.c

game.o: game.c
	$(CC) -c game.c

utils.o : utils.c
	$(CC) -c utils.c

run: $(EXEC)
	./$(EXEC)

clean :
	rm -rf *.o 
	