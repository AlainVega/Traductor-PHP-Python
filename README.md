# Traductor PHP a Python
Implementación de un esquema de traducción, que permite la traslación de un código en lenguaje PHP a un código equivalente en lenguaje Python.
### Integrantes:
- Alain Vega.
- Mathias Martinez.
## Herramientas utilizadas:
- [Flex](https://github.com/westes/flex)
- [Bison](https://www.gnu.org/software/bison/)
# Como probar el proyecto
Realizar los pasos en el siguiente orden:
### 1. Clonar el repositorio:
```
git clone https://github.com/AlainVega/Traductor-PHP-Python.git
```
### 2. Ir a la carpeta raiz del proyecto:
```
cd Traductor-PHP-Python
```
### Hay 2 formas de suministrar codigo php al ejecutable (_php2python_)
Importante: en caso de errores con el ejecutable ver [como compilar el proyecto](/docs/instruccionesCompilacion.md)
- #### Ejecutar la aplicacion con un archivo en lenguaje PHP, por ejemplo:
```
./php2python < traductor/ejemplos/condicionales.php 
```
Nota: los ejemplos se puede encontrar en /traductor/ejemplos
- #### Ejecutar la aplicacion y escribir codigo php por consola:
```
./php2python
```
Nota: en este punto se puede escribir codigo php en la terminal y ver como este se reconoce y traduce
### Luego abrir el archivo output_file.py el cual tiene la salida en lenguaje python
```
vi output_file.py
```
## La documentacion pertinente se encuentra en [/docs](/docs)
Nota: Repositorio para el trabajo practico de la materia compiladores. 
