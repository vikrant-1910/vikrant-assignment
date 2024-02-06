def get_first_and_last_two_chars(input_str):
    if len(input_str) < 2:
        return ""  # Return empty string if the length is less than 2
    else:
        return input_str[:2] + input_str[-2:]  # Concatenate the first two and last two characters

# Test the function
input_string = input("Enter a string: ")
result = get_first_and_last_two_chars(input_string)
print("Result:", result)
