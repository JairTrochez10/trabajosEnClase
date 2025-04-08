import os
os.system('cls' if os.name == 'nt' else 'clear')

#Escribe la siguiente expresión como expresión: (a+b)/(c+d)

print("El Programa Realizara esto: (a+b)/(c+d)")
a=float(input("Ingrese el valor de a: "))
b=float(input("Ingrese el valor de b: "))
c=float(input("Ingrese el valor de c: "))
d=float(input("Ingrese el valor de d: "))

resultado=(a+b)/(c+d)
print("El resultado de la expresión es:", resultado)