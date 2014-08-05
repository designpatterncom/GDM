
CC = g++
OBJS   = src/main.o src/Product.o src/Manager.o src/ProductMessageBoxPen.o src/ProductUnderLinePen.o
TARGET = prototype.exe

all : $(TARGET)

$(TARGET) : $(OBJS)
	$(CC) $(OBJS) -o $@
	
.c.o:
	$(CC) -c $<
	
