# Write your MySQL query statement below

SELECT employee_id FROM 
EMPLOYEES WHERE salary <30000 and manager_id NOT IN (select employee_id from EMployees) ORDER BY Employee_id;