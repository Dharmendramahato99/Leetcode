# Write your MySQL query statement below
SELECT query_name,ROUND(AVG(rating/position),2) as quality,
ROUND(AVG(IF(rating<3,1, 0))*100,2) as poor_query_percentage from Queries WHERE query_name IS NOT NULL
group by query_name;

