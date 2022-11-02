all:
	clang -framework CoreVideo -framework IOKit -framework Cocoa -framework GLUT -framework OpenGL libraylib.a main.c Player.c Game.c -o Game
	./Game