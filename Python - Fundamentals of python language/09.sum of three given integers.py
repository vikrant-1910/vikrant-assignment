num1 = int(input("Enter the first integer: "))
num2 = int(input("Enter the second integer: "))
num3 = int(input("Enter the third integer: "))

if num1 == num2 or num2 == num3 or num1 == num3:
    sum = 0
    print("Two values are equal so Sum is zero.")
else:
    sum = num1 + num2 + num3
    print("The sum of the three integers is:", sum)
