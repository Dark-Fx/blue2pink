CC=gcc
CFLAGS=-Wall -g
LDFLAGS=
TARGET=blue2pink
OBJFILES=blue2pink.o


all: $(TARGET)

$(TARGET): $(OBJFILES)
	        $(CC) $(CFLAGS) -o $(TARGET) $(OBJFILES) $(LDFLAGS)


clean:
	        rm -f $(OBJFILES) $(TARGET) *~
