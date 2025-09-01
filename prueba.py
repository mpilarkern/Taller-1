def convertibilidad(x, y):
    if x == y:
        return True
    elif (2*x < y) or (10*x + 1 < y):
        return convertibilidad(2*x, y) or convertibilidad(10*x + 1, y)
    else:
        return False

print(convertibilidad(1, 82))