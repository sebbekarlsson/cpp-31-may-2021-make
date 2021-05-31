# $@ = task name

compiler = g++
flags = -g -Wall

# fetching all source files
sources = $(wildcard src/*.cpp)

# creating a list of object file names from the source files
objects = $(sources:.cpp=.o)


# task   # dependencies
# to produce executable
program: $(objects)
	$(compiler) $(flags) $(objects) -o $@


# task for producing object files.
%.o: %.cpp ../include/%.hpp
	$(compiler) $(flags) -c $< -o $@


clean:
	-rm src/*.o
	-rm program