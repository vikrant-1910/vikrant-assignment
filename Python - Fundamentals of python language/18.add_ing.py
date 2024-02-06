def add_ing_ly(string):
    if len(string) < 3:
        return string
    elif string.endswith('ing'):
        return string + 'ly'
    else:
        return string + 'ing'

# Test the function
input_string = input("Enter a string: ")
result = add_ing_ly(input_string)
print("Result:", result)
