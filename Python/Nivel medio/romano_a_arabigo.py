
# http://progra.usm.cl/apunte/ejercicios/2/numeros-romanos.html

def romano_a_arabigo(romano):
  k_value = {'M':1000, 'D':500, 'C':100, 'L':50, 'X':10, 'V':5, 'I':1}
  longitud_numero = len(romano)
  total_acumulado = 0
  for i in range(longitud_numero-1):
    if k_value.get(romano[i]) < k_value.get(romano[i+1]):
      total_acumulado -= k_value.get(romano[i])
    else:
      total_acumulado += k_value.get(romano[i]) 
  return total_acumulado + k_value.get(romano[longitud_numero-1])

romano = input("Ingrese numero romano: ")
print("El numero romano convertido a arabigo es:",romano_a_arabigo(romano))

