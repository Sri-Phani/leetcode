# Write your MySQL query statement below
select Product.product_name,Sales.year,Sales.price from Product JOIN Sales on Product.product_id=Sales.product_id;