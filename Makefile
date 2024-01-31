# Define the compiler
CC = gcc

# Define any compile-time flags
CFLAGS = -Wall -g -std=c99 -Os

# Define any directories containing header files other than /usr/include
INCLUDES = -I.

# Define library paths in addition to /usr/lib
LFLAGS =

# Define any libraries to link into executable
LIBS =

# Define the C source files
SRCS = main.c init.c io.c app_logic.c

# Define the C header files
HDRS = config.h init.h io.h app_logic.h

# Define the C object files 
OBJS = $(SRCS:.c=.o)

# Define the executable file 
MAIN = embedded_app

.PHONY: depend clean

all:    $(MAIN)
	@echo  Simple embedded application has been compiled

$(MAIN): $(OBJS) 
	$(CC) $(CFLAGS) $(INCLUDES) -o $(MAIN) $(OBJS) $(LFLAGS) $(LIBS)

# This is a suffix replacement rule for building .o's from .c's
# It uses automatic variables $<: the name of the prerequisite of
# the rule(a .c file) and $@: the name of the target of the rule (a .o file)
.c.o:
	$(CC) $(CFLAGS) $(INCLUDES) -c $<  -o $@

clean:
	$(RM) *.o *~ $(MAIN)

depend: $(SRCS)
	makedepend $(INCLUDES) $^

# DO NOT DELETE THIS LINE -- make depend needs it
