def replace_not_poor(input_string):
    # Find the indices of 'not' and 'poor' in the input string
    index_not = input_string.find('not')
    index_poor = input_string.find('poor')

    # Check if both substrings are found and 'not' appears before 'poor'
    if index_not != -1 and index_poor != -1 and index_not < index_poor:
        # Replace the 'not'...'poor' substring with 'good'
        return input_string[:index_not] + 'good' + input_string[index_poor + len('poor'):]
    else:
        return input_string

# Test the function
input_str = input("Enter a string: ")
result = replace_not_poor(input_str)
print("Result:", result)
