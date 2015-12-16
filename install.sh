#!/bin/bash
make
echo "Su procesador es:"
cat /proc/cpuinfo | grep "model name" | uniq | cut -f2 -d":" 
cat /proc/cpuinfo | grep "model name" | uniq | cut -f2 -d":"  >> ./dat/datos.csv
echo "Ahora se ejecutará el programa, espere unos minutos mientras se ejecuta el benchmark, al finalizar se abrirá la tabla con los resultados, usted solo debe presionar aceptar."
./bin/benchmark >> ./dat/datos.csv
libreoffice ./dat/datos.csv
