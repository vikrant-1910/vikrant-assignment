def is_perfect(number):
    divisors_sum = sum(i for i in range(1, number) if number % i == 0)
    return divisors_sum == number

print(is_perfect(6))

