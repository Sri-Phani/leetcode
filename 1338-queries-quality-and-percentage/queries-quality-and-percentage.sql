SELECT query_name, 
       ROUND(SUM(rating /position) / COUNT(query_name), 2) AS quality,
       ROUND(AVG(if(rating<3,1,0))*100,2) as poor_query_percentage
FROM Queries WHERE query_name is not null
GROUP BY query_name;
