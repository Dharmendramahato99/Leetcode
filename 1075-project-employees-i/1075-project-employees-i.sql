# Write your MySQL query statement below
SELECT p.project_id,Round(AVG(experience_years),2) as average_years from Project p LEFT JOIN Employee e
ON p.employee_id = e.employee_id
group by p.project_id;  