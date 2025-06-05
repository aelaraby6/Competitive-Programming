#include <bits/stdc++.h>
using namespace std;

// ---------------------------
// Conversion Constants & Functions for Angle Measurements
const double PI = acos(-1.0);

// Converts minutes to degrees
// Example: 30 minutes = 0.5 degree
// Time Complexity: O(1)
double toDegreeFromMinutes(double minutes) {
    return minutes / 60;
}

// Converts degrees to radians
// Time Complexity: O(1)
double toRadians(double degree) {
    return degree * PI / 180.0;
}

// Converts radians to degrees
// Handles negative angles by converting them to equivalent positive angle
// Time Complexity: O(1)
double toDegree(double radian) {
    if (radian < 0) radian += 2 * PI;
    return radian * 180.0 / PI;
}

// ---------------------------
// Helper function to clamp values between -1 and 1 for safe asin/acos usage
double fixAngle(double A) {
    return A > 1 ? 1 : (A < -1 ? -1 : A);
}

// ---------------------------
// Law of Sines:
// sin(A)/a = sin(B)/b = sin(C)/c

// Calculate side 'a' using sides and angles 'b', 'A', and 'B'
double getSide_a_bAB(double b, double A, double B) {
    return (sin(A) * b) / sin(B);
}

// Calculate angle A from sides a, b and angle B using Law of Sines
double getAngle_A_abB(double a, double b, double B) {
    return asin(fixAngle((a * sin(B)) / b));
}

// ---------------------------
// Law of Cosines:
// a^2 = b^2 + c^2 - 2bc * cos(A)

// Calculate angle A from sides a, b, and c
double getAngle_A_abc(double a, double b, double c) {
    return acos(fixAngle((b * b + c * c - a * a) / (2 * b * c)));
}
