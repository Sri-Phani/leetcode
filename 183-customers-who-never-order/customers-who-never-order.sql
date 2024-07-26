# Write your MySQL query statement below
SELECT name as Customers
FROM CUSTOMERS WHERE id not in(select customerId from Orders);