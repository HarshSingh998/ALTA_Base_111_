
original_price, discount_percent, tax_percent = map(float, input().split())

# Calculate discount
discount_amount = original_price * (discount_percent / 100)

# Price after discount
discounted_price = original_price - discount_amount

# Calculate tax on discounted price
tax_amount = discounted_price * (tax_percent / 100)

# Final price
final_price = discounted_price + tax_amount

# Output with 2 decimal places
print(f"Discounted Price: {discounted_price:.2f}")
print(f"Final Price: {final_price:.2f}")

