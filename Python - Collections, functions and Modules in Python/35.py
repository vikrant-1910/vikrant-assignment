'''
You can traverse through a dictionary using loops like 
for loop or by using methods like keys(), values(), or items().
'''

dictionary = {'a': 1, 'b': 2, 'c': 3}

# Using for loop
for key in dictionary:
    print(key, dictionary[key])

# Using items()
for key, value in dictionary.items():
    print(key, value)
