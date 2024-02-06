def swap_and_concat(str1, str2):
    # Swap the first two characters of each string
    swapped_str1 = str2[:2] + str1[2:]
    swapped_str2 = str1[:2] + str2[2:]
    
    # Concatenate the swapped strings with a space in between
    result = swapped_str1 + ' ' + swapped_str2
    return result

# Test the function
string1 = input("Enter the first string: ")
string2 = input("Enter the second string: ")

result = swap_and_concat(string1, string2)
print("Result:", result)
