# accurate-calorie-calculator-through-a-C-program
It is required to develop a highly accurate calorie calculator through a C++ program, the program allows the user to enter the data for 𝑁 persons, where the data for each person is {𝑛𝑎𝑚𝑒, the 𝑎𝑔𝑒 (in years), 𝑤𝑒𝑖𝑔ℎ𝑡 (in kilograms), ℎ𝑒𝑖𝑔ℎ𝑡 (in centimeters), and the 𝑔𝑒𝑛𝑑𝑒𝑟 of a person (male or female)}. The program should store the entered data for the 𝑁 persons in a text file along with: • The Basal Metabolic Rate (BMR) value, the amount of required calories (BMR) for a body to perform daily functions. • The Body Mass Index (BMI) value. • The status that indicates whether this person has {Optimal weight, Underweight, or Overweight} according to the given Table. 𝐵𝑀𝑅 = { 66 + 13.7 ∗ 𝑊𝑒𝑖𝑔ℎ𝑡 + 5 ∗ 𝐻𝑒𝑖𝑔ℎ𝑡 – 6.8 ∗ 𝐴𝑔𝑒 𝑓𝑜𝑟 𝑚𝑎𝑙𝑒𝑠 655 + 9.6 ∗ 𝑊𝑒𝑖𝑔ℎ𝑡 + 1.8 ∗ 𝐻𝑒𝑖𝑔ℎ𝑡 – 4.7 ∗ 𝐴𝑔𝑒 𝑓𝑜𝑟 𝑓𝑒𝑚𝑎𝑙𝑒𝑠 , 𝐵𝑀𝐼 = 𝑤𝑒𝑖𝑔ℎ𝑡 (100 ∗ ℎ𝑒𝑖𝑔ℎ𝑡) 2 The program should also print on the screen: 1. The details of the persons with highest BMI values. 2. The average BMR value per gender for Optimal weighted persons. notes: - The value of 𝑁 is entered by user. Error checking: all numbers that are entered by the user must be positive. Body Mass Index (𝑩𝑴𝑰) Weight Status 𝐵𝑀𝐼 < 18.5 Underweight 18.5 ≤ 𝐵𝑀𝐼 ≤ 25 Optimal weight 𝐵𝑀𝐼 > 25 Overweight

Description of the code :
•	After calling the required libraries ,created a structure called person and it include name,age,weight,heightand gender.
Then in the main function:
•	Opened a new file called text 
•	Declared a variable called n(this will refer to the number of persons and user will enter it ) and it’s pointer called –pointer-.
•	After getting the number of persons from user ,and by using pointer to store the number in n variable 
•	Created bmi,bmr and p arrays to store in each values and p is an array of person type
•	Then there’s a for loop will continue reading information  until it reaches the number of persons 
•	At each reading if it’s a number the program checks whether it’s positive or negative and if it’s negative it shows error message then stores all the values and print it on screen and in a file called text
•	When we come at the gender input the program goes to either f or m condition
If it’s male it has a special equation to calculate the bmr and the female too but bmi is the same for both genders
Then if:
1.	the bmi <18.5 it prints on the screen and writes in the file “under weight”
2.	bmi >18.5 and bmi> or equal 25 it prints on the screen and writes in the file “optimal weight”
3.	the bmi >25 it prints on the screen and writes in the file “over weight”

•	Then it closes the file and the program 

 
