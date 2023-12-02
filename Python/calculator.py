# This is a simple calculator.
# Which can calculate plus, minus, multiply, division, square, cube, square root, cube root, power and interest.

print("""\033[1;95m ============================================
  __.         .    __    .      .    ,       
 (__ *._ _ ._ | _ /  ` _.| _.. .| _.-+- _ ._.
 .__)|[ | )[_)|(/,\__.(_]|(_.(_||(_] | (_)[  
           |                                 
 =================== Made By \033[4mSoumalya Naskar\033[0m.\n""")
# This is headline.

list = [] # Set a empty list for while loop.

while list != 0:
	option = str(input("\033[1;36m ⭐ Enter your option: "))
	
	if option == "plus": # Plus.
		while True:
			try:
				plus_1 = float(input("\n\033[0;37m [\033[1;32m🗸\033[0;37m] Enter the first number to plus: "))
				break
			except ValueError:
				print(" [\033[1;31m🗴\033[0;37m] OOPS\u001b[0m: \033[1;31mPlease Enter a number value!")
		while True:		
			try:
				plus_2 = float(input("\033[0;37m [\033[1;32m🗸\033[0;37m] Enter the second number to plus: "))
				break
			except ValueError:
				print(" [\033[1;31m🗴\033[0;37m] OOPS\u001b[0m: \033[1;31mPlease Enter a number value!")
		print(f"\n ✅ \u001b[42mANSWER\u001b[0m: \033[1;32m{float(plus_1)} plus {float(plus_2)} is {(float(plus_1)) + (float(plus_2))}")
		print("\033[1;33m ༄ ------------------------------------------------༒\n")
		
	elif option == "minus": # Minus.
		while True:
			try:
				minus_1 = float(input("\n\033[0;37m [\033[1;32m🗸\033[0;37m] Enter the first number to minus: "))
				break
			except ValueError:
				print(" [\033[1;31m🗴\033[0;37m] OOPS\u001b[0m: \033[1;31mPlease Enter a number value!")
		while True:
			try:
				minus_2 = float(input("\033[0;37m [\033[1;32m🗸\033[0;37m] Enter the second number to minus: "))
				break
			except ValueError:
				print(" [\033[1;31m🗴\033[0;37m] OOPS\u001b[0m: \033[1;31mPlease Enter a number value!")
		print(f"\n ✅ \u001b[42mANSWER\u001b[0m: \033[1;32m{float(minus_1)} minus {float(minus_2)} is {float(minus_1) - float(minus_2)}") 
		print("\033[1;33m ༄ ------------------------------------------------༒\n")
		
	elif option == "multi": # Multiply.
		while True:
			try:
				multi_1 = float(input("\n\033[0;37m [\033[1;32m🗸\033[0;37m] Enter the first number to multiply: "))
				break
			except ValueError:
				print(" [\033[1;31m🗴\033[0;37m] OOPS\u001b[0m: \033[1;31mPlease Enter a number value!")
		while True:
			try:
				multi_2 = float(input("\033[0;37m [\033[1;32m🗸\033[0;37m] Enter the second number to multiply: "))
				break
			except ValueError:
				print(" [\033[1;31m🗴\033[0;37m] OOPS\u001b[0m: \033[1;31mPlease Enter a number value!")
		print(f"\n ✅ \u001b[42mANSWER\u001b[0m: \033[1;32m{float(multi_1)} multiply {float(multi_2)} is {float(multi_1) * float(multi_2)}") 
		print("\033[1;33m ༄ ------------------------------------------------༒\n")
		
	elif option == "div": # Division.
		while True:
			try:
				div_1 = float(input("\n\033[0;37m [\033[1;32m🗸\033[0;37m] Enter the first number to division: "))
				break
			except ValueError:
				print(" [\033[1;31m🗴\033[0;37m] OOPS\u001b[0m: \033[1;31mPlease Enter a number value!")
		while True:
			try:
				div_2 = float(input("\033[0;37m [\033[1;32m🗸\033[0;37m] Enter the second number to division: "))
				break
			except ValueError:
				print(" [\033[1;31m🗴\033[0;37m] OOPS\u001b[0m: \033[1;31mPlease Enter a number value!")
		if div_2 != 0:
			print(f"\n ✅ \u001b[42mANSWER\u001b[0m: \033[1;32m{float(div_1)} divided {float(div_2)} is {float(div_1) / float(div_2)}")
		else:
			print("\n [\033[1;31m🗴\033[0;37m] ERROR\u001b[0m: \033[1;31mDivision by zero is not allowed!")
		print("\033[1;33m ༄ ------------------------------------------------༒\n")
		
	elif option == "square": # Square.
		def squre(x):
			return x * x # Square function.
		while True:
			try:
				squ_1 = int(input("\n\033[0;37m [\033[1;32m🗸\033[0;37m] Enter a number to square: "))
				break
			except ValueError:
				print(" [\033[1;31m🗴\033[0;37m] OOPS\u001b[0m: \033[1;31mPlease Enter a number value!")
		ans = float(squre(int(squ_1)))
		print(f"\n ✅ \u001b[42mANSWER\u001b[0m: \033[1;32m{int(squ_1)} square is {float(ans)}")
		print("\033[1;33m ༄ ------------------------------------------------༒\n")
		
	elif option == "cube": # Cube
		def cube(x):
			return x * x * x # Cube function.
		while True:
			try:
				cub_1 = int(input("\n\033[0;37m [\033[1;32m🗸\033[0;37m] Enter a number to cube: "))
				break
			except ValueError:
				print(" [\033[1;31m🗴\033[0;37m] OOPS\u001b[0m: \033[1;31mPlease Enter a number value!")
		ans = float(cube(int(cub_1)))
		print(f"\n ✅ \u001b[42mANSWER\u001b[0m: \033[1;32m{int(cub_1)} cube is {float(ans)}")
		print("\033[1;33m ------------------------------------------------༒\n")
		
	elif option == "square_rt": # Square Root.
		while True:
			try:
				squrt_1 = int(input("\n\033[0;37m [\033[1;32m🗸\033[0;37m] Enter a number to square root: "))
				break
			except ValueError:
				print(" [\033[1;31m🗴\033[0;37m] OOPS\u001b[0m: \033[1;31mPlease Enter a number value!")
		ans = squrt_1 ** (1/2)
		if squrt_1 >= 0:
			print(f"\n ✅ \u001b[42mANSWER\u001b[0m: \033[1;32m{int(squrt_1)} square root is {float(ans)}")
		else:
			print("\n [\033[1;31m🗴\033[0;37m] ERROR\u001b[0m: \033[1;31mSquare root of a negative number is not allowed!")
		print("\033[1;33m ༄ ------------------------------------------------༒\n")
		
	elif option == "cube_rt": # Cube Root.
		while True:
			try:
				cubrt_1 = int(input("\n\033[0;37m [\033[1;32m🗸\033[0;37m] Enter a number to cube root: "))
				break
			except ValueError:
				print(" [\033[1;31m🗴\033[0;37m] OOPS\u001b[0m: \033[1;31mPlease Enter a number value!")
		ans = cubrt_1 ** (1/3)
		if cubrt_1 >= 0:
			print(f"\n ✅ \u001b[42mANSWER\u001b[0m: \033[1;32m{int(cubrt_1)} cube root is {float(ans)}")
		else:
			print("\n [\033[1;31m🗴\033[0;37m] ERROR\u001b[0m: \033[1;31mCube root of a negative number is not allowed!")
		print("\033[1;33m ༄ ------------------------------------------------༒\n")
		
	elif option == "power": # Power.
		while True:
			try:
				power_1 = float(input("\n\033[0;37m [\033[1;32m🗸\033[0;37m] Enter the value for base number: "))
				break
			except ValueError:
				print(" [\033[1;31m🗴\033[0;37m] OOPS\u001b[0m: \033[1;31mPlease Enter a number value!")
		while True:
			try:
				power_2 = float(input("\033[0;37m [\033[1;32m🗸\033[0;37m] Enter the value for power raised: "))
				break
			except ValueError:
				print(" [\033[1;31m🗴\033[0;37m] OOPS\u001b[0m: \033[1;31mPlease Enter a number value!")
		print(f"\n ✅ \u001b[42mANSWER\u001b[0m: \033[1;32m{float(power_1)} to the power {float(power_2)} is {pow(float(power_1), float(power_2))}")
		print("\033[1;33m ༄ ------------------------------------------------༒\n")
		
	elif option == "interest": # Interest.
		while True:
			try:
				intrs_1 = int(input("\n\033[0;37m [\033[1;32m🗸\033[0;37m] Enter your principal amount: "))
				break
			except ValueError:
				print(" [\033[1;31m🗴\033[0;37m] OOPS\u001b[0m: \033[1;31mPlease Enter a number value!")
		while True:
			try:
				intrs_2 = float(input("\033[0;37m [\033[1;32m🗸\033[0;37m] Enter your rate of interest: "))
				break
			except ValueError:
				print(" [\033[1;31m🗴\033[0;37m] OOPS\u001b[0m: \033[1;31mPlease Enter a number value!")
		while True:
			try:
				intrs_3 = int(input("\033[0;37m [\033[1;32m🗸\033[0;37m] Enter your number of years: "))
				break
			except ValueError:
				print(" [\033[1;31m🗴\033[0;37m] OOPS\u001b[0m: \033[1;31mPlease Enter a number value!")
		ans = float((int(intrs_1) * float(intrs_2) * int(intrs_3)) / 100)
		print(f"\n ✅ \u001b[42mANSWER\u001b[0m: \033[1;32mYour total interest is {float(ans)} and your total amount will be {int(intrs_1) + float(ans)}")
		print("\033[1;33m ༄ --------------------------------------------------------------------------------༒\n")

	elif option == "finday": # Find Days.
		def find_day_on_date(year, month, day):
			# Calculate the number of days between the given date and January 1, 1900
			total_days = (year - 1900) * 365 + (year - 1901) // 4 - (year - 1801) // 100 + (year - 1601) // 400
			days_in_month = [31, 28 if year % 4 != 0 or (year % 100 == 0 and year % 400 != 0) else 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
			# Add the number of days for each month leading up to the given month
			for m in range(1, month):
				total_days += days_in_month[m-1]
			# Add the number of days for the given month
			total_days += day
			# Calculate the day of the week (0 = Monday, 1 = Tuesday, etc.)
			day_of_week = total_days % 7
			return day_of_week
		while True:
			try:
				day = int(input("\n\033[0;37m [\033[1;32m🗸\033[0;37m] Enter the day: "))
				break
			except ValueError:
				print(" [\033[1;31m🗴\033[0;37m] OOPS\u001b[0m: \033[1;31mPlease Enter a number value!")
		while True:
			try:
				month = int(input("\033[0;37m [\033[1;32m🗸\033[0;37m] Enter the month: "))
				break
			except ValueError:
				print(" [\033[1;31m🗴\033[0;37m] OOPS\u001b[0m: \033[1;31mPlease Enter a number value!")
		while True:
			try:
				year = int(input("\033[0;37m [\033[1;32m🗸\033[0;37m] Enter the year: "))
				break
			except ValueError:
				print(" [\033[1;31m🗴\033[0;37m] OOPS\u001b[0m: \033[1;31mPlease Enter a number value!")
		day_of_week = find_day_on_date(year, month, day)
		days = ["Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"]
		if day_of_week >=0 and day_of_week < 7:
			print(f"\n ✅ \u001b[42mANSWER\u001b[0m: \033[1;32mThe day on {day}/{month}/{year} was {days[day_of_week]}.")
		else:
			print("\n [\033[1;31m🗴\033[0;37m] ERROR\u001b[0m: \033[1;31mInvalid date.")
		print("\033[1;33m ༄ ------------------------------------------------༒\n")

	elif option == "multi_tb": # Multiplication Table
		while True:
			try:
				table = int(input("\n\033[0;37m [\033[1;32m🗸\033[0;37m] Enter the number for multiplication table: "))
				break
			except ValueError:
				print(" [\033[1;31m🗴\033[0;37m] OOPS\u001b[0m: \033[1;31mPlease Enter a number value!")
		print(f"\n ✅ \u001b[42mANSWER\u001b[0m:")
		for i in range(1,11):
			print(f"\n\033[1;32m ---->> {int(table)} X {int(i)} = {int(table)*int(i)} <<----")
		print("\033[1;33m ༄ ------------------------------------------------༒\n")
		
	elif option == "help": # Option Help.
		print("""\n\033[0;37m (💠️) Enter the \u001b[44m'plus'\033[0;37m option to plus two numbers.
 (💠️) Enter the \u001b[44m'minus'\033[0;37m option to minus second number from first number.
 (💠️) Enter the \u001b[44m'multi'\033[0;37m option to multiply two numbers.
 (💠️) Enter the \u001b[44m'div'\033[0;37m option to divide second number part of first number.
 (💠️) Enter the \u001b[44m'square'\033[0;37m option to square a number.
 (💠️) Enter the \u001b[44m'cube'\033[0;37m option to cube a number.
 (💠️) Enter the \u001b[44m'square_rt'\033[0;37m option to square root a number.
 (💠️) Enter the \u001b[44m'cube_rt'\033[0;37m option to cube root a number.
 (💠️) Enter the \u001b[44m'power'\033[0;37m option to use power option.
 (💠️) Enter the \u001b[44m'interest'\033[0;37m option to calculate interest.
 (💠️) Enter the \u001b[44m'finday'\033[0;37m option to find dates name.
 (💠️) Enter the \u001b[44m'multi_tb'\033[0;37m option to print multiplication table.
 (💠️) Enter the \u001b[44m'info'\033[0;37m option to this program information.
 (💠️) Enter the \u001b[44m'quit'\033[0;37m option to exit this program.
\033[1;33m ༄ ------------------------------------------------༒\n""")
 
	elif option == "info": # Info.
		print("""\n \033[0;37m[🍁] \u001b[45;1mOverview\033[0;3m :
	⌾ This guide provides information on how to use the Python calculator and its features.
	⌾ The calculator is a basic tool that can perform basic arithmetic operations such as addition, subtraction, multiplication, division and lot's more.\033[0;37m
 
 [🍁] \u001b[45;1mRequirements\033[0;3m :
	⌾ Python 3.10 or higher version must be installed
	⌾ Basic knowledge of Python programming\033[0;37m
    
 [🍁] \u001b[45;1mCode structure\033[0;3m :
 	⌾ The code is divided into two parts:
	⌾ The main function which handles the user input and displays the result
	⌾ The calculator function which performs the calculation and returns the result\033[0;37m
    
 [🍁] \u001b[45;1mHow to use\033[0;3m :
	⌾ Clone the repository or download the calculator.py file
	⌾ Open terminal or command prompt and navigate to the directory where the file is located
	⌾ Run the script by typing python calculator.py in the terminal or command prompt
	⌾ Enter the option 'help' to know about all features
	⌾ Enter the two numbers for the calculation
	⌾ The result will be displayed on the screen\033[0;37m
    
 [🍁] \u001b[45;1mFeatures\033[0;3m :
	⌾ Performs basic arithmetic operations (addition, subtraction, multiplication, and division)
	⌾ User-friendly interface for entering numbers and operations
	⌾ Provides results for simple calculations\033[0;37m

 [🍁] \u001b[45;1mLimitations\033[0;3m :
	⌾ Currently only performs basic arithmetic operations
	⌾ No support for more advanced calculations
	⌾ Can only handle two numbers at a time\033[0;37m
    
 [🍁] \u001b[45;1mSupport\033[0;3m :
	⌾ For any questions or issues regarding the calculator, please contact the developer Soumalya Naskar.
	⌾ Just email <soumalya191@gmail.com> and you connect with the developer of this program.\033[0;37m

 [🍁] \u001b[45;1mConclusion\033[0;3m :
	⌾ This calculator is a simple and easy-to-use tool for basic arithmetic calculations.
	⌾ Its basic features make it a good choice for simple arithmetic operations, but it may not be suitable for more advanced calculations.\033[0;1m 
 \033[1;33m ༄ ---------------------------------------------------------------------------------------------------------------------------------------༒\n""")
 
	elif option == "quit": # Exit.
		print("\n\033[1;34m ~~~~~\\\\ ::: 👋 \u001b[43mGood bye\u001b[0m \033[1;34m👋 ::: //~~~~~\n")
		break # Exit this program.
		
	else: # Error.
		print("\n ❌ \u001b[41mERROR\u001b[0m: \033[1;31mYou have entered invalid option!\n")
		
# End of this program.
