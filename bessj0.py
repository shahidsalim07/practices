from scipy.special import jn
import numpy as np
import matplotlib.pyplot as plt

# Define the Bessel function J_0(x) using scipy
def bessel_j0(x):
    return jn(0, x)

# Generate x values
x_values = np.linspace(0, 20, 100)

# Compute corresponding y values using the Taylor series approximation
y_taylor = [bessel_j0_approx(xi) for xi in x_values]

# Compute y values using scipy's Bessel function for comparison
y_actual = bessel_j0(x_values)

# Plot the results
plt.plot(x_values, y_taylor, label='Taylor Series Approximation')
plt.plot(x_values, y_actual, label='Actual Bessel Function (scipy)')
plt.legend()
plt.title('Bessel Function J_0(x) and Taylor Series Approximation')
plt.xlabel('x')
plt.ylabel('J_0(x)')
plt.show()

