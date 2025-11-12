#include <stdio.h>
int main() 
{
    char *item_names[] = {"Coffee", "Tea", "Sandwich", "Burger", "Pastry"};
    int prices[] = {50, 30, 80, 120, 60};
    int total_quantities[5] = {0};
    int num_customers, num_items, item_num, quantity, total_revenue = 0, total_items_sold = 0;
    
    printf(" ~ Cafe Order Management System ~\n");
    printf("Item No. Item Name      Price ($)\n----------------------------------\n");
    for (int i = 0; i < 5; i++) 
	{
        printf("%8d %-15s %5d\n", i + 1, item_names[i], prices[i]);
    }
    
    printf("----------------------------------\n\nEnter total number of customers (max 10): ");
    scanf("%d", &num_customers);
    if (num_customers < 1 || num_customers > 10) return 1;

    for (int c = 1; c <= num_customers; c++)
	 {
        int customer_bill = 0;
        printf("\n~ Customer %d ~\nEnter number of items: ", c);
        scanf("%d", &num_items);

        for (int i = 0; i < num_items; i++) 
		{
            printf("Enter item number and quantity: ");
            scanf("%d %d", &item_num, &quantity);
            if (item_num > 0 && item_num <= 5)
			 {
                total_quantities[item_num - 1] += quantity;
                customer_bill += prices[item_num - 1] * quantity;
                total_items_sold += quantity;
            }
			 else
		    {
                printf("Invalid item number. Order skipped.\n");
            }
        }
        printf("Total Bill for Customer %d: $%d\n", c, customer_bill);
        total_revenue += customer_bill;
    }

    int max_q = 0, max_i = -1, min_q = 101, min_i = -1;
    for (int i = 0; i < 5; i++)
	 {
        if (total_quantities[i] > max_q) 
		{
            max_q = total_quantities[i];
            max_i = i;
        }
        if (total_quantities[i] > 0 && total_quantities[i] < min_q) 
		{
            min_q = total_quantities[i];
            min_i = i;
        }
    }
    
    printf("\n ~  Cafe Summary ~ \n");
    printf("Total Revenue: $%d\n", total_revenue);
    printf("Total Items Sold: %d\n", total_items_sold);
    printf("Most Ordered Item: %s\n", (max_i == -1) ? "N/A" : item_names[max_i]);
    printf("Least Ordered Item: %s\n", (min_i == -1) ? "N/A" : item_names[min_i]);
    printf("--------------------\n");

    return 0;
}
