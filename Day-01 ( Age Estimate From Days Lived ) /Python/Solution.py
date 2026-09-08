print("=== Age Estimator ===")

days = int(input("Enter the number of days you have lived: "))

# Calculate years
years = days // 365
remaining_days = days % 365

# Calculate months
months = remaining_days // 30
final_days = remaining_days % 30

print()
print("Your estimated age is:")
print(f"{years} years, {months} months, {final_days} days")
