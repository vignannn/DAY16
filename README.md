This program simulates a simple cafe order management system using 1D arrays, loops, and Conditional statements .
In the starting , the program displays a fixed menu of five items - ( Coffee , Tea , Sandwich ,Burger , and Pastry ) each with a fixed price. These are stored in two parallel 1D arrays , One for item names and other for their prices . Another array , total_quantities[] , keeps ytrack of how many units each item are sold throughout the day. 
The user if first asked how many customeres visited the cafe . For each customer : 
   1. The progrgams asks how many different items they ordered.
   2. For each item, it accepts the item number and quantity.
   3. The customer's total bill is calculated by multiplying the item price with the quantity ordered .
   4. The total revenue and total number of items sold are updated as each order is processed.
Once all the customer's orderd are completed , the program loops through the total_quantity[] array to find the most ordered item ( highest quantity sold ) and the least ordered item ( lowest non -zero quantity sold ).
Finally , it displays a cafe summary showing total revenue , total items sold , and which items were the most and least ordered .
