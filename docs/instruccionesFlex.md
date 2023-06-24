# Como probar un archivo escrito en lenguaje flex
## 1. Compilar archivo flex a lenguaje c
```
flex nombreArchivoFlex.l
```
Nota: la salida de esto **siempre** es un .c llamado **lex.yy.c**
## 2. Compilar archivo C
```
gcc lex.yy.c
```
## 3. Ejecutar binario
```
./a.out
```