string = 'w3resource'
char_frequency = {}
for char in string:
    char_frequency[char] = char_frequency.get(char, 0) + 1
print(char_frequency)

