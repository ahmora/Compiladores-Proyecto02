all: compile

compile:
	flex pylex.l
	bison -dv pysin.y -o pysin.cpp
	g++ pylex.cpp pysin.cpp -o pylex -std=c++11
clean:
	rm pylex.cpp pylex pysin.cpp pysin.output pysin.hpp

compile1:
	flex pylex.l
	bison -dv pysin_ae.y -o pysin.cpp
	g++ pylex.cpp pysin.cpp -o pylex -std=c++11

run:
	more Ejemplo.py
	./pylex Ejemplo.py
