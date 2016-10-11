CC           = gcc
CFLAGS       = 
RM           = rm -f
PROGRAM_NAME = strerror

default: all

all: $(PROGRAM_NAME)

$(PROGRAM_NAME): main.c
	$(CC) $(CFLAGS) -o $(PROGRAM_NAME) main.c

clean:
	$(RM) $(PROGRAM_NAME)
