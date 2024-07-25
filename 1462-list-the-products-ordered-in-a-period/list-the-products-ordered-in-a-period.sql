# Write your MySQL query statement below
SELECT p.product_name,sum(o.unit) as unit FROM PRODUCTS p
LEFT JOIN ORDERS o on p.product_id=o.product_id WHERE order_date between '2020-02-01' and '2020-02-29' GROUP BY p.product_id having unit>=100;