def longest_word_length(word_list):
    # Initialize the variable to store the length of the longest word
    max_length = 0
    
    # Iterate over each word in the list
    for word in word_list:
        # Update max_length if the length of the current word is greater
        if len(word) > max_length:
            max_length = len(word)
    
    return max_length

# Test the function
words = ["apple", "banana", "grapefruit", "pineapple", "watermelon"]
print("Length of the longest word:", longest_word_length(words))
