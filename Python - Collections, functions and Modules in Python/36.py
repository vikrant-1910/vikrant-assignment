'''
You can check the presence of a key in a dictionary using the in keyword or by using the get() method.
'''

dictionary = {'a': 1, 'b': 2, 'c': 3}
key = 'a'

if key in dictionary:
    print("Key exists in dictionary")

# Using get()
if dictionary.get(key) is not None:
    print("Key exists in dictionary")
