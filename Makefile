all:
	clang++ -std=c++11 -framework CoreVideo -framework IOKit -framework Cocoa -framework GLUT -framework OpenGL libraylib.a main.cpp Game.cpp Player.cpp -o main
	./main