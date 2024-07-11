# Write your MySQL query statement below
select w1.id from Weather w1 Join Weather w2 WHERE
DATEDIFF(w1.recordDate,w2.recordDate)=1 and 
w1.temperature > w2.temperature;