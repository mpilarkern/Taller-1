def convertibilidad(x, y):
    if x == y:
        return True
    elif (2*x <= y) or (10*x + 1 <= y):
        return convertibilidad(2*x, y) or convertibilidad(10*x + 1, y)
    else:
        return False

print(convertibilidad(2, 45))
print(convertibilidad(1, 82))

"""Dudas:
1. x e y son siempre números enteros?
2. la secuencia de transformaciones se imprime como array o como números separados?
3. cuando lo paso a c++ de qué tipo tiene que ser la salida? (o sea debería ser int convertibilidad(x, y)?)
"""