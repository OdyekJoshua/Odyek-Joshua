#include <stdio.h>
#include <string.h>


#define DEVICE_COUNT 10 //Total number of appliances
#define TARIFF 0.15 //  Electricity cost per kWh in your currency

//Sturcture of device//
typedef struct {
    char name[20];
    float power_W; //power rate in watts
    float usage_hours;
} Device;

// Function to calculate power
float calculate_power_VI(float V, float I) {
    return V * I;
}

float calculate_power_IR(float I, float R) {
    return I * I * R;
}

// Efficiency calculation
float calculate_efficiency(float output_power, float input_power) {
    return (output_power / input_power) * 100.0f;
}

// Safety simulation
void simulate_safety(int grounded, float fault_current) {
    if (grounded)
        printf("Safe: Fault current directed to ground (%.1f A).\n", fault_current);
    else
        printf("Danger: Fault current may pass through user (%.1f A).\n", fault_current);
}

int main() {
    Device devices[DEVICE_COUNT] = {
        {"Kettle", 1500, 1},
        {"Fridge", 200, 24},
        {"Bulb", 60, 5},
        {"TV", 100, 4},
        {"Microwave", 1200, 0.5},
        {"Fan", 75, 8},
        {"Heater", 1800, 2},
        {"Washing machine", 500, 1},
        {"Laptop", 50, 6},
        {"Air conditioner", 2200, 4}
    };

    //Arrays for the results, stores energy and cost for each devices above//
    float daily_energy_kWh[DEVICE_COUNT];
    float daily_cost[DEVICE_COUNT];
    float total_monthly_energy = 0;

    printf("Device Energy Consumption and Cost Analysis:\n");
    printf("-----------------------------------------------------\n");
    printf("%-12s %-8s %-10s %-10s\n", "Device", "Power(W)", "Daily kWh", "Monthly Cost");

    for (int i = 0; i < DEVICE_COUNT; i++) {
        daily_energy_kWh[i] = (devices[i].power_W * devices[i].usage_hours) / 1000.0f;
        daily_cost[i] = daily_energy_kWh[i] * TARIFF;
        float monthly_cost = daily_cost[i] * 30;
        total_monthly_energy += daily_energy_kWh[i] * 30;

        printf("%-12s %-8.1f %-10.2f %-10.2f\n",
               devices[i].name, devices[i].power_W, daily_energy_kWh[i], monthly_cost);
    }

    printf("\nTotal Monthly Energy Consumption: %.2f kWh\n", total_monthly_energy);

    // Power calculations
    float V = 230.0f, I = 5.0f, R = 10.0f;
    printf("\nPower Calculations:\n");
    printf("P = VI = %.1f * %.1f = %.2f W\n", V, I, calculate_power_VI(V, I));
    printf("P = I^2R = %.1f^2 * %.1f = %.2f W\n", I, R, calculate_power_IR(I, R));

    // Efficiency example
    float eff = calculate_efficiency(900, 1000);
    printf("\nEfficiency: Output = 900 W, Input = 1000 W => %.2f%%\n", eff);

    // Safety simulation
    printf("\nElectrical Safety Simulation:\n");
    simulate_safety(1, 5.0f); // grounded
    simulate_safety(0, 5.0f); // not grounded

    return 0;
}

/*  What this Program Does

-Analyzes energy use and cost of 10 household devices ie Kettle,Fridge,Bulb,TV,Microwave,Fan,Heater,Laptop,Washer,Oven.
-Demonstrates electrical formulas (power, efficiency).
-Simulates a grounding safety check.
-Educates on how energy usage impacts electricity bills.*/