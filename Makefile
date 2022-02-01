# $@ - set to the name of the target. In below case its 'test'
# $< - set to the prerequisite. In below case its 'main.o;

all: test

test: main.o
	g++ -o $@ $< 

main.o: main.cpp

clean: 
	rm test main.o
