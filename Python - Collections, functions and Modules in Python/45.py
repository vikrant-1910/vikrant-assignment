dictionary = {'a': 100, 'b': 200, 'c': 50, 'd': 300, 'e': 250}
sorted_dict = sorted(dictionary.items(), key=lambda x: x[1], reverse=True)[:3]
print(dict(sorted_dict))

