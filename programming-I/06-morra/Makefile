# Biến
CXX = g++
CXXFLAGS = -Wall -g
TARGET = morra
SOURCES = morra.cpp
OBJECTS = morra.o

# Quy tắc mặc định
all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -f $(TARGET) $(OBJECTS)


