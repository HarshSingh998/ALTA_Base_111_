print("=== Age Estimator ===")

days = int(input("Enter the number of days you have lived: "))

years = days // 365
remaining_days = days % 365

print()
print("Your estimated age is:")
print(years, "years and", remaining_days, "days")


