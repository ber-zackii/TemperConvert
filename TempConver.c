#include <stdio.h>

void celsius_to_fahrenheit(double celsius) {
    printf("%.2lf Celsius = %.2lf Fahrenheit\n", celsius, (celsius * 9/5) + 32);
}

void celsius_to_kelvin(double celsius) {
    printf("%.2lf Celsius = %.2lf Kelvin\n", celsius, celsius + 273.15);
}

void fahrenheit_to_celsius(double fahrenheit) {
    printf("%.2lf Fahrenheit = %.2lf Celsius\n", fahrenheit, (fahrenheit - 32) * 5/9);
}

void fahrenheit_to_kelvin(double fahrenheit) {
    printf("%.2lf Fahrenheit = %.2lf Kelvin\n", fahrenheit, ((fahrenheit - 32) * 5/9) + 273.15);
}

void kelvin_to_celsius(double kelvin) {
    printf("%.2lf Kelvin = %.2lf Celsius\n", kelvin, kelvin - 273.15);
}

void kelvin_to_fahrenheit(double kelvin) {
    printf("%.2lf Kelvin = %.2lf Fahrenheit\n", kelvin, ((kelvin - 273.15) * 9/5) + 32);
}

int main() {
    int choice;
    double temperature;

    printf("Temperature Converter:\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Celsius to Kelvin\n");
    printf("3. Fahrenheit to Celsius\n");
    printf("4. Fahrenheit to Kelvin\n");
    printf("5. Kelvin to Celsius\n");
    printf("6. Kelvin to Fahrenheit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter temperature: ");
    scanf("%lf", &temperature);

    switch (choice) {
        case 1:
            celsius_to_fahrenheit(temperature);
            break;
        case 2:
            celsius_to_kelvin(temperature);
            break;
        case 3:
            fahrenheit_to_celsius(temperature);
            break;
        case 4:
            fahrenheit_to_kelvin(temperature);
            break;
        case 5:
            kelvin_to_celsius(temperature);
            break;
        case 6:
            kelvin_to_fahrenheit(temperature);
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
