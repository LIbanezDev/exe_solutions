"""

http://progra.usm.cl/apunte/ejercicios/2/modulo-listas.html

"""

def promedio(lista):
  suma_total = 0
  for numero in lista:
    suma_total += numero
  return suma_total / len(lista)

def cuadrados(lista):
  cuadrados = []
  for numero in lista:
    cuadrados.append(pow(numero, 2))
  return cuadrados

def mas_larga(palabras):
  palabra_mas_larga = ''
  for indice in range(len(palabras)):   
    if palabras[indice] == 0:
      palabra_mas_larga = palabras[indice]
    if len(palabras[indice]) > len(palabra_mas_larga):
      palabra_mas_larga = palabras[indice]   
  return palabra_mas_larga

