

/* Question 1: Calculate Employee Salary */
int main() {
    int emp_id;
    float salary_per_hour = 999.0;
    float hours_worked;

    printf("Enter Employee ID:\t");
    scanf("%d", &emp_id);
    printf("Enter total hours worked in this month:\t");
    scanf("%f", &hours_worked);

    printf("The total salary of the Employee (ID = %d): Rs.%.2f\n", emp_id, salary_per_hour * hours_worked);

    return 0;
}

/* Question 2: Calculate Rectangle Perimeter */
int main() {
    float height, width;

    printf("Enter Height of the Rectangle:\t");
    scanf("%f", &height);
    printf("Enter Width of the Rectangle:\t");
    scanf("%f", &width);

    printf("The Perimeter of the Rectangle: %.2f units\n", 2 * (height + width));

    return 0;
}

/* Question 3: Determine Person's Height Category */
int main() {
    float height;

    printf("Enter Height of the Person in centimeters:\t");
    scanf("%f", &height);

    if (height < 150)
        printf("The Person is DWARF\n");
    else if (height == 150)
        printf("The Person is AVERAGE\n");
    else if (height >= 165)
        printf("The Person is TALL\n");
    else
        printf("The Person is between DWARF and TALL but not AVERAGE\n");

    return 0;
}

/* Question 4: Convert Decimal to Binary */
int decimal_to_binary(int num) {
    int dec = num;
    int bin = 0;
    int rem;
    int place = 1;

    while (dec > 0) {
        rem = dec % 2;
        dec = dec / 2;
        bin = bin + (rem * place);
        place = place * 10;
    }
    return bin;
}

int main() {
    printf("DECIMAL TO BINARY CONVERTER\n\n");
    int num;

    printf("ENTER A DECIMAL NUMBER: ");
    scanf("%d", &num);

    printf("BINARY EQUIVALENT: %d\n", decimal_to_binary(num));

    return 0;
}

/* Question 5: Print Fibonacci Series */
void fibonacci(int a, int b, int num) {
    if (num <= 0) {
        return;
    }

    int z = a + b;
    printf("%d ", z);
    fibonacci(b, z, num - 1);
}

int main() {
    int a = 0, b = 1, num;

    printf("FIBONACCI SERIES PRINTER\nEnter nth term of the Fibonacci series:\t");
    scanf("%d", &num);

    printf("1 ");
    fibonacci(a, b, num);

    return 0;
}
