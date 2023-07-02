# Como probar un archivo escrito en lenguaje Bison
## 1. Compilar archivo Bison a lenguaje c
```
bison -d nombreArchivoBison.y
```
Notas: 
- La salida de esto **siempre** es un .c llamado **nombreArchivoBison.tab.c**
- La opcion -d hace que bison cree la cabecera **nombreArchivoBison.tab.h** que se utiliza en el archivo flex
## 2. Compilar archivo C
```
gcc nombreArchivoBison.tab.c
```
## 3. Ejecutar binario
```
./a.out
```
Otras breves instrucciones: 
- [Instrucciones flex](instruccionesFlex.md)
- [Instruciones flex y bison](instruccionesBison.md)