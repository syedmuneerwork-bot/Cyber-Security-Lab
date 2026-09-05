#include <stdio.h>

int main() {
    char labName[100];
    int numComputers, numNetworkDevices, numSecurityTools;
    float costPerComputer, costPerDevice, softwareCost;
    float computerCost, networkCost, totalInvestment;
    printf("Enter Lab Name: ");
    scanf(" %[^\n]", labName);
    printf("Enter Number of Computers: ");
    scanf("%d", &numComputers);
    printf("Enter Number of Network Devices: ");
    scanf("%d", &numNetworkDevices);
    printf("Enter Number of Security Tools: ");
    scanf("%d", &numSecurityTools);
    printf("Enter Cost per Computer: ");
    scanf("%f", &costPerComputer);
    printf("Enter Cost per Network Device: ");
    scanf("%f", &costPerDevice);
    printf("Enter Annual Security Software Cost: ");
    scanf("%f", &softwareCost);
    computerCost = numComputers * costPerComputer;
    networkCost = numNetworkDevices * costPerDevice;
    totalInvestment = computerCost + networkCost + softwareCost;

    printf("\n========================================\n");
    printf("CYBERSECURITY LAB REPORT\n");
    printf("========================================\n");
    printf("Lab Name              : %s\n", labName);
    printf("Computers             : %d\n", numComputers);
    printf("Network Devices       : %d\n", numNetworkDevices);
    printf("Security Tools        : %d\n", numSecurityTools);
    printf("Computer Cost         : %.0f\n", computerCost);
    printf("Network Device Cost   : %.0f\n", networkCost);
    printf("Software Cost         : %.0f\n", softwareCost);
    printf("----------------------------------------\n");
    printf("Total Lab Investment  : %.0f\n", totalInvestment);
    printf("----------------------------------------\n");
    printf("========================================\n");

    return 0;
}
