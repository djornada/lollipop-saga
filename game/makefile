IDIR = ./include
SDIR = ./src
ODIR = ./obj
LDIR = ./lib

CC = g++
OS := $(shell uname)
ifeq ($(OS), Darwin)
CFLAGS = -framework OpenGL -framework GLUT -I$(IDIR) -Wall 
else 
CFLAGS = -lglut -lGL -lGLU -I$(IDIR) -Wall 
endif


_DEPS =  Enemy.h GameObject.h Map.h Ship.h Bullet.h
DEPS  = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = GameLoop.o GameObject.o Map.o Ship.o Enemy.o Bullet.o 
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: $(SDIR)/%.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

lollipop.game: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
.PHONY: clean

clean:
	rm -f $(ODIR)/*.o
	rm -f lollipop.game
