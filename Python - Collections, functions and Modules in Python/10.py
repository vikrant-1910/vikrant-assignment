def square_list():
    return [i ** 2 for i in range(1, 31)]

squared_numbers = square_list()
result = squared_numbers[:5] + squared_numbers[-5:]
print(result)
