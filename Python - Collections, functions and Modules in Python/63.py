def sum_of_divisors(n):
    divisors = [i for i in range(1, n+1) if n % i == 0]
    return sum(divisors)

print(sum_of_divisors(12))

