SELECT
name,bonus from EMPLOYEE LEFT JOIN Bonus Using(empId) 
Where
bonus<1000 OR bonus IS NULL;