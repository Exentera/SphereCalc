# SphereCalc – Sphere Properties Calculator

SphereCalc is a terminal-based C program that calculates various properties of a sphere based on one known value. The user can input any of the following values, and the program computes the remaining properties accordingly:

- **Radius**
- **Diameter**
- **Circumference**
- **Circle Area**
- **Surface Area**
- **Volume**

*Note: Although this version is provided in English, you can easily adapt it for other languages if needed.*

---

## How It Works

1. **User Input**:  
   The program prompts you to select which value is known. Depending on the selection, it asks you to enter the corresponding value.

2. **Calculations**:  
   The program first computes the sphere’s radius, then uses it to calculate:
   - **Diameter**: `d = 2 * r`
   - **Circumference**: `u = 2 * π * r`
   - **Circle Area**: `a = π * r²`
   - **Surface Area**: `o = 4 * π * r²`
   - **Volume**: `v = (4/3) * π * r³`

3. **Output**:  
   Finally, it displays all calculated properties of the sphere.

---

## How to Compile and Run

1. Save the source code as `spherecalc.c`.

2. Compile the code using a C99-compatible compiler (e.g., `gcc`), linking with the math library:

```bash
gcc -o SphereCalc spherecalc.c -lm
```

3. Run the program:
```bash
./SphereCalc
```

---

## Requirements
C99 compatible compiler (e.g., gcc)

Standard libraries: stdio.h, stdlib.h, time.h, stdbool.h, math.h

