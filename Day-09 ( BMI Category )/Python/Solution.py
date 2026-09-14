weight = float(input("Enter your weight in kg: "))
height = float(input("Enter your height in meters: "))

bmi = weight / (height * height)

print(f"BMI: {bmi:.2f}")

if bmi < 18.5:
    print("Category: Underweight")
else:
    if bmi < 25:
        print("Category: Normal weight")
    else:
        if bmi < 30:
            print("Category: Overweight")
        else:
            print("Category: Obese")











