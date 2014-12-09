#!/bin/bash
make
mkdir ../output
cp ../oolong/Oolong*
(more ../test/prueba.py && ./pylex ../test/prueba.py 2) &>  ../output/prueba.txt
mv ejec.j ../oolong/prueba.j
cp ../oolong/prueba.j ../test/prueba.j
(more ../test/prueba2.py && ./pylex ../test/prueba2.py 2) &>  ../output/prueba2.txt
mv ejec.j ../oolong/prueba2.j
cp ../oolong/prueba2.j ../test/prueba2.j
(more ../test/table.py && ./pylex ../test/table.py 2)  &> ../output/table.txt
(more ../test/tree.py && ./pylex ../test/tree.py 0) &> ../output/tree.txt
make clean
echo "Se han creado en la carpeta ../output con extensión .txt la ejecucion de los programas en ../test"
echo "Se han creado en la carpeta ../output con estensión .j los archivos a compilar con oolong"

echo "echo \"Ejecutando el programa \\\"prueba\\\"\"
java Oolong prueba.j
java prueba
rm prueba*"> ../oolong/run.sh

chmod +x ../oolong/run.sh

echo "Se ha creado un script y se le han dado permisos de ejecución en la carpeta ../oolong"
echo "Para ejecutar el programa ejecutar ese script"


