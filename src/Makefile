all: compile

compile:
	flex pylex.l
	bison -dv pysin.y -o pysin.cpp -t
	g++ pylex.cpp pysin.cpp -o pylex -std=c++0x

clean:
	rm pylex.cpp pylex pysin.cpp pysin.output pysin.hpp ejec.j
debug:
	flex -d -v pylex.l
	bison -dv pysin.y -o pysin.cpp
	g++ pylex.cpp pysin.cpp -o pylex -std=c++11
run:
