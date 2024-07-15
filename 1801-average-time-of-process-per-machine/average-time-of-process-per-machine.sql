# Write your MySQL query statement below
SELECT a.machine_id,ROUND(AVG(p.timestamp-a.timestamp),3) as processing_time
FROM Activity a INNER JOIN Activity p ON
a.machine_id=p.machine_id AND
a.process_id=p.process_id AND
a.activity_type='START' AND p.activity_type='END' 
GROUP BY machine_id;
