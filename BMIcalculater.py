from os import sys


def main():
    name = input("Enter Name : ")
    height_m = input("Height (m) : ")
    weight_kg = input("Weight (kg) : ")

    height_m = float(height_m)
    weight_kg = float(weight_kg)

    def bmi_calculator(name, height_m, weight_kg):
        bmi = weight_kg / (height_m ** 2)
        print()
        print("BMI :", bmi)
        if bmi < 18.5:
            return name + " is Underweight"
        elif bmi >= 18.5 and bmi <= 24.9:
            return name + " is Normal weight"
        elif bmi >= 25 and bmi <= 29.9:
            return name + " is Overweight"
        else:
            return name + " is Obesity"

    result = bmi_calculator(name, height_m, weight_kg)
    print(result)
    print()
    print('''Press ENTER to check again
    Press "q" to quit :''')
    choice = input()
    print()
    if choice == 'q':
        sys.exit(0)
    else:
        main()


main()
