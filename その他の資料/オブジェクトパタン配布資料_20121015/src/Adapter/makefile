
CC = g++
OBJS   = src/main.o src/AdapterExtends.cpp src/Adaptee.cpp src/AdapterObjectComposition.cpp
TARGET = Adapter.exe

all : $(TARGET)

$(TARGET) : $(OBJS)
	$(CC) $(OBJS) -o $@
	
.c.o:
	$(CC) -c $<
	
