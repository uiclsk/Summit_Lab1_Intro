#include <iostream>
#include <cmath>
using namespace std;

// Student function prototype
double calculateTravelTimeHours(double distance, double speed);

// Helper function to compare doubles
bool isClose(double a, double b)
{
    return fabs(a - b) < 0.001;
}

int main()
{
    int passed = 0;
    int total = 3;

    // Test Case 1
    double result = calculateTravelTimeHours(150, 60);
    if (isClose(result, 2.5))
    {
        cout << "Test 1 PASSED\n";
        passed++;
    }
    else
    {
        cout << "Test 1 FAILED (Expected 2.5, got " << result << ")\n";
    }

    // Test Case 2
    result = calculateTravelTimeHours(100, 50);
    if (isClose(result, 2.0))
    {
        cout << "Test 2 PASSED\n";
        passed++;
    }
    else
    {
        cout << "Test 2 FAILED (Expected 2.0, got " << result << ")\n";
    }

    // Test Case 3
    result = calculateTravelTimeHours(60, 30);
    if (isClose(result, 2.0))
    {
        cout << "Test 3 PASSED\n";
        passed++;
    }
    else
    {
        cout << "Test 3 FAILED (Expected 2.0, got " << result << ")\n";
    }

    cout << "\nPassed " << passed << " out of " << total << " tests.\n";

    return 0;
}