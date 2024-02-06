def reverse_string_if_multiple_of_4(input_str):
    if len(input_str) % 4 == 0:
        return input_str[::-1]  # Reverses the string using slicing
    else:
        return input_str

# Test the function
input_string = input("Enter a string: ")
result = reverse_string_if_multiple_of_4(input_string)
print("Result:", result)
