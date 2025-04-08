import os
os.system('cls' if os.name == 'nt' else 'clear')

#Estructuras Condicionales If y Else

print("El Programa adivina el numero secreto entre 1 y 10")
secre=5
n1 = int(input("Ingrese un numero entre 1-10: "))
if n1 == secre:
    print("El numero es correcto")
else:
    print("El numero es incorrecto")
