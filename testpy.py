bill = int(input("Enter a dollar amount: "))
x20 = bill // 20
bill %= 20
x10 = bill // 10
bill %= 10
x5 = bill // 5
x1 = bill % 5
print(f"$20 bill: {x20}\n$10 bill: {x10}\n$5 bill: {x5}\n$1 bill: {x1}")
