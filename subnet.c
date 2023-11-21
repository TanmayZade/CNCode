#include <stdio.h>
#include <string.h>

void calculateSubnet(char ipAddress[], int subnetCount);

int main() {
    char ipAddress[16];
    int subnetCount;

    // Get input from the user
    printf("Enter IP address: ");
    scanf("%s", ipAddress);

    printf("Enter the number of subnets: ");
    scanf("%d", &subnetCount);

    calculateSubnet(ipAddress, subnetCount);

    return 0;
}

void calculateSubnet(char ipAddress[], int subnetCount) {
    // Split the IP address into octets
    int octet1, octet2, octet3, octet4;
    sscanf(ipAddress, "%d.%d.%d.%d", &octet1, &octet2, &octet3, &octet4);

    // Calculate the number of hosts per subnet
    int hostsPerSubnet = 256 / subnetCount;

    // Print the subnets
    printf("\nSubnets:\n");
    for (int i = 0; i < subnetCount; i++) {
        printf("%d.%d.%d.%d\n", octet1, octet2, octet3, i * hostsPerSubnet);
    }
}
