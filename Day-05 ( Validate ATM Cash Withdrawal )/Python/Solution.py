accountBalance, withdrawalAmount = input().split()

accountBalance = float(accountBalance)
withdrawalAmount = int(withdrawalAmount)

transactionFee = 2

valid = (withdrawalAmount > 0 and
         withdrawalAmount % 100 == 0 and
         accountBalance >= withdrawalAmount + transactionFee)

print("Transaction Valid:", str(valid).lower())

if valid:
    remainingBalance = accountBalance - withdrawalAmount - transactionFee
    print(f"Remaining Balance: {remainingBalance:.2f}")