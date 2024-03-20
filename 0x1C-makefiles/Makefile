CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic -std=gnu89
SOURCES = main.c school.c
OBJECTS = $(SOURCES:.c=.o)
EXECUTABLE = school

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
    $(CC) $(CFLAGS) $(OBJECTS) -o $@

%.o: %.c
    $(CC) $(CFLAGS) -c $< -o $@

clean:
    rm -f $(OBJECTS) $(EXECUTABLE)

re: clean all
