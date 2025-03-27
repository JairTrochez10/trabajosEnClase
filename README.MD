PrintF
{
	"Print to console": {
		"scope": "python",
		"prefix": "printF",
		"body": [
			"print(f\"texto {$1} ...texto{$2} ...texto.\")",
			"$3"
		],
		"description": "printf en python"
	}
}
------------------------------------------------------------------
Hola Mundo
{
	"Print to console": {
		"scope": "javascript,typescript,python",
		"prefix": "mundo",
		"body": [
			"print(\"hola mundo!\")",
			"$2"
			],
			
		"description": "hola mundo"
	}
}
----------------------------------------------------------------
Limpiar Pantalla
{
	"Print to console": {
		"scope": "javascript,typescript,python",
		"prefix": "limpiar",
		"body": [
			"import os",
			"os.system('cls' if os.name == 'nt' else 'clear')",
			"$2"
		],
		"description": "Limpia la pantalla de la consola"
	}
}
-------------------------------------------------------------
Variable Decimal
{
	"Print to console": {
		"scope": "javascript,typescript,python",
		"prefix": "variableDecimal",
		"body": [
			"n1=float(input(\"Ingrese numero decimal: \"))",
			"$2"  
		],
		"description": "Ingresar numeros decimales"
	}
}
-----------------------------------------------------------
Variable Entero
{
	"Print to console": {
		"scope": "javascript,typescript,python",
		"prefix": "variableEntero",
		"body": [
			"n1=int(input(\"Ingrese numero Entero: \"))",
			"$2"
		],
		"description": "Ingresar numeros enteros"
	}
}