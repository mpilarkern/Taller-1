def convertibilidad(x, y):
    if x == y:
        return True
    elif (2*x <= y) or (10*x + 1 <= y):
        return convertibilidad(2*x, y) or convertibilidad(10*x + 1, y)
    else:
        return False

#algunos casos de prueba
print(convertibilidad(1, 82)) #True
print(convertibilidad(1, 2)) #True
print(convertibilidad(1, 11)) #True
print(convertibilidad(2, 162)) #True
print(convertibilidad(5, 101)) #True
print(convertibilidad(2, 21)) #True
print(convertibilidad(2, 22)) #False
print(convertibilidad(2, 45)) #False
print(convertibilidad(3, 10)) #False
print(convertibilidad(2, 3)) #False

"""Dudas:
1. x e y son siempre números enteros?
2. la secuencia de transformaciones se imprime como array o como números separados?
3. cuando lo paso a c++ de qué tipo tiene que ser la salida? (o sea debería ser int convertibilidad(x, y)?)
4. cuando dice imprimir tengo que poner un cout o está bien un return?
5. cómo es el tema del main?
"""