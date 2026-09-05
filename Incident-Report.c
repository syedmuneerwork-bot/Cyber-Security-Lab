#include <stdio.h>

int main() {
    char incidentID[50], analystName[50];
    int affectedSystems;
    float recoveryCost, totalCost, downtime;

    printf("Enter Incident ID: ");
    scanf("%s", incidentID);

    printf("Enter Analyst Name: ");
    scanf("%s", analystName);

    printf("Enter Number of Affected Systems: ");
    scanf("%d", &affectedSystems);

    printf("Enter Estimated Recovery Cost (per system): ");
    scanf("%f", &recoveryCost);

    printf("Enter Downtime in hours: ");
    scanf("%f", &downtime);

    totalCost = affectedSystems * recoveryCost;

    printf("\n=================================\n");
    printf("SECURITY INCIDENT REPORT\n");
    printf("=================================\n");
    printf("Incident ID       : %s\n", incidentID);
    printf("Analyst           : %s\n", analystName);
    printf("Affected Systems  : %d\n", affectedSystems);
    printf("Recovery Cost     : %.0f\n", recoveryCost);
    printf("Total Cost        : %.0f\n", totalCost);
    printf("Downtime          : %.2f hours\n", downtime);
    printf("=================================\n");

    return 0;
}
