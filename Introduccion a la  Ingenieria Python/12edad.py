# calcular la edad con funciones
import os
os.system('cls' if os.name == 'nt' else 'clear')

def Edad(aa,an):
    return aa-an

print("Calculamos tu edad")

aa=int(input("año actual: "))
an=int(input("año nacimiento: "))

print(f"Su edad es: {Edad(aa,an)}")
