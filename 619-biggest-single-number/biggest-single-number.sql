SELECT MAX(num) as num from (
    SELECT num from Mynumbers group by num having count(*)=1)as num;