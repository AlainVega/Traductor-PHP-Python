# Como probar un archivo escrito en lenguaje flex
## 1. Compilar archivo flex a lenguaje c
```
flex nombreArchivoFlex.l
```
Nota: la salida de esto **siempre** es un .c llamado **lex.yy.c**
## 2. Compilar archivo C
```
gcc lex.yy.c -lfl
```
Nota: -lfl enlaza la biblioteca *libfl* que proporciona funciones y herramientas relacionadas con el análisis léxico.
## 3. Ejecutar binario
```
./a.out
```
Otras breves instrucciones: 
- [Instrucciones bison](instruccionesBison.md)
- [Instruciones flex y bison](instruccionesBison.md)