ifeq ($(OS),Windows_NT)
	LFLAGS=-lraylib -lgdi32 -lwinmm
	EXT=.exe
	PATH_DELIM=\\
else
	LFLAGS=-lraylib -lGL -lm -lpthread -ldl -lrt -lX11
	EXT=.out
	PATH_DELIM=/
endif

run: main.cpp
	$(CXX) main.cpp -o main$(EXT) -g $(LFLAGS)
	.$(PATH_DELIM)main$(EXT)





