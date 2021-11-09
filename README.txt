Para realizar una funcion que calcule el invers multiplicativo 
mas eficientemente, se hace uso de la funcion anteriormente creada
del "algoritmo extendido de ecluides", tal que podamos calcular

	ax + by = gcd(a, b)

Ya que para encontrar el inverso multiplicativo de a bajo m
colocaremos en la funcion del algoritmo extendido de euclides a "m"
como el parametro "b" y "a" como parametro "a"; 

Ademas ya que "a" y "m" son primos realtivos pondremos el valor
del gcd a 1 entonces tendriamos:
	a(x) + m(y) = 1

Si tomamos modulo m en ambos lados tendriamos:
	ax + my ≅ 1 (mod m)


En la funcion InversoMult recibimos "a" y "m"
	Primero creamos variables x,y para hacer uso del algoritmo extendido
	de euclides, el cual guardaremos el resultado en la varible "gcd"

	Si gcd es distinto de 1, significa que el inverso multiplicativo
	no existe

	De lo contrario nuestro resultado sera "res"
	que es (x mod n + n) mod n

	haciendo uso del x adquirido por el algoritmo extendido
	de euclides.

La funcion main pide 2 numeros al usuario e invoca la funcion InversoMult
	con los numeros recibidos como parametros para la funcion