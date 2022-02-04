

def create_multiplication_table(width, height):
    for y in range(1, height+1):
        for x in range(1, width+1):
            print(f'{x*y:<4}', end='')
        print()



x = input("Enter width of table (1..32):")
y = input("Enter height of table (1..32):")


create_multiplication_table(int(x),int(y))