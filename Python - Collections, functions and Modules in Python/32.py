dictionary = {'a': 4, 'b': 2, 'c': 3, 'd': 1}

sorted_ascending = sorted(dictionary.items(), key=lambda x: x[1])
print("Ascending:", dict(sorted_ascending))

sorted_descending = sorted(dictionary.items(), key=lambda x: x[1], reverse=True)
print("Descending:", dict(sorted_descending))
