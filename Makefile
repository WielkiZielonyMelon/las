CC := g++
CFLAGS := -std=c++17 -Wall -Wextra -pedantic -c

LINK := g++
LFLAGS := -std=c++17 -Wall -Wextra -pedantic

RM := rm

SRC := $(wildcard *.cpp)
OBJS := $(SRC:.cpp=.o)

.PHONY : all clean
all : las

las : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o $@

%.o : %.cpp
	$(CC) $(CFLAGS) $< -o $@

clean :
	$(RM) -f *.o las
