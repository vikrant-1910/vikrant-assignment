dictionary = {'a': 1, 'b': 2, 'c': 3}
keys_to_check = ['a', 'd']

if all(key in dictionary for key in keys_to_check):
    print("All keys exist in dictionary")
else:
    print("At least one key does not exist in dictionary")
