a = 5 + 4
x = 3
y = 6
z = x + y - a
print(z)
b = 3 + 2 * 2
print(b)
c = 15
print(b * c)
str1 = "Hola"
str2 = "Mathias"
str3 = str1 + " " + str2
print(str3)
bool1 = True
bool2 = False
print(bool1 and bool2)
print(bool1 or bool2)
# MOD, XOR, NOT
variable = 7 % 2
xor = (1 == 1) ^ False
imprimir =  not xor
print(imprimir)
# Operadores de pre-incremento y pre-decremento
var = 10
print((var := var + 1))
((var := var + 1) - 1)
# Asignacion multiple
var1 = var2 = ((var := var + 1) - 1)
var1 = var = var2 = ((c := c - 1) + 1)
