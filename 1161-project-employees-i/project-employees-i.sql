# Write your MySQL query statement below
select p.PROJECT_ID,ROUND(AVG(e.experience_years),2) as average_years FROM Project p 
Join Employee e ON e.employee_id=p.employee_id GROUP BY p.project_id;