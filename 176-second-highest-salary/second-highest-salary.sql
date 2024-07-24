SELECT MAX(SALARY) as SecondHighestSalary from employee WHERE 
SALARY<(SELECT MAX(SALARY) from employee);