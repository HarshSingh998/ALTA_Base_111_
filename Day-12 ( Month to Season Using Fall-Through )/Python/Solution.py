month = int(input("Enter month number: "))

match month:
    case 12 | 1 | 2:
        print("Season: Winter")

    case 3 | 4 | 5:
        print("Season: Spring")

    case 6 | 7 | 8:
        print("Season: Summer")

    case 9 | 10 | 11:
        print("Season: Autumn/Monsoon")

    case _:
        print("Invalid Month")