minmax: minmax.o stats.o	
	gcc minmax.o stats.o -o minmax

# Compile options. The -I<dir> is needed so gcc can find the files.
CFLAGS = -Wall -Werror -g -I$(Include)

# Files .o, executable programs and arguments
OBJS = minmax.o stats.o
EXEC = minmax
ARGS = arg1 arg2 arg3s

$(EXEC): $(OBJS)
	gcc $(OBJS) -o $(EXEC)

clean: 
	rm -f $(OBJS) $(EXEC)

run: $(EXEC)
	./$(EXEC) $(ARGS)
