#Este es un comentario estilo C
# Este es otro comentario pero estilo python
def conArgumentos(a=12, b=13, c="texto", d="texto"):
	print("hola que tal?")
	print(" adios")
	#Ahora voy a retornar true
	return True
def sinArgumentos():
	print("hola que tal?")
	print(" adios")
	# este no retorna nada
a = conArgumentos()
c = 10
b = sinArgumentos(c)
d = conArgumentos(1, 2, "hola", True)
exit(1 == 1)
if (1 == 1):
	op = 10
	#Do something
	# Hace algo
while (1 == 1):
	print("hola")
	# funciona al parecer
a = lambda b, c, d="nada" : (b := b + 1) - 2 * c
