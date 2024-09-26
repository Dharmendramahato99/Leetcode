# Write your MySQL query statement below
SELECT contest_id,ROUND((COUNT( user_id))*100/(SELECT COUNT(user_id) from Users),2) as percentage
FROM Register
group by contest_id
order by percentage DESC,contest_id;


