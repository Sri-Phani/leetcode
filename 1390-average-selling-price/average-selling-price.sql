# Write your MySQL query statement below
SELECT a.product_id,IFNULL(ROUND(SUM(a.price*b.units)/SUM(b.units),2),0) as average_price FROM 
Prices a LEFT JOIN UnitsSold b ON
a.product_id=b.product_id AND
b.purchase_date BETWEEN start_date AND end_date
GROUP BY product_id;