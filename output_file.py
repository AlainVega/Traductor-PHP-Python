if (1 > 1):
	print("Esto esta en un if\n")
elif (1 < 2):
	print("Esto esta en un elseif\n")
else:
	print("Esto esta en un else\n")
i = 2
match i:
	case 0:
		print("i es igual a 0")
		print("i sigue valiendo 0")
	case 1:
		print("i es igual a 1")
		print("i sigue valiendo 1")
	case 2:
		print("i es igual a 2")
		print("i sigue valiendo 2")
	case _ :
		print("i no es 0 ni 1 ni 2")
		print("i sigue valiendo ni 0 ni 1 ni 2")
	
