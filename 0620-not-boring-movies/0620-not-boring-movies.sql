# Write your MySQL query statement below
select * from Cinema Where mod(id,2) <> 0 and description not in ('boring') ORDER BY rating DESC;