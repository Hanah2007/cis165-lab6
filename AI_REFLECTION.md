# AI Reflection

I used ChatGPT to help me understand the lab requirements and write the initial versions of my BMI Calculator and Color Mixer programs. I reviewed the code and ran the programs with sample inputs to check their behavior.

For the BMI Calculator, I used input validation to prevent calculations with zero or negative weight and height. I also used `fixed` and `setprecision(2)` to display the BMI with exactly two decimal places. I checked that the BMI categories use the required boundaries.

For the Color Mixer, I used character arrays and `strcmp()` to compare the entered colors. I tested different color combinations, reversed input order, identical colors, and invalid color names.

Testing helped me understand why validation should happen before calculations or color mixing. I also learned how named constants, conditional statements, and formatted output make programs clearer and more reliable.

Before submitting, I will compile both programs using C++17 with warning flags, check the required test cases, and make sure the README accurately records the results.
