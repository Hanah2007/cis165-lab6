# Lab 6: BMI and Color Mixer

## Overview
This lab contains two standalone C++17 programs. The BMI program calculates body mass index from weight and height. The Color Mixer program combines two primary colors to determine the resulting color.

## Program 1: BMI Calculator

### Plan
- **Inputs:** Weight in pounds and height in inches.
- **Variables:** `weight`, `height`, and `bmi`, all stored as `double`.
- **Validation:** Reject weight or height less than or equal to zero.
- **Calculation:** BMI = weight × 703 / (height × height).
- **Output:** Display BMI to two decimal places and show the category.

### BMI Categories
- Below 18.5: Underweight
- From 18.5 through 25.0, inclusive: Optimal weight
- Above 25.0: Overweight

### BMI Test Results

| Test | Inputs (weight, height) | Expected Result | Actual Result |
|---|---|---|---|
| Underweight | 100, 70 | 14.35, Underweight | 14.35, Underweight |
| Optimal weight | 150, 70 | 21.52, Optimal weight | Not tested yet |
| Overweight | 200, 70 | 28.69, Overweight | Not tested yet |
| Zero height | 150, 0 | Error message | Error message |
| Negative weight | -150, 70 | Error message | Error message |

## Program 2: Color Mixer

### Plan
- **Inputs:** Two color names: red, blue, or yellow.
- **Variables:** Two character arrays, `color1` and `color2`.
- **Validation:** Reject any color that is not red, blue, or yellow.
- **Comparison:** Use `strcmp()` to compare color names.
- **Output:** Display the mixed color or an error message.

### Color Mixing Rules
- Red + blue = purple
- Red + yellow = orange
- Blue + yellow = green
- Two identical valid colors produce that same color.

### Color Mixer Test Results

| Test | Inputs | Expected Result | Actual Result |
|---|---|---|---|
| Primary colors | red, blue | purple | purple |
| Primary colors | red, yellow | orange | orange |
| Primary colors | blue, yellow | green | green |
| Reversed order | blue, red | purple | purple |
| Same color | red, red | red | red |
| Invalid first color | orange, blue | Error message | Error message |
| Invalid second color | red, orange | Error message | Error message |

## Compilation and Execution

Compile the BMI program:

```bash
g++ -std=c++17 -Wall -Wextra bmi.cpp -o bmi
```

Run it:

```bash
./bmi
```

Compile the Color Mixer program:

```bash
g++ -std=c++17 -Wall -Wextra color_mixer.cpp -o color_mixer
```

Run it:

```bash
./color_mixer
```

## Notes
The BMI program uses `fixed` and `setprecision(2)` to display two decimal places. The Color Mixer uses `strcmp()` because the color names are stored in character arrays. The `COLOR_SIZE` constant defines the array size and the input width.
