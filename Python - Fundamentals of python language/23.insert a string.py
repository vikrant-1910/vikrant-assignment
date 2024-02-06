def insert_in_middle(main_string, insert_string):
    middle_index = len(main_string) // 2
    return main_string[:middle_index] + insert_string + main_string[middle_index:]

# Test the function
main_str = input("Enter the main string: ")
insert_str = input("Enter the string to insert: ")
result = insert_in_middle(main_str, insert_str)
print("Result:", result)
