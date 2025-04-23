// PCM Calculator Pro
// Extended Version: Covers More Chapters from Class 11 & 12 for Physics, Chemistry, and Maths

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

// ===================== Utility ===================== //
void printLine() {
    cout << "\n--------------------------------------------\n";
}

// ===================== Physics ===================== //
void physicsClass11() {
    printLine();
    cout << "Physics - Class 11\n";
    cout << "1. Newton's Second Law\n";
    cout << "2. Work (W = F * d * cosθ)\n";
    cout << "3. Kinetic Energy (KE = 0.5 * m * v^2)\n";
    cout << "Choose topic: ";
    int choice; cin >> choice;
    double m, a, F, d, theta, v;
    switch(choice) {
        case 1:
            cout << "Enter mass (kg): "; cin >> m;
            cout << "Enter acceleration (m/s^2): "; cin >> a;
            cout << "Force = " << m * a << " N\n";
            break;
        case 2:
            cout << "Enter Force (N): "; cin >> F;
            cout << "Enter distance (m): "; cin >> d;
            cout << "Enter angle θ (in degrees): "; cin >> theta;
            cout << "Work = " << F * d * cos(theta * M_PI / 180.0) << " J\n";
            break;
        case 3:
            cout << "Enter mass (kg): "; cin >> m;
            cout << "Enter velocity (m/s): "; cin >> v;
            cout << "Kinetic Energy = " << 0.5 * m * v * v << " J\n";
            break;
        default:
            cout << "Invalid choice.\n";
    }
}

void physicsClass12() {
    printLine();
    cout << "Physics - Class 12\n";
    cout << "1. Ohm's Law\n";
    cout << "2. Power (P = V * I)\n";
    cout << "3. Lens Formula (1/f = 1/v - 1/u)\n";
    cout << "Choose topic: ";
    int choice; cin >> choice;
    double I, R, V, v, u, f;
    switch(choice) {
        case 1:
            cout << "Enter current (A): "; cin >> I;
            cout << "Enter resistance (ohm): "; cin >> R;
            cout << "Voltage = " << I * R << " V\n";
            break;
        case 2:
            cout << "Enter voltage (V): "; cin >> V;
            cout << "Enter current (A): "; cin >> I;
            cout << "Power = " << V * I << " W\n";
            break;
        case 3:
            cout << "Enter v (image distance): "; cin >> v;
            cout << "Enter u (object distance): "; cin >> u;
            f = (v * u) / (v - u);
            cout << "Focal length = " << f << " cm\n";
            break;
        default:
            cout << "Invalid choice.\n";
    }
}

// ===================== Chemistry ===================== //
void chemistryClass11() {
    printLine();
    cout << "Chemistry - Class 11\n";
    cout << "1. Mole Concept\n";
    cout << "2. Empirical Formula (mass % / atomic mass)\n";
    cout << "Choose topic: ";
    int choice; cin >> choice;
    switch(choice) {
        case 1: {
            double givenMass, molarMass;
            cout << "Enter given mass (g): "; cin >> givenMass;
            cout << "Enter molar mass (g/mol): "; cin >> molarMass;
            cout << "Moles = " << givenMass / molarMass << " mol\n";
            break;
        }
        case 2: {
            double percentC, percentH, percentO;
            cout << "Enter % of Carbon: "; cin >> percentC;
            cout << "Enter % of Hydrogen: "; cin >> percentH;
            cout << "Enter % of Oxygen: "; cin >> percentO;
            double ratioC = percentC / 12.0;
            double ratioH = percentH / 1.0;
            double ratioO = percentO / 16.0;
            cout << "Empirical ratio (C:H:O) ≈ " << ratioC << ":" << ratioH << ":" << ratioO << "\n";
            break;
        }
        default:
            cout << "Invalid choice.\n";
    }
}

void chemistryClass12() {
    printLine();
    cout << "Chemistry - Class 12\n";
    cout << "1. Molarity\n";
    cout << "2. Normality (N = eq/L)\n";
    cout << "Choose topic: ";
    int choice; cin >> choice;
    switch(choice) {
        case 1: {
            double moles, volume;
            cout << "Enter moles: "; cin >> moles;
            cout << "Enter volume (L): "; cin >> volume;
            cout << "Molarity = " << moles / volume << " M\n";
            break;
        }
        case 2: {
            double eq, vol;
            cout << "Enter equivalents: "; cin >> eq;
            cout << "Enter volume (L): "; cin >> vol;
            cout << "Normality = " << eq / vol << " N\n";
            break;
        }
        default:
            cout << "Invalid choice.\n";
    }
}

// ===================== Mathematics ===================== //
void mathsClass11() {
    printLine();
    cout << "Mathematics - Class 11\n";
    cout << "1. AP nth term\n";
    cout << "2. Sum of n natural numbers (n(n+1)/2)\n";
    cout << "Choose topic: ";
    int choice; cin >> choice;
    double a, d, n;
    switch(choice) {
        case 1:
            cout << "Enter first term (a): "; cin >> a;
            cout << "Enter common difference (d): "; cin >> d;
            cout << "Enter n: "; cin >> n;
            cout << "nth term = " << a + (n - 1) * d << "\n";
            break;
        case 2:
            cout << "Enter n: "; cin >> n;
            cout << "Sum = " << (n * (n + 1)) / 2 << "\n";
            break;
        default:
            cout << "Invalid choice.\n";
    }
}

void mathsClass12() {
    printLine();
    cout << "Mathematics - Class 12\n";
    cout << "1. Integration ∫ ax dx\n";
    cout << "2. Differentiation of ax^2\n";
    cout << "Choose topic: ";
    int choice; cin >> choice;
    double coef, x;
    switch(choice) {
        case 1:
            cout << "Enter coefficient a: "; cin >> coef;
            cout << "Enter x: "; cin >> x;
            cout << "Integral = " << (coef / 2) * pow(x, 2) << " + C\n";
            break;
        case 2:
            cout << "Enter coefficient a: "; cin >> coef;
            cout << "Enter x: "; cin >> x;
            cout << "Derivative = " << 2 * coef * x << "\n";
            break;
        default:
            cout << "Invalid choice.\n";
    }
}

// ===================== Main Menu ===================== //
int main() {
    int subject, cls;
    while (true) {
        printLine();
        cout << "PCM Calculator Pro\n";
        cout << "1. Physics\n2. Chemistry\n3. Mathematics\n4. Exit\n";
        cout << "Choose subject: ";
        cin >> subject;

        if (subject == 4) break;

        cout << "Choose class:\n1. Class 11\n2. Class 12\n";
        cin >> cls;

        switch(subject) {
            case 1:
                if (cls == 1) physicsClass11();
                else physicsClass12();
                break;
            case 2:
                if (cls == 1) chemistryClass11();
                else chemistryClass12();
                break;
            case 3:
                if (cls == 1) mathsClass11();
                else mathsClass12();
                break;
            default:
                cout << "Invalid choice!\n";
        }
    }
    return 0;
}

