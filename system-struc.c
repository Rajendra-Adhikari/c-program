//Make a system that can store information of all students ,teachers and staff of your college in the foem of structure
//can also make this into a C project with other functionalities like cgpa calculation of student?
#include <stdio.h>
#include <string.h>

// Define structure for students, teachers, and staff
struct person {
    char name[100];
    int regNo;
    long long contact;
    char role[20]; // "Student", "Teacher", "Staff"
    float cgpa; // Only for students
};

// Function to input data
struct person inputInfo() {
    struct person p;

    printf("Enter Name: ");
    scanf(" %[^\n]", p.name);  // Read full name with spaces
    printf("Enter Registration Number: ");
    scanf("%d", &p.regNo);
    printf("Enter Contact Number: ");
    scanf("%lld", &p.contact);
    printf("Enter Role (Student/Teacher/Staff): ");
    scanf("%s", p.role);

    // Convert role to lowercase for case-insensitive comparison
    for (int i = 0; p.role[i]; i++) {
        if (p.role[i] >= 'A' && p.role[i] <= 'Z') {
            p.role[i] += 32;  // Convert uppercase to lowercase
        }
    }

    if (strcmp(p.role, "student") == 0) { // Ensure lowercase comparison
        printf("Enter CGPA: ");
        scanf("%f", &p.cgpa);
    } else {
        p.cgpa = -1;  // Indicating CGPA is not applicable
    }

    return p;  // Return the structure
}

// Function to display details
void displayInfo(struct person p) {
    printf("\n--- Information ---\n");
    printf("Name: %s\n", p.name);
    printf("Reg No: %d\n", p.regNo);
    printf("Contact: %lld\n", p.contact);
    printf("Role: %s\n", p.role);

    if (strcmp(p.role, "student") == 0) {  // Ensure lowercase comparison
        printf("CGPA: %.2f\n", p.cgpa);
    }
    printf("--------------------\n");
}

// Main function
int main() {
    int n, i;

    printf("Enter the number of people: ");
    scanf("%d", &n);

    struct person people[n];  // Array of structures

    // Input details
    for (i = 0; i < n; i++) {
        printf("\nEnter details for person %d:\n", i + 1);
        people[i] = inputInfo();
    }

    // Display all details
    printf("\nDisplaying all records:\n");
    for (i = 0; i < n; i++) {
        displayInfo(people[i]);
    }

    return 0;
}
