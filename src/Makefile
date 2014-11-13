all: compile

compile:
	flex pylex.l
	bison -dv pysin.y -o pysin.cpp
	g++ pylex.cpp pysin.cpp -o pylex -std=c++11
clean:
	rm pylex.cpp pylex pysin.cpp pysin.output pysin.hpp

run1:
	more Prueba.py
	./pylex Prueba.py

run:
	more Ejemplo.py
	./pylex Ejemplo.py
