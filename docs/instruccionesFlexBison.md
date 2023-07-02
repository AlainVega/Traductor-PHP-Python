# Como juntar flex y bison
## 1. Compilar archivo de lenguaje flex a lenguaje c
```
flex nombreArchivoFlex.l
```
Nota: 
- La salida de esto **siempre** es un .c llamado **lex.yy.c**
## 2. Compilar archivo de lenguaje bison a lenguaje c
```
bison -d nombreArchivoBison.y
```
Notas:
- La salida de esto es un .c llamado nombreArchivoBison.tab.c
- La opcion -d hace que bison cree la cabecera **nombreArchivoBison.tab.h** que se utiliza en el archivo flex
## 3. Compilar los archivos C resultantes
```
gcc lex.yy.c php2python.tab.c -lfl -o traductor.exe
```
Nota: -lfl enlaza la biblioteca *libfl* que proporciona funciones y herramientas relacionadas con el análisis léxico.
## 4. Ejecutar el ejecutable
```
./traductor.exe
```
Referencias:
- [Instrucciones flex](instruccionesFlex.md)
- [Instruciones bison](instruccionesBison.md)