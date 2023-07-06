# Como compilar el proyecto para obtener el ejecutable _php2python_
Observacion: posicionarse en la capeta raiz del proyecto
## Ejecutar los siguientes comandos en orden:
```
bison -d php2python.y
flex php2python.l
gcc lex.yy.c php2python.tab.c -lfl -o php2python
```
A continuacion se dispondra del ejecutable _php2python_