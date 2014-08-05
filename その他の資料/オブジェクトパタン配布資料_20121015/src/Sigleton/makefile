
CC = g++
OBJS   = src/main.o src/Singleton.o
TARGET = Singleton.exe

all : $(TARGET)

$(TARGET) : $(OBJS)
	$(CC) $(OBJS) -o $@
	
.c.o:
	$(CC) -c $<
	
