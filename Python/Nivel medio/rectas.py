
# http://progra.usm.cl/apunte/ejercicios/2/rectas.html

def punto_en_recta(punto, recta): 
  if punto[1] == recta[0] * punto[0] + recta[1]:
    return True
  return False

def son_paralelas(recta_1, recta_2):
  if recta_1[0] == recta_2[0]:
    return True
  return False

def recta_que_pasa_por(punto_1, punto_2):
  recta = [0,0]
  try:
    pendiente = (punto_1[1] - punto_2[1]) / (punto_1[0] - punto_2[0])  # pendiente (m) de y = mx + b
  except:
    pendiente = 0
  recta[0] = pendiente  
  recta[1] = (recta[0] * punto_1[0] - punto_1[1]) * -1
  return recta

recta = (2, -1)   # y = mx + b

print(punto_en_recta((0, -1), recta)) # -1 = 2*0 - 1 == True
print(son_paralelas((2,-1), (2,5))) # m1 == m2 => paralelas 
recta_dos_puntos = recta_que_pasa_por((-2,4), (4,1))
print("(",recta_dos_puntos[0],",",recta_dos_puntos[1],")")

